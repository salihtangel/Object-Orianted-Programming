#include<iostream>
using namespace std;
template<class T>
class Pair
{
	public:
		Pair();
		Pair(T firstnew,T secondnew);
		T absolute(const Pair<T> &Pair);
		T getFirst()const;
		T getSecond()const;
	private:
		T first;
		T second;
};
template<class T>
T Pair<T>::absolute(const Pair<T> &Pair)//bu obje aliyor demek
{	T  third;
	if(first-second>0)
		third=first-second;
	else if(first-second<0)
		third=second-first;
	return third;
}
template<class T>
Pair<T>::Pair()
{
	first=3;
	second =5;
}
template<class T>
Pair<T>::Pair(T firstnew,T secondnew)
{
	first=firstnew;
	second =secondnew;
}

template<class T>
T Pair<T>::getFirst()const{
	return first;
}
template<class T>
T Pair<T>::getSecond()const{
	return second;
}
int main(int argc, char *argv[])
{
	Pair<int> x;
	cout<<"first_number:"<<x.getFirst()<<"\tsecond_number:"<<x.getSecond()<<endl;
	cout<<x.absolute(x)<<endl;

	Pair<float> y(1.3,4.5);
	cout<<"first_number:"<<y.getFirst()<<"\tsecond_number:"<<y.getSecond()<<endl;
	cout<<y.absolute(y)<<endl;

	Pair<double> t(2.300000000,1.500000000);
	cout<<"first_number:"<<t.getFirst()<<"\tsecond_number:"<<t.getSecond()<<endl;
	cout<<t.absolute(t)<<endl;

	Pair<char> z('A','D');
	cout<<"first_number:"<<z.getFirst()<<"\tsecond_number:"<<z.getSecond()<<endl;
	cout<<static_cast<int>(z.absolute(z));
	return 0;
}
