//Insertion sort algorithm.

#include<iostream>
using namespace std;

void insertionSort(int *arr, int size){
	
	int i, j, target;
	
	for(i=1; i<size; i++){
		
		target = arr[i];
		
		j= i-1;
		
		while(j>= 0 && arr[j] > target){
			
			arr[j+1] = arr[j];
			j = j-1;
			
		}
		
		arr[j+1] = target;
	}

	
}

int main(){
	
	int arr[] = {12, 34, 11, 45, 67, 78};
	
//	cout<<sizeof(arr)/sizeof(arr[0]);
	cout<<"Array Before Sorted: ";
	for(int i=0; i<6; i++)
		cout<<arr[i]<<",  ";
	cout<<endl;
	
	insertionSort(arr, sizeof(arr)/sizeof(arr[0]));
	
	cout<<"Array After Sorted: ";
	for(int i=0; i<6; i++)
		cout<<arr[i]<<",  ";
	cout<<endl;
	
	return 0;
	
}
