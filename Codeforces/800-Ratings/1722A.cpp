#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(s.size() > 5)
        {
            cout << "NO" << endl;
            continue;
        }

        string target = "Timur";
        sort(target.begin(), target.end());

        sort(s.begin(), s.end());

        if(target == s)
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