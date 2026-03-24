#include<iostream>
#include<cmath>
using namespace std;

double area( double l,double w)
{double length =l;
 double width=w;

	
	cout<<"enter your width and length"<<endl;
	cin>>l>>w;
	double result=l*w;
	cout<<"your result is:"<<result<<endl;
	return result;

}
int main()
{
	double l; 
	double w;
	area(l ,w);

}