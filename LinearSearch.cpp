//Linear searching Algorithm.

#include<iostream>

using namespace std;

bool LinearSearch(int *arr, int size, int key){
	
	for(int i=0; i<size; i++){
		
		if(arr[i] == key){
			
			return true;
			
		}
		
	}
	
	return false;
	
}

int main(){
	
	int arr[] = {12, 34, 11, 45, 67, 78};
	int key;
	cout<<"Enter a Key: ";
	cin >> key;
	
	if(LinearSearch(arr, sizeof(arr)/sizeof(arr[0]), key)){
		cout<<"Key found!"<<endl;
	}else{
		cout<<"key doesn't exists!"<<endl;
	}
	
	return 0;
	
}
