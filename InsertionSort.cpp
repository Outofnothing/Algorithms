#include <iostream>
using namespace std;

template<typename T> 
T* insertion_sort(T* list, unsigned int length)
{

	for (unsigned int j = 2; j < length; j++)
	{
		T key = list[j];
		unsigned int i = j - 1;
		while ((i > 0) && (list[i] > key))
		{
			list[i + 1] = list[i];
			i--;
		}
		list[i + 1] = key;
	}
	return list;
}

int main()
{
	float A[] = { 1,2,6,2, 5 };
	float* B = insertion_sort(A, sizeof(A)/sizeof(float));
	cout << "size of b" << sizeof(B) << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
}