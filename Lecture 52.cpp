#include<iostream>
using namespace std;
// we achieve this using something called a "class "
// A class is a user defined datatype which can be customized however we want 
class student
{
    public:
    string name;
    int mids;
    float ends;
    bool pre_abs;
//I also want to find the marks of a student 
void display_calculate_marks()
{
    float total_marks;

    total_marks=mids*0.5+ends*0.75;

    cout<<"The marks of "<<name<<"is "<<total_marks;
}

void totalmarksincludingproject(int project_marks)
{
    cout<<mids+ends+project_marks;
}

void calculate_fail_probability()
{
    if(ends<=10) cout<<"yes this student needs to attend the same class for one more year";

}
}; 

class vehicle
{
    public:

    string car_name;
    string tyre_name;
    int number_of_tyres;
int Number_of_seats;
int number_of_miles_travelled;

void distancetravelledbycar()
{
    cout<<number_of_miles_travelled;
}
};
int main()
{
    // There are a class of 30 student and each student has the following data associated with him :
   student a;  // here a,b,c are of type student 
//    int d,e,f;  // here d,e,f are of type int 
//    vehicle hyundai, suzuki,ferrari
//First let us feed the data of student A
a.name="Rohit";
a.mids=50;
a.ends=99.5;
a.pre_abs=1;
a.display_calculate_marks();
a.totalmarksincludingproject(10);
vehicle b; //The instance of a class is called an object 
b.car_name="Verna";
b.Number_of_seats=2;
b.number_of_tyres=4;
b.tyre_name="Michellen";
}
