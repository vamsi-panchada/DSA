#include<iostream>
using namespace std;

class stack{
	private:
		int *data;
		int top;
		int size;
	
	public:
		stack(int);
		bool push(int);
		bool pop(int&);
		bool peep(int&);
		bool isStackEmpty();
		bool isStackFull();
		void makeStackEmpty();
};

stack::stack(int n){
	
	size = n;
	top = -1;
	data = new int[size];
	
}

bool stack::isStackEmpty(){
	if (top == -1)
	return true;
	else
	return false;
}

bool stack::isStackFull(){
	if (top == size-1)
	return true;
	else
	return false;
}

void stack::makeStackEmpty(){
	top = -1;
}

bool stack::push(int x){
	
	if(isStackFull()){
		return false;
	}
	else{
		top = top+1;
		data[top] = x;
		return true;
	}
	
}

bool stack::pop(int &x){
	
	if (isStackEmpty()){
		x = -1;
		return false;
	}
	else{
		x = data[top];
		top = top -1;
		return true;
	}
	
}

bool stack::peep(int &x){
	if (isStackEmpty()){
		x = -1;
		return false;
	}
	else{
		x = data[top];
		return true;
	}
}

int main(){
	
	int len,x,c;
	bool m;
	cout<<"Enter size of stack: ";
	cin >> len;
	stack s = stack(len);
	cout<<endl;
	do{
		
		cout<<"1. To push into stack."<<endl;
		cout<<"2. To pop from stack."<<endl;
		cout<<"3. To peep from stack."<<endl;
		cout<<"4. To check if stack is full."<<endl;
		cout<<"5. To check if stack is empty."<<endl;
		cout<<"6. To make stack Empty."<<endl;
		cout<<"7. To Exit"<<endl;
		cout<<endl<<"Enter your Option: ";
		cin>>c;
		
		switch (c){
			
			case 1:
				cout<<"Enter a value to insert into stack: ";
				cin >> x;
				m = s.push(x);
				if (m)
				cout<<"Inserted into stack successful."<<endl;
				else
				cout<<"Unable to insert."<<endl;
				break;
			
			case 2:
				m = s.pop(x);
				if (m)
				cout<<"Poped value: "<<x<<endl;
				else
				cout<<"Unable to pop from stack."<<endl;
				break;
			
			case 3:
				m = s.peep(x);
				if (m)
				cout<<"Peeped value: "<<x<<endl;
				else
				cout<<"Unable to peep from stack."<<endl;
				break;
				
			case 4:
				if (s.isStackFull())
				cout<<"Stack is full."<<endl;
				else
				cout<<"Stack is not full."<<endl;
				break;
				
			case 5:
				if (s.isStackEmpty())
				cout<<"Stack is empty."<<endl;
				else
				cout<<"Stack is not empty."<<endl;
				break;
			
			case 6:
				s.makeStackEmpty();
				cout<<"Stack data cleared."<<endl;
				break;
			
			case 7:
				break;
			
			default:
				cout<<"Invalid Input."<<endl;
				break;
					
		}
		
	}while(c != 7);
	
	cout<<"Thanks for using the program.\n :)"<<endl;
	
	return 0;
	
}
