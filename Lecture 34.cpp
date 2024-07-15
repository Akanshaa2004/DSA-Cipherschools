#include<iostream>
#include<vector>
using namespace std;

int main()

{

   int *arr;
   arr=new int[5];

   delete arr;

   // A vector  is an array whose size is not fixed and will allocate space verytime you add a new element to it;

vector<int>a;

cout<<"The size of the vector is : "<<a.size();

int i;
for(i=0;i<5;i++)
{
    a.push_back(i+1);

    cout<<"The size of the vector is : "<<a.size();
    a.pop_back();
    cout<<"The size of the vector is : "<<a.size();

    cout<<"The first element of the vector is "<<a[0]<<endl;

    for(auto j=a.begin();j<a.end();j++)
    {
        cout<<*j;

    }
     cout<<a.capacity()<<endl;

}
}
