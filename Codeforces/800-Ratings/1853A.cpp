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

        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        bool sorted = true;
        int min = INT_MAX;

        for(int i=0; i<n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                sorted = false;
                break;
            }

            int x = a[i+1] - a[i];

            if(x < min)
            {
                min = x;
            }
        }

        if(!sorted)
        {
            cout << 0 << endl;
        }
        else
        {
            int result = (min/2) + 1;
            cout << result << endl;
        }

        
    }


    return 0;
}