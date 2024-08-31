#include<iostream>
using namespace std;
class Complex
{
	float real;
	float imag;
	public:
	Complex()
	{
		real=imag=0.0;	
	}	
	void getdata()
	{
		cout<<endl<<"enter real number";
		cin>>real;
		cout<<endl<<"Enter imaginary part";
		cin>>imag;
	}
	friend Complex operator +(Complex c1,Complex c2)
	{
		Complex temp;
		temp.real=c1.real+c2.real;
		temp.imag=c1.imag+c2.imag;
		return temp;
	}

	void display()
	{
		cout<<endl<<"Real value:"<<real;
		cout<<endl<<"Imaginary value:"<<imag;
	}
};
int main()
{
	Complex c1,c2,c3;
	cout<<endl<<"Enter the value for c1";
	c1.getdata();
	cout<<endl<<"Enter the value for c2";
	c2.getdata();	
	c3=c1+c2;
	c3.display();
	return 0;
}