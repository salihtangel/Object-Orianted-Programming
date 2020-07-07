#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
const int MAX = 10;		//it must be max 10 if it would be unique
int is_it_error_1(char one[MAX],char two[MAX],int digit){	//check is it error 1
	int i=0;
	if(strlen(one)!=strlen(two))
		return 0;
	else
		return 1;
}
int  is_it_same(char one[MAX],char two[MAX],int digit){		//check is it finish
	int i=0;
	for(;i<digit;i++){
		if(one[i]!=two[i])
			return 0;
	}
	return 1;
}
int  check(char one[MAX],char character,int digit){		//check for random number
	int i=0;
	for(;i<digit;i++){
		if(one[i]==character)
			return 0;
	}
	return 1;
}
int is_it_error_0(char one[MAX], int digit) {		//check is it error 0
	int i = 0, j = digit;
	if (one[i] == '0') return 0;
	for (; i < digit; i++) {
		for(j=0;j<digit;j++){
			if (one[i] == one[j] && i!=j  || one[i] == '-')
				return 0;
		}
	}
	if(digit > 9)
		return 0;
	return 1;
}
int fun_find_exact(char one[MAX], char two[MAX], int digit) {		//find hint exact num
	int i = 0, k = 0;
	for (i = 0; i < digit; i++) {
		if (one[i] == two[i]) k++;
	}
	return k;
}
int fun_find_wrong_placeses(char one[MAX], char two[MAX], int digit) {		//find hint wrong places
	int i = 0, j = 0, k = 0;
	for (; i < digit; i++) {
		for (j = 0; j < digit; j++) {
			if (one[i] == two[j] && i != j) k++;
		}
	}
	return k;
}
int is_it_not_int(char one[MAX]) {		//check is it integer
	int i = 0;
	while (one[i] != '\0') {
		if (!(one[i] >=48 && one[i]<=57 || one[i]== 45) ) {		//between ascii value of 0 and 9 and do not touch negatif value

			return 0;
		}
		i++;
	}
	return 1;
}
int find_digit(int first, int second) {		//find digit
	int i = 1; int j = 1; while (first != 0 && second != 0) {
		first /= 10;
		second /= 10;
		if (first != 0) i++;
		if (second != 0) j++;
	}
	if (i == j)
		return i;
	else {
		return 0;
	}
}
int main(int argc, char *argv[]) {
	int new_num;		//int version of user num
	char user_num[MAX];	//user num
	char random_num[MAX];	//random generate num
	int exact = 0;		//exact hint
	int misplaced = 0;	//misplaced hint
	int game_counter = 0;	//game counter for 100 times
	int digit, i;		//digit numand i for counter

	if (0 == strcmp(argv[1], "-r")) {		//random num game
		if(atoi(argv[2]) > 9){			//for digit control
				cout << "Error 0" << endl;
				return 1;
		}
		do {
			cin >> user_num;	//take user num
			new_num =atoi(user_num);  // convert string to the int number
			digit = find_digit(new_num,new_num);  // find and return digit of numbers

			srand(time(0));
			random_num[0]=(rand() %9+1)+'0';//first digit zero case

			for (i =1; i < atoi(argv[2]); i++) {	//random num part
				int flag=0;
				while(!flag){
					char num=rand()%10 +'0';
					if(check(random_num,num,i)){
						random_num[i]=num;
						flag=1;
					}
				}
			}
			random_num[i] = '\0';  // to see end

			if (0 == is_it_not_int(user_num) ) {		//these parts for error checking
				cout << "Error 2" << endl;
				return 1;
			}
			if (0 ==is_it_error_1(user_num,random_num,digit)) {
				cout << "Error 1" << endl;
				return 1;
			}
			if (0 == is_it_error_0(user_num, digit) ) {
				cout << "Error 0" << endl;
				return 1;
			}
			if(is_it_same(random_num,user_num,digit)){
				cout<<"FOUND\t";
				cout<<game_counter<<endl;
				return 0;
			}
			exact=fun_find_exact(user_num,random_num,digit);	//for hints
			misplaced = fun_find_wrong_placeses(user_num,random_num, digit);
			cout << exact <<"\t"<< misplaced << endl;		//printing hints

			game_counter++;
		} while (game_counter != 100);
	} else if (0 == strcmp(argv[1], "-u")) {		//same thing just random part miss
			strcpy(random_num,argv[2]);		//take secret num;
			new_num=atoi(random_num);
			digit = find_digit(new_num,new_num);  // find and return digit of numbers

			if (0 == is_it_error_0(random_num, digit)) {	//these statements for only for -u case
				cout << "Error 0" << endl;
				return 1;
			}
			if(0 == is_it_not_int(random_num) || digit > 9){
				cout << "Error 0" << endl;
				return 1;
			}
			new_num=0;		//to we will use new_num again
		do {
			cin >> user_num;
			cout<<"Enter A NUMBER"<<endl;
			new_num =atoi(user_num);  // convert string to the int number
			if (0 == is_it_error_0(user_num, digit)){
				cout << "Error 0" << endl;
				return 1;
			}
			if (0 == is_it_not_int(user_num)) {
				cout << "Error 2" << endl;
				return 1;
			}
			if (0 == find_digit(new_num, atoi(random_num))) {
				cout << "Error 1" << endl;
				return 1;
			}
			if(is_it_same(random_num,user_num,digit)){
				cout<<"FOUND\t";
				cout<<game_counter<<endl;
				return 0;
			}
			exact=fun_find_exact(user_num,random_num,digit);
			misplaced = fun_find_wrong_placeses(user_num, random_num, digit);
			cout << exact <<"\t"<< misplaced << endl;

			game_counter++;
		} while (game_counter != 100);
	}
	cout<<"FAILED\t"<<game_counter<<endl;
	return 0;
}
