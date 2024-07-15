#include<iostream>
using namespace std;
int main(){
//	int i;
//	i=1;                //initialization
//	while(i<101){       //condition
//		cout<<i<<" ";   //loop
//		i++;            //update
//	}


int i;
int input;
//Guess the number 65
//the user has 100chances
i=100;
for(i=1;i<101;i++){
	cin>>input;
	if(input==65){
		cout<<"congrats you have guessed correct";
		break;
	}
}
}
