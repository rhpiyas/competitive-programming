#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string W;
        cin >> W;

        int len = W.length();
        string s = W.substr(0, len-2);

        cout << s << 'i' << endl;
    }


    return 0;
}