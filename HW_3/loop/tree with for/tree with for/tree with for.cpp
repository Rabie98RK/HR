#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter the number of row" << endl;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num + i; j++)
		{
			if (j < num - i - 1)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
}