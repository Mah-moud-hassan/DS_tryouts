//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 5
//int stack[MAXSIZE];
//int top = -1;
//
//int peek()
//{
//	return stack[top];
//}
//
//bool isFull()
//{
//	if (top == MAXSIZE)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//bool isEmpty()
//{
//	if (top == -1)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void push(int data)
//{
//	if (! isFull())
//	{
//		top = top + 1;
//		stack[top] = data;
//		cout << data << " Pushed into stack " << endl;
//	}
//	else
//	{
//		cout << " Stack overflow ";
//	}
//}
//
//int pop()
//{
//	if (! isEmpty())
//	{
//		int data = stack[top];
//		top = top - 1;
//		cout << data << " Popped from stack " << endl;
//		return data;
//	}
//	else
//	{
//		cout << " Stack underflow ";
//		return -1;
//	}
//}
//
//int main()
//{
//	push(10);
//	push(20);
//	push(30);
//
//	return 0;
//}