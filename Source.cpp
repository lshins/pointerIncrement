#include <iostream>
#include <iomanip>

using namespace std;

const void print(long int**&, const int);

const int dim = 10;

int main()
{
	long int nums[dim];
	long int** adds;
	adds = new long int* [dim];
	*adds = new long int[0];
	for (int i = 0; i < dim; i++)
	{
		nums[i] = i + 1;
		adds[i] = &nums[i];
		adds[i][0] = nums[i];
		adds++;
	}
	for (int i = 0; i < dim; i++)
		adds--;
	print(adds, dim);
	return 0;
}

const void print(long int**& a, const int d)
{
	for (int i = 0; i < d; i++)
		cout << &a[i][0] << " " << showpoint << fixed << setprecision(1) << a[i][0] << endl;
	cout << endl;
}