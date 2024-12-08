#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, count = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        sum += i;
        count += 1;
    }
    cout << sum << endl;

    return 0;
}
