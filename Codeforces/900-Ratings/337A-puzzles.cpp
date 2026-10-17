#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> f(m);

    for(int i=0; i<m; i++)
    {
        cin >> f[i];
    }

    sort(f.begin(), f.end());

    int dif = abs(f[0]-f[n-1]);

    for(int i=0; i<(m-n)+1; i++)
    {
        if(abs(f[i]-f[i+n-1]) < dif)
        {
            dif = abs(f[i] - f[i+n-1]);
        }
    }

    cout << dif << endl;

    return 0;
}