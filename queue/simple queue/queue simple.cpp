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

	if (rear != size - 1) {


		if (front == -1 && rear == -1) {


			front++;

			queue[++rear] = value;
		}

		else {
			queue[++rear] = value; 
		}

	}
}
void  dequeue() {


	if (front != -1 && rear != -1  && front <= rear) {
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

		for (int i = front; i <= rear; i++) {
			cout << queue[i] << "\n"; 

		}
	}
	else {
		cout << " queue is empty ";
	}

}
int main() {
	enqueu(10);
	enqueu(11);
	enqueu(12);
	display();


	cout << endl; 
	dequeue(); 

	display(); 

	




}

