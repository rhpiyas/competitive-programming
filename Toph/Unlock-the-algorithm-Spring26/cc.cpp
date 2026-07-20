#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> S(N);
    for(int i=0; i<N; i++)
    {
        cin >> S[i];
    }

    sort(S.begin(), S.end(), greater<long long>());

    long long bubble = 0;
    long long alo = 0;

    for(int i=0; i<N/2; i++)
    {
        if(i%2!=0)
        {
            bubble = bubble + S[i];
            alo = alo + S[N-1-i];
        }
        else
        {
            bubble = bubble + S[N-1-i];
            alo = alo + S[i];
        }
    }

    cout << alo << " " << bubble << endl;

    return 0;
}