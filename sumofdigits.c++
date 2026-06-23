#include <iostream>
using namespace std;

int sumofdigits(int num)
{
    int sum = 0, remainder = 0, q = 0;
    while (num > 0)
    {
        remainder = remainder + num % 10;
        q = num / 10;
        num = q;
    }
    sum = sum + remainder;
    return sum;
}
int main()
{
    cout << sumofdigits(777777);
}
