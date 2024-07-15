#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	int *p;
	int *q;
	q=&b;
	p=&a;
	a=1;
	b=5;
	c=*p+*q;
	cout<<"the value of a is "<<a<<endl;
	cout<<"the value of a from pointer is "<<*p<<endl;
	cout<<"the value of c is "<<c<<endl;
}
