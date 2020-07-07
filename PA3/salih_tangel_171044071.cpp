#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//GRAYSCALE YAPMADAN KAYDEDINCE HATA VERIYOR
//= KISMINI ACINCADA DA HATA VERIYOR
class Image {
    public:
	void fun_open();
	void fun_save();
	void fun_grayscale();
	Image() {
	}  // Default constructor
	Image(const Image &p2) {
		int i,j;
		 cin>>filename;
		 imageformat=p2.imageformat;
		 rowcount=p2.rowcount;
		 columncount=p2.columncount;
		 maxcolorvalue=p2.maxcolorvalue;
		RGB = new int*[rowcount];// d. memory
		for(int i = 0; i < rowcount; i++)
		{
			RGB[i]=new int[columncount*3];
		}
		for(i=0;i<rowcount;i++){
			for(j=0;j<columncount*3;j++)
				RGB[i][j] = p2.RGB[i][j] + p2.RGB[i][j];
		}
	}  // Copy constructor
	~Image() {
		for(int i =0;i<rowcount;i++)
			delete[] RGB[i];
		delete [] RGB;
		RGB=nullptr;
		cout<<"Destructor worked"<<endl;
	}  // Destructor		//WORKING BUT IT IS ERASING ADDED IMAGE AFTER I CREATED IT.
	float get_red()const { return red; }
	float get_blue()const { return blue; }
	float get_green()const { return green; }
	int  get_rowcount()const{return rowcount;}
	int  get_columncount()const{return columncount;}
	int **get_RGB()const{return RGB;}
	string get_filename()const{return filename;}
	//Image & operator =(const Image &obj);//NO NEEDED
	void operator =(const Image &obj);//NO NEEDED
	friend Image  operator+(const Image &obj , const Image& obj2);

