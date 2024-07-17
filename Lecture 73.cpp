#include<iostream>
using namespace std;
void simplesearch(int* arr,int l,int r,int val){
	int i;
	for(i=l;i<r;i++){
		if(arr[i] == val){
			cout<<"congrats your val is present in arr "<<endl;
			return;		
		}
	}
	cout<<"val isn't present"<<endl;
	return;
}
int binarysearch(int* arr, int s, int e, int val) {
    if (s > e) {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == val) {
        return mid; 
    } else if (val < arr[mid]) {
        return binarysearch(arr, s, mid - 1, val);
    } else {
        return binarysearch(arr, mid + 1, e, val);
    }
}
int main() {
    int arr[7] = {1, 2, 3, 4, 5, 7, 10};
    int size = 7;
    int result = binarysearch(arr, 0, 6, 10);
    if (result != -1) {
        cout << "your val is present in arr at index " << result << endl;
    } else {
        cout << "val isn't present" << endl;
    }
    return 0;
}
