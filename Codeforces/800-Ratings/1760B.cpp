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

        string s;
        cin >> s;

        char max = 'a';
        for(int i=0; i<n; i++)
        {
            if(max < s[i])
            {
                max = s[i];
            }
        }

        int value = max - 'a';

        cout << value+1 << endl;

    }


    return 0;
}