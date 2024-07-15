//#include <iostream>
//using namespace std;
//class Student 
//{
//	public:
//	// What is public ?
//	
//	string name;
//	int attendence;
//	float total_marks;
//	void calculate_percentage()
//	{
//		cout << total_marks << "%";
//	}
//};
//
//
//
//int main()
//{
//	Student a,b,c;
//	
//	// Student is the class
//	// and a,b,c are the objects of that templates / class
//	
//	a.name = "Bablu";
//	a.attendence = 90;
//	a.total_marks= 80;	
//	a.calculate_percentage();
//	return 0;
//}


//
//// You are making a software for a bank //
//
//class Bank_client
//{
//	public:
//		
//		string name;
//		int credit_number;
//		int cvv;
//		string user_name;
//		string password;
//};
//
//int main()
//{
//	Bank_client a,b,c;
//	
//	a.name = "Bablu";
//	a.password = "Enjoyc++";
//	a.cvv = 788;
//	a.credit_number = 1234567890;
//	cout << "The password of bablu is " << a.password;
//	cout << a.cvv;
//	cout << a.credit_number;
//	return 0;
//}


//
//// You are making a software for a bank //
//
//class Bank_client
//{
//	private:
//		
//		int credit_number;
//		int cvv;
//		string user_name;
//		string password;
//		
//		public:
//			
//		string name;
//		
//		// Here wen use public functions to set private data
//		// Private members are accessible inside class and only inside the class
//		// ***** To access stuff of an object you definately need a public element, as private elements of an object are always inacessible
//		
//		void set_credit_card_number(int number)
//		{
//			credit_number = number;
//		}
//		
//		void get_creditcardnumber()
//		{
//			cout << "The credit card number is " << credit_number;
//		}
//};
//
//int main()
//{
//	Bank_client a,b,c;
//	
//	a.name = "Bablu";
//	
//	a.set_credit_card_number(1234567890);
//	a.get_creditcardnumber();
//
//	return 0;
//}


#include <iostream>
using namespace std;
class Student 
{
	public:
	// What is public ?
	
	string name;
	int attendence;
	float total_marks;
	void calculate_percentage()
	{
		cout << total_marks << "%";
	}
};

// You are making a software for a bank //

class Bank_client
{
	private:
		
		int credit_number;
		int cvv;
		string user_name;
		string password;
		
		public:
			
		string name;
		
		// Here wen use public functions to set private data
		// Private members are accessible inside class and only inside the class
		// ***** To access stuff of an object you definately need a public element, as private elements of an object are always inacessible
		
		void set_credit_card_number(int number)
		{
			credit_number = number;
		}
		
		void get_creditcardnumber()
		{
			cout << "The credit card number is " << credit_number;
		}
		
		void set_allthestuffatonce(int number , int name , int pass)
		{
			credit_number = number;
			name = name;
			password = pass;
		}
		
		// We use get functions to get this data
		// We use set functions to get this data
};

int main()
{
	Bank_client a,b,c;
	
	a.name = "Bablu";
	
	a.set_credit_card_number(1234567890);
	a.get_creditcardnumber();

	return 0;
}
