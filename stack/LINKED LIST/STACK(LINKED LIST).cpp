/*/OGRENCI AD / SOYAD : ALI BARAD
* KONU : STACK(LINKED LIST) // last in frist out 
*/


#include <iostream>
using namespace std; 


struct node {
	int data; 
	node* next;
};
node* top = NULL; 
void push(int value) {

	node* new_node = new node; 
	new_node->data = value;
	new_node->next = top ;

	top = new_node; 
}

void pop() {
	int value; 
	if (top ==  NULL) {
		cout << " linked list is empty "; 
	}
	else {
		node* remove_node = top; 
		top = remove_node->next;
		value = remove_node->data;

		delete(remove_node);

	}
}

int peek() {

	
	if (top == NULL) {
		cout << "stack underfolw";
	}

	else {
		return top->data;
	}
}

void display() {
	node* ptr; 
	if (top == NULL) {
		cout << "stack underflow";
	}
	else {
		ptr = top; 
		while (ptr != NULL) {
			cout << ptr->data << endl;
			ptr = ptr->next; 
		}
	}
}


int main() {
	push(5);
	push(10);
	push(15);

	display();
	cout << endl;

	pop();
	display();

	cout << endl; 
	cout << "peekTop : " << peek();

	


}

