//for any assistance contact at
//vamsivs58@gmail.com

#include<iostream>
using namespace std;

class node{
	
	public:
		
		node *prev;
		int data;
		node *next;
	
};


class DLL{
	
	private:
		node *first;
		int size;
	public:
		SLL(){
			first = NULL;
			size = 0;
		}
		
		bool insertFirst(int);
		bool insertEnd(int);
//		bool insertAt(int, int);
		bool deleteEnd(int&);
		bool deleteFront(int&);
//		bool deleteAt(int, int&);
//		bool search(int);
//		bool deleteElement(int);
		void display();
	
};

bool DLL::insertFirst(int x){
	
	node *n;
	n = new node;
	if ( n == NULL){
		return false;
	}
	
	n->data = x;
	n->next = NULL;
	n->prev = NULL;
	n->next = first;
	first = n;
	size = size + 1;
	
	return true;
	
}

bool DLL::insertEnd(int x){
	
	node  *n;
	n = new node;
	
	if ( n==NULL){
		return false;
	}
	
	n->data = x;
	n->next = NULL;
	n->prev = NULL;
	
	if(first == NULL){
		first = n;
		size = size + 1;
		return true;
	}
	
	node *t;
	
	t = first;
	
	while(t != NULL){
		
		if (t->next == NULL){
			
			t->next = n;
			size = size +1;
			return true;
			
		}
		
		t = t->next;
		
	}
	
	
} 


bool DLL::deleteFront(int &x){
	
	if(first == NULL){
		
		x = -1;
		return false;
	}
	x = first->data;
	
	node *t ;
	t = first;
	first = first->next;
	size = size - 1;
	delete(t);
	return true;
}

bool DLL::deleteEnd(int &x){
	
	if(first == NULL){
		
		x = -1;
		return false;
		
	}
	
	node *t, *p;
	
	t = first;
	p = NULL;
	while(t!=NULL){
		
		if(t->next != NULL){
			p = t;
			t = t->next;
			
		}else{
			x = t->data;
			p->next = NULL;
			delete(t);
			size = size -1;
			return true;
		}
		
	}
	
}

void DLL::display(){
	
	if(first == NULL){
		
		cout << "List is empty"<<endl;
		return;
		
	} else{
		
		node *t;
		t= first;
		
		while(t != NULL){
			
			cout << t->data<<"  ";
			
			t = t->next;
			
		}
		cout<<endl;
		
	}
	
}


int main(){
	
	DLL dll= DLL();
	
	cout<<"\n\nStarting the double linked list application./n/n";
	
	int c,n;
	
	do{
		
		cout<<"\n1.To Add an element at the begining of the list."<<endl;
		cout<<"2.To Add an element at the end of the list."<<endl;
		cout<<"3.To Delete an element at the begining of the list."<<endl;
		cout<<"1.To Delete an element at the end of the list."<<endl;
		cout<<"5.To display all the elements in the list."<<endl;
		cout<<"6.To Exit."<<endl;
		cout<<"\nEnter your option: ";
		cin >>c;
		
		switch(c){
			
			case 1:
				cout<<"\nEnter an element to add at the begining of the list: ";
				cin >> n;
				
				if(dll.insertFirst(n)){
					
					cout<<"\nElement inserted successful.\n";
			} else{
				
				cout<<"\nUnable to insert the element.\n";
				
			}
			break;
			
			case 2:
				cout<<"\nEnter an element to add at the end of the list: ";
				cin >> n;
				
				if(dll.insertEnd(n)){
					
					cout<<"\nElement inserted successful.\n";
			} else{
				
				cout<<"\nUnable to insert the element.\n";
				
			}
			break;
			
			case 3:
				
				cout<<"Deleteing an element from the begining of the list.\n";
				
				if(dll.deleteFront(n)){
					
					cout<<"\nElement "<<n<<" deleted successful.\n";
			} else{
				
				cout<<"\nUnable to delete the element.\n";
				
			}
			break;
			
			case 4:
				
				cout<<"Deleteing an element from the end of the list.\n";
				
				if(dll.deleteFront(n)){
					
					cout<<"\nElement "<<n<<" deleted successful.\n";
			} else{
				
				cout<<"\nUnable to delete the element.\n";
				
			}
			break;
			
			case 5:
				cout<<"Dispalying the list:";
				dll.display();
				cout<<endl;
				break;
				
			case 6:
				break;
				
			default:
				cout<<"\n\n[!] Invalid Input.\nPlease enter again.\n\n";
				break;
			
		}
		
		
	}while(c != 6);
	
	cout<<"terminating program.";
	
	return 0;
}
