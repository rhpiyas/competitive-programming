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

        char s[n];
        int freq[26] = {0};

        for(int i=0; i<n; i++)
        {
            char x;
            cin >> x;

            s[i] = x;
            freq[x-'A']++;
        }

        int sum = 0;

        for(int i=0; i<26; i++)
        {
            if(freq[i]!=0)
            {
                freq[i]++;
                sum = sum+freq[i];
            }
        }

        cout << sum << endl;

        
    }


    return 0;
}