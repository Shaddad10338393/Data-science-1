#include<iostream>
#include<cmath>
using namespace std;
 
 double add()
 {
 	double sum;
 	double num;
 
 	for(num=0.01;num<=1;num=num+0.01)
 		sum+=num;
 		cout<<sum<<endl;
 		return sum;



 	}
 
 int main()
 {
 	add();
 }