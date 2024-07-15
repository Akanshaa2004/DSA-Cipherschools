#include <iostream>
using namespace std;
class Stack
{
	public:
		int *arr;
		int size;
		int top;
		
		stack(int size)
		{
			this->size = size;
			arr = new int[size];
			top =-1;
		}
		void push(int element)
		{
			if(size-top >1)
			{
			   top++;
			   arr[top] = element;	
			}	
			else
			{
				cout << "The stack is already full";
			}
}
void pop()
{
	if(top>=0)
	{
		top--;
	}
	else
	{
		cout << "The stack is currently empty and there are no elements to pop";
	}
}
void peek()
{
	if(top<0) cout << "There are no elements in the stack to peek";
	else
	{
		cout << "The element at the top of the stack is "<<arr[top];
		//return arr[top];
	}
}
bool isEmpty()
{
	if(top<0)
	{
		cout << "The stack is currently empty ";
		return true;
	}
	return false;
}
};
int main()
{
	Stack new_stack(5);
	new_stack.peek();
	new_stack.push(5);
	return 0;
}
