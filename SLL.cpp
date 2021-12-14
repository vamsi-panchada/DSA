#include<iostream>
using namespace std;


class Node{
	public:
	int data;
	Node* next;
};


class SLL{
	
	private:
		Node *first;
		int size;
	public:
		SLL(){
			first = NULL;
			size = 0;
		}
		
		bool insertFirst(int);
		bool insertEnd(int);
		bool insertAt(int, int);
		bool deleteEnd(int&);
		bool deleteFront(int&);
		bool deleteAt(int, int&);
		bool search(int);
		bool deleteElement(int);
		void display();
	
};


bool SLL::insertFirst(int x){
	
	Node *n;
	n = new Node;
	if ( n == NULL){
		return false;
	}
	
	n.data = x;
	n.next = NULL;
	n.next = first;
	first = n;
	size = size + 1;
	
	return true;
}


bool SLL::insertEnd(int x){
	
	Node  *n;
	n = new Node;
	
	if ( n==NULL){
		return false;
	}
	
	n.data = x;
	n.next = NULL;
	
	if(first == NULL){
		first = n;
		size = size + 1;
		return true;
	}
	
	Node *t;
	
	t = first;
	
	while(t != NULL){
		
		if (t.next == NULL){
			
			t.next = n;
			size = size +1;
			return true;
			
		}
		
		t = t.next;
		
	}
	
}


bool SLL::deleteFront(int &x){
	
	if(first == NULL){
		
		x = -1;
		return false;
	}
	x = first.data;
	
	Node *t ;
	t = first;
	first = first.next;
	size = size - 1;
	delete(t);
	return true;
}


bool SLL::deleteEnd(int &x){
	
	if(first == NULL){
		
		x = -1;
		return false;
		
	}
	
	Node *t, *p;
	
	t = first;
	p = NULL;
	while(t!=NULL){
		
		if(if t.next != NULL){
			p = t;
			t = t.next;
			
		}else{
			x = t.data;
			p.next = NULL;
			delete(t);
			size = size -1;
			return true;
		}
		
	}
	
}

void SLL::display(){
	
	if(first == NULL){
		
		cout << "List is empty"<,endl;
		return;
		
	} else{
		
		node *t;
		t= first;
		
		while(t != NULL){
			
			cout << t.data<<"  ";
			
			t = t.next;
			
		}
		cout<<endl;
		
	}
	
}

int main(){
	
	SLL sll= SLL();
	
	int c;
	
	do{
		
		cout<<""
		
	}
	
	return 0;
}
