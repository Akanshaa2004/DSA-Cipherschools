#include<iostream>
using namespace std;
// The vehicle is a base class 
class Vehicle
{
  public : 
  int number_tyers;
   string name;
   int capacity;
   int milegage;
};
//Now I will inherit the feature of the base class into derived class 
class SchoolBus : public Vehicle 
{
string  school_name;
int number_holidays;
     public:
    void printname()
    {
        cout<<"halaulueah"<<name;
    }
};
class Car: public  Vehicle 
{
   public :
     int number_airbags;
     int ac_consumption;
public :
void printname()
{
    cout<<name;
}
};
class SUV: public Car
{
public :
int four_wheel_drive;
};
int main()
{
   Car a;
SchoolBus b;
a.name="Suzuki";
b.name="Toyota";
a.printname();
cout<<endl;
b.printname();
}
// The base class be public 
