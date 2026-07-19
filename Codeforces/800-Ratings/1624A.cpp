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

        auto max = max_element(a.begin(), a.end());
        auto min = min_element(a.begin(), a.end());

        cout << *max-*min << endl;
    }


    return 0;
}