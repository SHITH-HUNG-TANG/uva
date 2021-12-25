#include<iostream>
using namespace ::std;

int compare(int* A,int i, int bi)//3
{
	if (i == 0)
		return 0;

	if (A[i-1] <= A[bi])
		return  compare(A, i-1, bi) + 1;
	else
		return  compare(A, i-1, bi) + 0;
}

int main() 
{
	int T;
	cin >> T;

	int t = 0;
	while (t < T) 
	{
		int I = 0;
		cin >> I;
		int *A = new int[I]();
		int *B = new int[I-1]();
		for (int i = 0; i < I; i++) {
			cin >> A[i];
			if (i != 0)
				B[i - 1] = compare(A, i, i);
		}
		int total = 0;
		for (int i = 0; i < I - 1; i++)
			total += B[i];
		cout << total<< endl;
		t += 1;
	}
}





