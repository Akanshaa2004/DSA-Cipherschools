#include<iostream>
using namespace std;
int main(){
//	float a,b;
//	cout<<"Enter 2 float numbers"<<endl;
//	cin>>a>>b;
//	if(a>0.01 || b>a){
//		cout<<"The condition in if statement is correct"; //will only be printed if the statement in the parentheses is correct
//		
//	}
//	else{
//		cout<<"the condition is false";
//	}


//int marks;
//cout<<"Enter student marks: ";
//cin>>marks;
//if(marks>90){
//	cout<<"A";
//}
//else if(marks>80){
//	cout<<"B";
//}
//else if(marks>70){
//	cout<<"C";
//}
//else{
//	cout<<"pass";
//}


//int a,b,c,d;
//cout<<"give three integers as input: a,b,c"<<endl;
//cin>>a>>b>>c>>d;
//if(a>b && c>d){
//	cout<<"haha";
//} else if(a>b && c<d){
//	cout<<"hehe";
//}
//else(a<b && c>d){
//	cout<<"huhu";
//}


int a;
cout<<"enter a integer ";
cin>>a;
switch(a)
{
	case 1:
		cout<<"the value of a is 1";
		break;
		case 2:
			cout<<"the value of a is 2";
		default:
			cout<<"default wil be always printed";
			break;
}
return 0;
}
