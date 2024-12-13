//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 100
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
//	if (!isFull())
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
//	if (!isEmpty())
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
//int evaltepostfix(const string& expression)
//{
//	for (int i = 0; i < expression.length(); i++)
//	{
//		char ch = expression[i];
//
//		if (ch == ' ')
//		{
//			continue;
//		}
//
//		if (isdigit(ch))
//		{
//			push(ch - '0');
//		}
//
//		else if (ch == '+' or ch == '*')
//		{
//			int val1 = pop();
//			int val2 = pop();
//			int result;
//
//			if (ch == '+')
//			{
//				result = val1 + val2;
//				cout << val1 << "+" << val2 << "=" << result << endl;
//			}
//			else if (ch == '*')
//			{
//				result = val1 * val2;
//				cout << val1 << "*" << val2 << "=" << result << endl;
//			}
//			push(result);
//		}
//	}
//	return pop();
//}
//
//int main()
//{
//	string exception = " 6 5 2 3 + 8 * + 3 + * ";
//	int result = evaltepostfix(exception);
//	cout << "the final result = " << result;
//
//	return 0;
//}