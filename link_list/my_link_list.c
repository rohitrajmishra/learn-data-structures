#include <stdio.h>

struct Node {
	int data;
	struct Node *next;
};

Node *head;

int Print() {
	Node *temp = head;	
	while(temp->next != NULL)
	{
		printf("%d ", temp->data);			
		temp = temp->next;
	}
	printf("\n");
	return 0;
}
int main(void) {
	//Link list implementation code
	Print();
	return 0;
}

