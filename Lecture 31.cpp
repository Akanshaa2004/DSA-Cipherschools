#include <iostream>
using namespace std;
//class Student
//{
//	private:
//		int marks;
//		int attendence;
//		string name;
//		
//		public:
//			void displaymarks()
//			{
//				cout << marks;
//			}
//};
//
//
//int main()
//{
//	int marks;
//	int attendence;
//	string name;
//}



// The vehicle is base class
class Vehicle
{
	public:
		int number_tyres;
		string name;
		int capacity;
		int mileage;
		
	public:
			void calculatemileage()
			{
				cout << "The mileage os "<<mileage;
			}
};

// Now i will inherit the features of the base class into the derived classes
class SchoolBus: public Vehicle
{
		string school_name;
		int number_holidays;
		
		public:
			
		
			void printnameofschool()
			{
				cout << "The name of the school is "<<name;
			}
};
class Car: public Vehicle
{
	private:
		
		int number_airbags;
		int ac_consumption;
};
int main()
{
	Car a;
	a.mileage = 50;
	a.calculatemileage();
}
