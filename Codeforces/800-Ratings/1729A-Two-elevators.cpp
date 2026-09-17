#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >>c;

        int first = a-1;

        int second = abs(b-c) + (c-1);

        if(first<second)
        {
            cout << 1 << endl;
        }
        else if(first > second)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }



    return 0;
}