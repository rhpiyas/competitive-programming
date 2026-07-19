#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a=0, b=0, c=0;
    int aa[5000];
    int bb[5000];
    int cc[5000];

    int t[n];
    for(int i=0; i<n; i++)
    {
        cin >> t[i];

        if(t[i] == 1)
        {
            aa[a] = i;
            a++;
        }
        
        else if(t[i] == 2)
        {
            bb[b] = i;
            b++;
        }
        
        else
        {
            cc[c] = i;
            c++;
        }
        
    }

    int result = min(a, min(b, c));
    cout << result << endl;

    for(int i=0; i<result; i++)
    {
        cout << aa[i]+1 << " " << bb[i]+1 << " " << cc[i]+1 << endl;
    }


    return 0;
}