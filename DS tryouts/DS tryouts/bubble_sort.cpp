//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 10
//
//int main()
//{
//	int array[MAXSIZE];
//	int num, temp;
//
//	cout << "enter the value of num" << endl;
//	cin >> num;
//
//	cout << "enter the elements one by one " << endl;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> array[i];
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = 0; j < num - i-1; j++)
//		{
//			if (array[j] > array[j + 1])
//			{
//				temp = array[j];
//				array[j] = array[j + 1];
//				array[j + 1] = temp;
//			}
//		}
//	}
//
//	cout << "sorted array is: ";
//	for (int i = 0; i < num; i++)
//	{
//		cout << array[i] << "";
//	}
//	cout << endl;
//
//	return 0;
//}