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

        int freq[26] = {0};

        bool flag = true;

        for(int i=0; i<n; i++)
        {
            if(s[i] != s[i+1])
            {
                if(freq[s[i]-'A'] == 0)
                {
                    freq[s[i]-'A']++;
                }
                else
                {
                    flag = false;
                }
            }
        }

        if(!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
            
    }


    return 0;
}