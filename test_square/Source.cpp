#include<iostream>
using namespace std;

void main()
{
	int n = 0;
	double s = 0.00;
	cout << "Please, enter number N:" << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		s += 1/sqrt(2)*i;
	}

	cout << "Sum of the expression: s += 1 / sqrt(2)*i is " << s << endl;

	system("pause");

}