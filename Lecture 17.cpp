#include<iostream>
using namespace std;
void PrintHi()
{
	cout<<"Hi"<<endl;
	return;
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	cout<<"the value of c is "<<c<<endl; //here the result of a+b is 10 so the value of c is 10
	return c;
	//variables which are declared inside a function are called local variables;
}
int main(){
	PrintHi();
	int a,b;
	int c;
	a=4;
	b=6;
	c=75;
	int d=sum(a,b);
	cout<<"the sum is equal to "<<d;
	cout<<"the value of c is "<<endl; //here it will show the c is 75 because of the value of c in main function is 75
	return 0;
	
}
