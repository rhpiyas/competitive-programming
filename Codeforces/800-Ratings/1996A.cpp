#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int cow = n/4;
        int rem = n%4;
        int chic = rem/2;

        int total = cow + chic;

        cout << total << endl;
    }


    return 0;
}