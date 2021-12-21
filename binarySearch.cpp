//Binary Searching Algorithm.

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

bool binarySearch(int *a, int left, int right, int search_element){
	
	int middle; 
  if(right >= left) 
  { 
    middle = (left + right)/2; 
    if(a[middle] == search_element)
    { 
      return true; 
    } 
    else if(a[middle] < search_element)
    { 
      return binarySearch(a,middle+1,right,search_element); 
    } 
    else
    { 
      return binarySearch(a,left,middle-1,search_element); 
    }

  } 
  return false; 
	
}

bool binarySearch(int *arr, int size, int key){
	
	return binarySearch(arr, 0, size-1, key);
	
}

int main(){
	
	int arr[] = {12, 34, 11, 45, 67, 78};
	bubbleSort(arr, sizeof(arr)/sizeof(arr[0]));
	int key;
	cout<<"Enter a Key: ";
	cin >> key;
	
	if(binarySearch(arr, sizeof(arr)/sizeof(arr[0]), key)){
		cout<<"Key found!"<<endl;
	}else{
		cout<<"key doesn't exists!"<<endl;
	}
	
	return 0;
	
}
