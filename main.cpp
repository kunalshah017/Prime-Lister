#include <iostream>
using namespace std;
int main()
{
    int u, c = 0;
    bool isprime = false;

    cout << "Enter the ending number - ";
    cin >> u;

    cout << "Prime Numbers from 0 to " << u << " are = \n2\n3" << endl;

    for (int b = 4; b <= u; b++)
    {
        for (int i = 2; i <= b / 2; i++)
        {
            c = b % i;
            if (c == 0)
            {
                isprime = false;
                break;
            }
            else
            {
                isprime = true;
            }
        }
        if (isprime == true)
        {
            cout << b << endl;
        }
    }

    return 0;
}