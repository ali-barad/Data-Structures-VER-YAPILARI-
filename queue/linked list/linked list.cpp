/*/OGRENCI AD / SOYAD : ALI BARAD
* KONU : queue(linked list)
*/


#include <iostream>
using namespace std;



struct node {
	int data;
	node* next;
};


node* front = NULL;
node* rear = NULL;


void enqueu(int value) {

	node* new_node = new node;

	new_node->data = value;
	new_node->next = NULL;

	if (front == NULL) {
		front = rear = new_node;
	}
	else {
		rear->next = new_node;
		rear = new_node;
	}

}
void dequeue() {


	if (rear == NULL) {
		cout << "queue is empty . ";
	}

	else if (front == rear) {
		node* ptr = front;
		front = rear = NULL;
		delete (ptr);
	}
	else {
		node* ptr = front;
		front = front -> next;
		delete (ptr);

	}
}
int peek() {

	if (front == NULL) {

		cout << "queue is empty.";
	}

	else {
		return front->data;
	}
}

void display() {

	if (front == NULL) {

		cout << " queue is empty . ";
	}
	else {

		node* ptr = front;

		while (ptr != NULL){
			cout << ptr->data << " ";
		ptr = ptr->next;
			}

		cout << endl;
	}
}
int main() {
	enqueu(10);
	enqueu(20);
	enqueu(30);
	enqueu(40);

	display();
	cout << endl;

	dequeue();
	display();

	cout << endl;
	cout << "peekTop : " << peek();




}

