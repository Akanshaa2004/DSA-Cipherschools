//#include<iostream>
//using namespace std;
//int sum(int a,int b){
//	int c;
//	c=a+b;
//	a=10;
//	b=11;
//	return c;
//}
//int main(){
//	int a,b;
//	a=3;
//	b=5;
//	int c;
//	cout<<a<<b<<endl; //these values are before i call the function sum
//	c=sum(a,b);  //values are getting copied
//	cout<<c<<endl;
//	cout<<a<<b<<endl; //these values are after i call the function
//	return 0;
//}



#include<iostream>
using namespace std;
int sum(int a,int b); //i have declared the function called sum exists but the body does not.
int main(){
	int a,b;
	a=3;
	b=5;
	int c;
	cout<<a<<b<<endl;
	c=sum(a,b); 
	cout<<c<<endl;
	cout<<a<<b<<endl;
	return 0;
}
int sum(int a,int b){
	return a+b;
}
