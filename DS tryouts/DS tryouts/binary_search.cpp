//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, search, first, last, middle;
//	int array[100];
//
//	cout << " inter number of elements: " << endl;
//	cin >> n;
//
//	cout << " enter " << n << " numbers: ";
//	for (int i = 0; i < n; i++)
//	{
//		cin >> array[i];
//	}
//
//	cout << "enter value to find:";
//	cin >> search;
//
//	first = 0;
//	last = n - 1;
//
//	while (first <= last)
//	{
//		middle = (first + last) / 2;
//
//		if (array[middle] < search)
//		{
//			first = middle + 1;
//		}
//
//		else if (array[middle] == search)
//		{
//			cout << search << " found at location " << middle + 1 << endl;
//		}
//
//		else
//		{
//			last = middle - 1;
//		}
//	}
//
//	cout << "not found" << search << "isn't present in the lisr" << endl;
//
//	return 0;
//}