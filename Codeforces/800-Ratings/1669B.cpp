#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> freq(n+1, 0);

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;

            freq[x]++;
        }

        bool flag = false;
        int value;

        for(int i=0; i<n+1; i++)
        {
            if(freq[i] >= 3)
            {
                flag = true;
                value = i;
            }
        }

        if(flag)
        {
            cout << value << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }


    return 0;
}