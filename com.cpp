#include<iostream>
#include<cmath>
using namespace std;

double sales(double a)

{
cout<<"input your sales for the day"<<endl;
cin>>a;
double commission=a*0.02;
cout<<"your commission for the day is"<<commission<<endl;
if(commission>10){cout<<"well done"<<endl;

}
else{
	cout<<"you need more sales"<<endl;
}
return commission;
}
int main()
{
	double a;
	sales(a);
}