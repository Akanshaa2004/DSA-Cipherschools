#include<iostream>
using namespace std;
//pointer paasing
//void swap(int *x,int *y){
//	int c;             //x and y are pointers to a,b they store the address of and b
//	c=*x;
//	*x=*y;
//	*y=c;
//	cout<<"The swapping is complete"<<endl;
//}
//int main(){
//	int a,b;
//	a=3;
//	b=4;
//	swap(&a,&b); //passing the address to a and b
//	cout<<"The values of a and b after swapping are : "<<a<<" "<<b;
//	return 0;
//}


//array passing
int main(){
	int a[10];
	cout<<"values for comparision : "<<endl;
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of address of a[0] is "<<&a[0]<<endl;
	cout<<"The value of address of a[1] is "<<&a[1]<<endl;
}