    private:
	float red;  // for float varibles
	float green;
	float blue;
	int **RGB;
	string imageformat;  // for a3
	string filename;
	int rowcount;     // f/or 4 3
	int columncount;
	int maxcolorvalue;  // for 255
};
Image operator+(const Image &obj1,const Image& obj2) {
	Image newImage=obj1;
	int i=0,j=0;

	for(i=0;i<obj1.rowcount;i++){
		for(j=0;j<obj1.columncount*3;j++)
		{
			newImage.RGB[i][j] = obj1.RGB[i][j] + obj2.RGB[i][j];
			if(newImage.RGB[i][j] > newImage.maxcolorvalue)
				newImage.RGB[i][j]=newImage.maxcolorvalue;
		}
	}
	return newImage;
}
void  Image::operator = (const Image &obj) {
	int i=0,j=0;
	RGB[i][j]=obj.RGB[i][j];
}
void	Image ::fun_open() {
	int i = 0;
	int j = 0;

	cin >> filename;

	ifstream myfile;
	myfile.open(filename);
	if (!myfile) {  // error check
		cerr << "Unable to open file datafile.txt";
		exit(1);  // call system to stop
	}
	myfile >> imageformat;
	myfile >> rowcount;
	myfile >> columncount;
	myfile >> maxcolorvalue;

	RGB = new int*[rowcount];// d. memory
	for(int i = 0; i < rowcount; i++)
	{
		RGB[i]=new int[columncount*3];
	}
	i=0,j=0;
	while (!myfile.eof()) {
		if (j == columncount*3) {		//bir satir bitince 
			i++;
			j = 0;
		}
		myfile >> RGB[i][j];
		j++;
	}
	myfile.close();
}
void Image ::fun_save() {
	int i=0,j=0;

	int choice;
	ofstream newfile;
	cout<<"Please enter a name"<<endl;
	string filename2;
	cin >> filename2;

	newfile.open(filename2);
	if (!newfile.is_open()) {
		cerr << "Unable to open file datafile";
		exit(1);  // call system to stop
	}
	// this part for first three lines
	newfile << imageformat << endl;
	newfile << rowcount <<endl
	<< columncount << endl;
	newfile << maxcolorvalue << endl;

	for(i=0;i<rowcount;i++){
		newfile<<endl;
		for(j=0;j<columncount*3;j++)
		{
			if(j%3==0 && j!=0)
				newfile<<"   ";
			newfile<<RGB[i][j];
			newfile<<" ";
		}
	}
	newfile.close();
}
void Image ::fun_grayscale() {
	int i=0,j=0;
	bool exit2 = false;
	int choice;
	string record2;
	do {
		cout << "enter float numbers[0,1)" << endl;
		cin >> red >> green >> blue;
		if (red < 1 && red >= 0 && green < 1 && green >= 0 &&
		    blue < 1 && blue >= 0)
			exit2 = false;
		else {
			cout << "wrong num" << endl;
			exit2 = true;
		}
	} while (exit2);

	for(i=0;i<rowcount;i++){
		for(j=0;j<(columncount*3);j++){
			if(i%3==1){
				RGB[i][j]*=green;
			}
			else if(i%3==0){
				RGB[i][j]*=red;
			}
			else if(i%3==2){
				RGB[i][j]*=blue;
			}
			if(RGB[i][j]>maxcolorvalue){
				RGB[i][j]=maxcolorvalue;
			}
		}
	}
}
int main() {
	bool exit = true;
	int choice1;
	int choice2;
	int image_choice;
	int grayscale_choice;
	string thirdImage_name;
	string filename2;
	Image myImage;
	Image secondImage;
	Image thirdImage;
	int i,j;
	do {
		cout << "Main Menu" << endl
		     << "0-Exit" << endl
		     << "-1-Load two Image(D)" << endl
		     << "1-Open An Image(D)" << endl
		     << "2-Save Image Data(D)" << endl
		     << "3-Scripts(D)" << endl
		     << "4-Add two image" << endl;
		cin >> choice1;
		if (choice1 == 0)
			exit = false;
		else if (choice1 == -1) {
			cout << "OPEN  TWO IMAGES(you should  go to  open image from menu too)" << endl
			     << "0 - UP" << endl
			     << "1 - Enter The Name Of The Image File" << endl;
			cin >> choice2;
			if (choice2 == 0) {
				// do nothing
			} else if (choice2 == 1) {
				 secondImage.fun_open();
			}
		} else if (choice1 == 1) {
			cout << "OPEN AN IMAGE MENU" << endl
			     << "0 - UP" << endl
			     << "1 - Enter The Name Of The Image File" << endl;
			cin >> choice2;
			if (choice2 == 0) {
				// do nothing
			} else if (choice2 == 1) {
				   myImage.fun_open();
			}
		} else if (choice1 == 2) {
			cout << "SAVE IMAGE DATA MENU" << endl
			     << "0 - UP" << endl
			     << "1- GO ON"<<endl;
			cin >> choice2;
			if (choice2 == 0) {
				// do nothing
			} else if(choice2 ==1){
				cout << "which image do you like to save ?"<<endl;
				cout<<"(1)-"<<myImage.get_filename()<<endl
				<<"(2)-"<<secondImage.get_filename()<<endl
				<<"(3)-"<<thirdImage.get_filename()<<endl;
				cin >> image_choice;
				if (image_choice == 1)
					myImage.fun_save();
				else if (image_choice == 2)
					secondImage.fun_save();
				else if (image_choice == 3)
					thirdImage.fun_save();
				else {
					cout << "you entered wrong" << endl;
				}
				return 1;
			}
		} else if (choice1 == 3) {
			cout << "SCRIPTS MENU" << endl
			     << "0 - UP" << endl
			     << "1 - Convert To Grayscale(D)" << endl;
			cin >> choice2;

			if (choice2 == 0) {
				// do nothing
			} else if (choice2 == 1) {
				cout << "CONVERT TO GRAYSCALE MENU" << endl
				     << "0 - UP" << endl
				     << "1 - Enter Coefficients For RED GREEN "
					"And BLUE Channels."
				     << endl;
				cin >> choice2;

				if (choice2 == 0) {
				} else if (choice2 == 1) {
					cout << "which image do you like to Grayscale?"<<endl;
					cout<<"(1)-"<<myImage.get_filename()<<endl
					<<"(2)-"<<secondImage.get_filename()<<endl
					<<"(3)-"<<thirdImage.get_filename()<<endl;

					cin >> grayscale_choice;
					if (grayscale_choice == 1)
						myImage.fun_grayscale();
					else if (grayscale_choice == 2)
						secondImage.fun_grayscale();
					else if (grayscale_choice == 3)
						thirdImage.fun_grayscale();
					else {
						cout << "you entered wrong"   << endl;
					}
				}
			}
		} else if (choice1 == 4) {
			cout << "ADD IMAGES " << endl
			     << "0 - UP" << endl;
			if (choice2 == 0) {
				// do nothing
			}else if(choice2 ==1){
				cout<<"write the name of the third image"<<endl;
				myImage+secondImage;
			}
		}
	} while (exit);
}

