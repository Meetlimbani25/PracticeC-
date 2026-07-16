#include <iostream>
using namespace std;

int main()
{
    int num = 1;

    while (num <= 500)
    {
        int temp = num;
        int sum = 0;

        while (temp > 0)
        {
            int digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if (sum == num)
            cout << num << endl;

        num++;
    }

    return 0;
}