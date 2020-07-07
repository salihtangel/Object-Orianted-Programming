
friend std:: ostream& operator<< (std:: ostream &out,const Point &p);
#include<iostream>


class Point
{
	private:
		double m_x,m_y,m_z;
	public:
		Point(double x=0.0,double y=0.0,double z=0.0): m_x(x),m_y(y),m_z(z)
		{
		}
	friend std:: ostream& operator <<(std:: ostream &out,const Point &);
};


std:: ostream& operator<<(ostreram & out, const Point &p)
{
	out<< "Point"(<<pointm_x <<","<<point.m_y,<<","<<point.m_z")";
	return out;
}

int main(int argc, char *argv[])
{
	Point point1(2.0,3.0,4.0);
	cout<< point1;
	return 0;
}

