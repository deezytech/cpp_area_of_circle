#include<iostream>

//Program to find area of rectangle
using namespace std;
const float PI=3.142;
int main(){
	int radius;
	double area;
	
	cout<<"enter radius";
	cin>>radius;
	
	area=PI*radius*radius;
	cout<<"area: "<<area;
	
	return 0;
}
