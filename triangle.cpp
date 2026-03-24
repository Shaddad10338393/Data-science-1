#include<iostream>
#include<cmath>
using namespace std;
  
 double area(double a,double b,double c){
 
 cout<<"enter your lengths"<<a<<b<<c<<endl;
 cin>>a>>b>>c;
  if(a==b && b==c){
  	double result=a*b*c;
  	cout<<"the area is "<<result<<endl;
  	return result;

  }
  else{
  	cout<<"input not valid"<<endl;
  	return 0;
  }
 }
 int main()
 {
 	double a;
 	double b;
 	double c;
 	area(a,b,c);
 }