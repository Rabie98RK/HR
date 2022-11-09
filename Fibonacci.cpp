#include <iostream>
using namespace std;

double fib(double num)
{
	if (num < 2)
		return num;
	else
	{
		double Fibonaccii = fib(num - 1) + fib(num - 2);//Bn=An+Bn=Bn−1+Bn−2
		return Fibonaccii;
	}
}
int main()
{
	int num = 0;
	cout << "Please enter the number of Fibonacci series. \n";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << fib(i) << ",";

	}


}
