#include <iostream>
using namespace std;
int main()
{
    int u, c = 0;
    ;

    cout << "Enter the ending number - ";
    cin >> u;

    cout << "Prime Numbers are = \n2\n3" << endl;

    for (int b = 4; b <= u; b++)
    {
        for (int i = 2; i <= b / 2; ++i)
        {
            c = b % i;
            if (c == 0)
            {
                break;
            }
            else
            {
                cout << b << endl;
                break;
            }
        }
    }

    return 0;
}