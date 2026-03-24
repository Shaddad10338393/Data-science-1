#include<iostream>
#include<cmath>
using namespace std;

int health(double a,double b)


{const double conversion_factor= 0.45359237;

	//kg is kilograms and lb is pounds
cout<<"enter your weight in pounds "<<a;
;
cin>>a;
double weight2=0.45359237*a;


const double factor=0.0254;

cout<<"enter your height in inches"<<b;
cin>>b;
double height2=0.0254*b;

  double BMI=weight2/(height2*height2);
  double result=BMI;

  if(result<18.5){
  	cout<<"you are underweight"<<endl
  	;}
  else if(result>=18.5 && result<30){
  	cout<<"you are normal"<<endl;}

  else if(result>=25.0 && result<30){
  	cout<<"you are overweight"<<endl;

  }
  else
  {

  	cout<<"you are obese"<<endl;}
  	return 0;
  	

}
int main()
{
double a;
double b;
 health(a ,b);
}
