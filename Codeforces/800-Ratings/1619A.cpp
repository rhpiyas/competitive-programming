#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int len = s.length();

        if(len%2!=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int subLen = len/2;

            string sub1 = s.substr(0, subLen);
            string sub2 = s.substr(subLen);

            if(sub1 == sub2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }


    return 0;
}