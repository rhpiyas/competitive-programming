#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;

    if(n%2==0)
    {
        k = n/2;
        cout << k << endl;
        for(int i=0; i<k; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        n = n-3;
        k = n/2;
        cout << k+1 << endl;
        for(int i=0; i<k; i++)
        {
            cout << 2 << " ";
        } 
        cout << 3 << endl;
    }


    return 0;
}