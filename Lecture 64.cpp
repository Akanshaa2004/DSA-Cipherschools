#include <iostream>
using namespace std;
void merge(int *arr, int start, int end)
{
int mid = (start+end)/2;
int len1,len2;
len1 = mid - start + 1;
len2 = end - mid; 
int * arr1 = new int [len1];
int * arr2 = new int [len2];
// Creating the arrays by copying the elements
int main_arr_index; 
int i;
for(i=0;i<len1;i++)
{
	arr[i] = arr[main_arr_index]; // This is basically copying all of the first half of the sorted arr into arr1
}
for(i=0;i<len2;i++)
{
	arr2[i] = arr[main_arr_index];
	main_arr_index++;
}
int index_1,index_2;
index_1=0;
index_2=0;
main_arr_index=0;
while(index_1<len1 && index_2<len2)
{
	if(arr1[index_1]<arr2[index_2])
	{
	    arr[main_arr_index] = arr1[index_1];
		main_arr_index++;
		index_1++; 
	}
	else
	{
		arr[main_arr_index] = arr2[index_2];
		main_arr_index++;
		index_2++;
	}
}
// Now this is till one of the array is completely iterated
// After which you have the place the left over elements of the other array in the main array which is what we are doing below
while(index_1<len1)
{
	arr[main_arr_index] = arr1[index_1];
	main_arr_index++;
	index_1++;
}
while(index_2<len2)
{
	arr[main_arr_index] = arr1[index_2];
	main_arr_index++;
	index_2++;
}
}
void mergeSort(int *arr, int start, int end)
{
	if(start>-end) 
	{
		return;
	}
	int mid;
	mid = (start+end)/2;
	mergeSort(arr,start,mid);
	mergeSort(arr,mid+1,end);
	merge(arr,start,end);
}
int main()
{
	int size_arr;
	int arr[5] = {1,5,3,10,4};
	size_arr = 5;
	mergeSort(arr,0,4);
	int k;
	for(k=0;k<size_arr;k++)
	{
		cout << arr[k]<<" ";
	}
	return 0;
}
