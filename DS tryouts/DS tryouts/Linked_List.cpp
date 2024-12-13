//#include <iostream>
//using namespace std;
//
//struct node
//{
//	int data;
//	node* next;
//};
//node* head = NULL;
//
//void insertNode(int value)
//{
//	node* new_node, * last;
//	new_node = new node;
//	new_node->data = value;
//	if (head == NULL)
//	{
//		head = new_node;
//		new_node->next = NULL;
//	}
//
//	else
//	{
//		last = head;
//		while (last->next != NULL)
//		{
//			last = last->next;
//		}
//		last->next = new_node;
//		new_node->next = NULL;
//	}
//}
//
//void display()
//{
//	node* current;
//	if (head == NULL)
//	{
//		cout << " Linked List Is impty";
//	}
//
//	else
//	{
//		current = head;
//		while (current != NULL)
//		{
//			cout << current->data << '\t';
//			current = current->next;
//		}
//	}
//	cout << endl;
//}
//
//void deleteNode(int value)
//{
//	node* current, * previous;
//	current = head;
//	previous = head;
//	if (current->data == value)
//	{
//		head = current->next;
//		free(current);
//		return;
//	}
//
//	while (current->data != value)
//	{
//		previous = current;
//		current = current->next;
//	}
//
//	previous->next = current->next;
//	free(current);
//}
//
//int main()
//{
//	insertNode(10);
//	insertNode(20);
//	insertNode(30);
//	insertNode(40);
//	display();
//	return 0;
//}