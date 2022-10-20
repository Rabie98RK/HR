#include <iostream>

using namespace std;


int main() {
    int num1 = 0, num2 = 0, num3 = 0;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    if ((1 <= num1 && num1 <= 1000) && (1 <= num2 && num2 <= 1000) && (1 <= num3 && num3 <= 1000))
    {
        cout << num1 + num2 + num3;
    }


    return 0;
}
