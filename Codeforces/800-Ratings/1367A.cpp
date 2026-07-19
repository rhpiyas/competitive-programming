#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string b;
        cin >> b;

        int len = b.length();

        if(len <= 2)
        {
            cout << b << endl;
        }
        else
        {
            for(int i=0; i<len; i+=2)
            {
                cout << b[i];
            }
            cout << b[len-1] << endl;
        }
    }


    return 0;
}