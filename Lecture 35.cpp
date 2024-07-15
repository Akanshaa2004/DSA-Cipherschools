 #include<iostream>
 //#include<stack>
 #include<queue>
 #include<list>
 using namespace std;

// int main()
// {
//    queue<int>a;

//    a.push(5);
//    a.push(6);
//    a.push(7);

// //  7  6  5
//    cout<<a.front()<<endl;

//    a.pop();

//    cout<<a.back()<<endl;

// if(a.empty()==0)
// {
//     cout<<"the stack is currently not empty ";
// }
// else
// {
//     cout<<"The stack is empty ";
// }
// a.pop();
// a.pop();

// if(a.empty()==0)
// {
//     cout<<"the stack is currently not empty ";
// }
// else{
//     cout<<"The stack is empty ";
// }
// }

// #include<iostream>
// #include<map>
// using namespace std;

// int main()
// {
//     map<string,int>hash;

//     hash["rohit"]=1;
//     hash["programming"]=2;
//     hash["reddy"]=3;


// for(auto j=hash.begin();j!=hash.end();j++)
// {
//     cout<<"the key will be "<<j->first<<"The value of the key will be "<<j->second<<endl;
// }
// }



int main()
{
    list<int> a;
    a.push_back(4);
    a.push_front(2);
    a.push_back(3);
    a.push_front(2);

    a.pop_back();
    a.pop_front();


    for(auto i=a.begin();i!=a.end();i++)
    {
        cout<<*i;

    }
}
