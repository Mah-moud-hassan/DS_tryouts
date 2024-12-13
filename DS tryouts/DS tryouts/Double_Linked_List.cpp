//#include <iostream>
//using namespace std;
//
//struct node
//{
//	int data;
//	node* next;
//	node* previous;
//};
//node* head = NULL;
//
//void insertNode(int value)
//{
//	node* new_node = new node;
//	new_node->data = value;
//	new_node->next = NULL;
//	new_node->previous = NULL;
//	if (head == NULL)
//	{
//		head = new_node;
//	}
//	else
//	{
//		node* last = head;
//		while (last->next != NULL)
//		{
//			last = last->next;
//		}
//		last->next = new_node;
//		new_node->previous = last;
//	}
//}
//
//void displayNode()
//{
//	if (head == NULL)
//	{
//		cout << " Linked List Is Empty" << endl;
//	}
//	else
//	{
//		node* current = head;
//		while (current != NULL)
//		{
//			cout << current->data << '\t';
//			current = current->next;
//		}
//	}
//	cout << endl;
//}
//
//void insertAtFront(int value)
//{
//	node* new_node = new node;
//	new_node->data = value;
//	new_node->next = head;
//	new_node->previous = NULL;
//	if (head != NULL)
//	{
//		head->previous = new_node;
//	}
//	head = new_node;
//}
//
//void insertBetween(int value , int afterValue)
//{
//	node* new_node = new node;
//	new_node->data = value;
//	new_node->next = head;
//	node* current = head;
//	while (current->data != afterValue)
//	{
//		current = current->next;
//	}
//	new_node->next = current->next;
//	new_node->previous = current;
//
//	if (current->next != NULL)
//	{
//		current->next->previous = new_node;
//	}
//	current->next = new_node;
//}
//
//void deleteNode(int value)
//{
//	if (head == NULL)
//	{
//		cout << " Linked List Is Empty" << endl;
//	}
//
//	node* current = head;
//
//	if (current->data == value)
//	{
//		head = current->next;
//		if (head != NULL)
//		{
//			head->previous = NULL;
//		}
//		free(current);
//		return;
//	}
//
//	while (current->data != value)
//	{
//		current = current->next;
//	}
//
//	if (current->next != NULL)
//	{
//		current->next->previous = current->previous;
//	}
//
//	if (current->previous != NULL)
//	{
//		current->previous->next = current->next;
//	}
//	free(current);
//
//}
//
//int main()
//{
//	insertNode(10);
//	insertNode(15);
//	insertNode(20);
//
//	insertAtFront(0);
//	
//	insertBetween(5, 0);
//	
//	deleteNode(0);
//
//	displayNode();
//
//	return 0;
//}