#include <iostream>
#include <iomanip>

using namespace std;

const void print(long int*, const int);

const int dim = 10;

int main()
{
	long int nums[dim];
	long int* adds = new long int [dim];
	for (int i = 0; i < dim; i++)
	{
		nums[i] = i + 1;
		adds = &nums[i];
		adds++;
	}
	for (int i = 0; i < dim; i++)
		adds--;
	print(adds, dim);
	return 0;
}

const void print(long int* a, const int d)
{
	for (int i = 0; i < d; i++)
		cout << &a[i] << " " << showpoint << fixed << setprecision(1) << a[i] << endl;
	cout << endl;
}