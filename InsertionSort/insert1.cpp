#include <iostream>
#include <conio.h>
using namespace std;
void insertion(int m[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = m[i];
		j = i - 1;
     while (j >= 0 && m[j] > key)
		{
			m[j + 1] = m[j];
			j = j - 1;
		}
		m[j + 1] = key;
	}
}
void print(int m[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << m[i] << " ";
	cout << endl;
}
int main()
{
	int m[] = { 11, 33, 3, 12, 23 };
	int N = sizeof(m) / sizeof(m[0]);
     cout<<"The Insertion sort is: "<<" ";
	insertion(m, N);
	print(m, N);

	return 0;
}
