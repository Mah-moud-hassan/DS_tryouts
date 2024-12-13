//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 5
//int queue[MAXSIZE];
//int front = -1;
//int rear = -1;
//
//void enqueue(int value)
//{
//	if (rear != MAXSIZE - 1)
//	{
//		if (front == -1 && rear == -1)
//		{
//			front++;
//			rear++;
//			queue[rear] = value;
//		}
//		else
//		{
//			rear++;
//			queue[rear] = value;
//		}
//	}
//	else
//	{
//		cout << " Queue is full" << endl;
//	}
//}
//
//void dequeue()
//{
//	if (front != -1 && rear != -1 && front <= rear)
//	{
//		int value;
//		value = queue[front];
//		front++;
//	}
//	else
//	{
//		cout << " Queue is Empty" << endl;
//	}
//}
//
//int peak()
//{
//	if (front != -1 && rear != -1 && front <= rear)
//	{
//		return queue[front];
//	}
//	else
//	{
//		cout << " Queue is Empty" << endl;
//		return -1;
//	}
//}
//
//void display()
//{
//	if (front != -1 && rear != -1 && front <= rear)
//	{
//		for (int i = front; i <= rear; i++)
//		{
//			cout << queue[i] << "\t";
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << " Queue is Empty" << endl;
//	}
//}
//
//int main()
//{
//	enqueue(10);
//	enqueue(20);
//	enqueue(30);
//	display();
//
//	dequeue();
//	display();
//
//
//	return 0;
//}