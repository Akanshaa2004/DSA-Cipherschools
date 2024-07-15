#include<iostream>
using namespace std;
//class Complex{
//	private:
//		float real;
//		float img;
//		public:
//			void set_parameters(int real,int img){
//				this->real=real;
//				this->img=img;
//							}
//		void SqdistancefromOrigin(){
//			float dist;
//			dist=real*real+ img*img;
//			cout<<"the distance from origin is "<<dist;
//			return;
//		}
//};
//int main(){
//	Complex a,b;
//	a.set_parameters(3,4);
//	a.SqdistancefromOrigin();
//}

//// I am a merchat and defining a class to store the among which the user gives to me and the number of days it has been since the user has given me money
//class New_account
//{
//	public:
//		int amount;
//		int days;
//		
//		// Since a constructor has no return type, we dont need to write anything at the start like int, void and stuff
//		
//		New_account()
//		{
//			amount = 0;
//			days = 0;
//			
//			cout << "The constructor is called now ";
//			
//			// No need to return anything
//		}
//
//~New_account()
//{
//	cout << "Now the use of the objects is complete and the object is getting destroyed ";
//}
//};
//
//class motorbike
//{
//	public:
//		int num_wheels;
//		int lights;
//};
//int main()
//{
//	// Now i will try to do this while object is being created itself
//	New_account a;
//	New_account b;
//		// The constructor *is begin called over here too
//	// This function needs to be called everytime the object is created to set the parameters	
//	cout << endl << "Here all the functions and calculations take place " << endl;
//	return 0;
//}


// I am a merchat and defining a class to store the among which the user gives to me and the number of days it has been since the user has given me money
class New_account
{
	public:
		int amount;
		int days;
		
		// Since a constructor has no return type, we dont need to write anything at the start like int, void and stuff
		
		New_account(int amt,int d)
		{
			amount=amt;
			days=d;
			cout << "The constructor is called now ";
			
			// No need to return anything
		}
		void print_account_details()
		{
			cout << "the amount is "<<amount<<" ";
			cout << "The number of days is " << days << endl;
		}
~New_account()
{
	cout << "Now the use of the objects is complete and the object is getting destroyed ";
}
};

class motorbike
{
	public:
		int num_wheels;
		int lights;
};
int main()
{
	// Now i will try to do this while object is being created itself
    New_account a(100,0);
	// The constructor *is begin called over here too
	
	a.print_account_details();

	// This function needs to be called everytime the object is created to set the parameters
	
	New_account b(100,5);
	b.print_account_details();
	
	cout << endl << "Here all the functions and calculations take place " << endl;

	return 0;
}
