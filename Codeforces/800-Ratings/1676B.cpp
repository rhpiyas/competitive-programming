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

        auto ax = min_element(a.begin(), a.end());
        int min = *ax;

        int count = 0;

        for(int i=0; i<n; i++)
        {
            if(a[i] != min)
            {
                count += a[i]-min;
            }
        }

        cout << count << endl;
    }
    


    return 0;
}