#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long N, K;
    cin >> N >> K;

    vector<long long> P(N);
    for(int i=0; i<N; i++)
    {
        cin >> P[i];
    }

    sort(P.begin(), P.end());

    long long total = 0;

    for(int i=0; i<N; i++)
    {
        if(K >= 10)
        {
            K = K - 10;
            total = total + (P[i] * 10);
        }
        else
        {
            total = total + (P[i] * K);
            K = 0;
        }
    }

    if(K == 0)
    {
        cout << total << endl;
    }
    else
    {
        cout << "-1" << endl;
    }



    return 0;
}