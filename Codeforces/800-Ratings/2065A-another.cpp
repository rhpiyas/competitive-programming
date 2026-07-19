#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string W;
        cin >> W;

        for(int i=0; i<W.length()-2; i++)
        {
            cout << W[i];
        }
        cout << 'i' << endl;
    }


    return 0;
}