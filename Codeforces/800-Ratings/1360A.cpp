#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        int weight = 2 * min(a, b);
        int height = max(a, b);

        int value = max(height, weight);
        cout << value*value << endl;
    }


    return 0;
}