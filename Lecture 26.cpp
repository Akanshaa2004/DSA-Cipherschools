#include<iostream>
using namespace std;
//int main(){
//char name[5];
//int i;
//for(i=0;i<5;i++){
//	cin>>name[i];
//}
//	cout<<"the name you have just entered is "<<endl;
//	for(i=0;i<5;i++){
//		cout<<name[i];
//	}
//}


int main(){
char name[1000];
cout<<"enter your name : ";
int i;
while(name[i]!="#"){
	cin>>name[i];
	i++;
}
i=0;
	cout<<"the name you have just entered is "<<endl;
	while(name[i]!="#"){
		cout<<name[i];
	}
}
