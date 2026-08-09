#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int a = abs(x1-x2) + abs(x1-x3);
        int b = abs(x1-x2) + abs(x2-x3);
        int c = abs(x1-x3) + abs(x2-x3);

        cout << min(a, min(b, c)) << endl;
    }


    return 0;
}