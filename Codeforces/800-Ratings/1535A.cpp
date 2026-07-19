#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        int a = max(s1, s2);
        int b = max(s3, s4);

        int ab[4] = {s1, s2, s3, s4};
        sort(ab, ab+4);

        if((a==ab[2] && b==ab[3]) || (a==ab[3]&&b==ab[2]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}