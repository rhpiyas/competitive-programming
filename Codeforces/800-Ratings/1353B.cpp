#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<>());

        int sum = 0;
        int x = 0;

        for(int i=0; i<n; i++)
        {
            if(x == k)
            {
                break;
            }
            
            if(a[i] < b[i])
            {
                a[i] = b[i];
                x++;
            }
        }

        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }

        cout << sum << endl;


    }


    return 0;
}