#include <iostream>
using namespace std;
int partition(int *arr, int start, int end)
{
	int i, number_lessthan_part;
	for(i=start+1,number_lessthan_part=0;i<end+1;i++)
	{
		if(arr[i]<arr[start])
		{
			number_lessthan_index++;
		}
	}
	int correct_index;
	correct_index = start+number_lessthan_part;
	int temp;
	temp = arr[start];
	arr[start] = arr[correct_index];
	arr[correct_index] = temp;
	int j;
	i =start;
	j = end;
	while(i<correct_index && j>correct_index)
	{
		while(arr[i]>arr[correct_index])
		{
			i++;
		}
		while(arr[j]>arr[correct_index])
		{
			j--;
		}
		if(i<correct_index && j>correct_index)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	return correct_index;
}
void quicksort(int *arr, int start, int end)
{
	if(start>=end) return;
	int partition_index;
	partition_index = partition(arr, start, end);
    quickSort(arr,start,partition_index-1);
    quickSort(arr,partition_index,end);
}
int main()
{
	int size;
	int arr[7] = {5,1,3,10,7,14,2};
	size = 7;0
	quicksort(arr,0,size-1);
	int k;
	for(k=0;k<size;k++)
	{
		cout << arr[k]<<" ";
		return 0;
	}
}
