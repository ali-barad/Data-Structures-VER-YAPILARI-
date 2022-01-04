/*/OGRENCI AD / SOYAD : ALI BARAD
* KONU : STACK(Array) 
*/


#include <iostream>
#define size 5
using namespace std;

int  stack[size];
int top = -1;




void push(int value) {

	if (top == size -1) {
		cout << "stack overflow";
	}
	else {
		top++;
		stack[top] = value;
	}
}
int pop() {

	
	if (top == -1){
		cout << "stack underflow ";
	}

	else {

		return stack[top--];
	}
	
}
int peek() {


	if (top == -1) {
		cout << "stack underfolw";
	}

	else {
		return stack[top];
	}
}

void display() {

	if (top == -1) {
		cout << "stack underflow";
	}
	else {

		for (int i = top; i >= 0; i--) {

			cout << stack[i] << endl;
		}

	}
}


int main() {
	push(10);
	push(20);
	push(30);

	display();
	cout << endl;

	pop();
	display();

	cout << endl;
	cout << "peekTop : " << peek();




}

