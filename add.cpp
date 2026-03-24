#include<iostream>
#include<cmath>
using namespace std;
 double add()
 {double sum;
 double num=0;
 	cout<<"enter your numbers";
 	cin>>num;

 	while(num!=0){
 	sum+=num;
 	cin>>num;
 	}
 	cout<<"your sum is "<<sum<<endl;
 	return sum;
 }
 int main()
 {
 	add();
 }
