// Bubble Sort Algorithm.

#include<iostream>
using namespace std;

void bubbleSort(int *arr, int size){
	
	int i, j, temp;
	
	for(i=0; i<size-1; i++){
		
		for(j=0; j<size-1-i; j++){
			
			if(arr[j] > arr[j+1]){
				
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
			
		}
		
	}
	
}

int main(){
	
	int arr[] = {12, 34, 11, 45, 67, 78};
	
//	cout<<sizeof(arr)/sizeof(arr[0]);
	cout<<"Array Before Sorted: ";
	for(int i=0; i<6; i++)
		cout<<arr[i]<<",  ";
	cout<<endl;
	
	bubbleSort(arr, sizeof(arr)/sizeof(arr[0]));
	
	cout<<"Array After Sorted: ";
	for(int i=0; i<6; i++)
		cout<<arr[i]<<",  ";
	cout<<endl;
	
	return 0;
}
