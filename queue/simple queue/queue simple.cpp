/*/OGRENCI AD / SOYAD : ALI BARAD
* KONU : queue(simplequeue) 
*/


#include <iostream>
#define size 5
using namespace std;

int queue[size];
int front = -1;
int rear = -1;




void enqueu(int value) {

	if (rear != size -1) {
		
		rear++; 
		front++;

		queue[rear] = value; 
	}
	else {
		cout << "queue is full ";
	}
}
void  dequeue() {

	
	if (front != -1 && rear != -1 && front <= rear ) {
		front++; 
	}

	else {
		cout << " queue is full "; 
	}
	
}
int peek() {


	if (front != -1 && rear != -1 && front <= rear) {
	
		return queue[front];
	}

	else {
		cout << " queue is full ";
	}
}

void display() {
	if (front != -1 && rear != -1 && front <= rear) {

		for (int  i = front; i <= rear; i++) {
			cout << queue[i];

		}
	}
	else {
		cout << " queue is empty ";
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

