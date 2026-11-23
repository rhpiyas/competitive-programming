#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int total = 0, current = 1;

        for(int i=0; i<n-1; i++)
        {
            if(abs(a[i]-a[i+1]) <= k)
            {
                current++;
            }
            else
            {
                total = max(total, current);
                current = 1;
            }
        }
        total = max(total, current);
        int reuslt = n - total;
        cout << reuslt << endl;    
    }
    return 0;
}