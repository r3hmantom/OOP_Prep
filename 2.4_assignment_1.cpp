//#include <iostream>
//using namespace std;
//
//void inputArray(int* ptr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cin >> ptr[i];
//	}
//}
//
//int main() {
//
//	{
//		int size1 = -1, size2 = -1;
//		cout << "Enter size of array 1: ";
//		cin >> size1;
//		int* arr1 = new int[size1];
//
//		cout << "Enter size of array 2: ";
//		cin >> size2;
//		int* arr2 = new int[size2];
//
//		inputArray(arr1, size1);
//
//		for (int i = 0; i < size1; i++)
//		{
//			for (int j = 0; j < size1 - i- 1; j++)
//			{
//				if (arr1[j] > arr1[j + 1])
//				{
//					int temp = arr1[j];
//					arr1[j] = arr1[j + 1];
//					arr1[j + 1] = temp;
//				}
//			}
//		}
//
//
//		for (int i = 0; i < size1; i++)
//		{
//			cout << arr1[i] << " , ";
//		}
//	}
//
//	cout << "mem leaks: " << _CrtDumpMemoryLeaks() << endl;
//	return 0;
//}
