#include <iostream>
#include <malloc.h>
using namespace std;

struct node
{
	int data;
	node *next; 
};

int main ()
{
	node *head;
	int num;
	
	cin>>num;
	head= (node *) malloc (sizeof (node));
	node *now;
	now = head;
	head->data = num;
	
	while (scanf ("%d",&num) == 1)
	{
		node *temp;
		temp= (node *) malloc (sizeof (node));
		now->next = temp;
		temp->data = num;
		now = temp;
	}
	
	now->next = NULL;
	
	while (head->next != NULL)
	{
		cout<< head->data<< endl;
		now= head;
		head= head->next;
		free (now);
	}
	cout<< head->data;
	free (head);
}
