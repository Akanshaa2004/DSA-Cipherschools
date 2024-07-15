#include <iostream>
using namespace std;
class Student 
{
	public:
	string name;
	int attendence;
	float total_marks;
	void calculate_percentage()
	{
		cout << total_marks << "%";
	}
};
class Bank_client
{
	private:
		
		int credit_number;
		int cvv;
		string password;
		string user_name;
		public:	
			string name;
		// Here wen use public functions to set private data
		// Private members are accessible inside class and only inside the class
		// ***** To access stuff of an object you definately need a public element, as private elements of an object are always inacessible
		
		void set_credit_card_number(int number)
		{
			this->credit_number = number;
			// The pointer to the object is inherently passed by a pointer called "this"
			cout << "The addres of the object calling this functions is " << this << endl;
		}
		
		int get_creditcardnumber()
		{
			cout << "The credit card number is " << credit_number;
			return credit_number;
		}
		
		void set_allthestuffatonce(int number , int name , int password)
		{
			this->credit_number = credit_number;
			this->name = name;
			this->password = password;
		}
		
		// Every object when we define a function, inherently passes the ponter of the object and the pointer is called !"this"
		
		// We use get functions to get this data
		// We use set functions to get this data0
};

int main()
{
	Bank_client a,b,c;
	
	a.name = "eshwar";
	
	a.set_credit_card_number(1234567890);
	// In this function other than parameters of the function, we also pass the pointer of the object of this class, ans the pointer is refferd to by "this"
	
	cout << "The address of this object is " << &a << endl;

	return 0;
}
