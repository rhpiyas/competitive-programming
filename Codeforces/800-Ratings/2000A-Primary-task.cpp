#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s = to_string(n);
        if (s.size() >= 3 && s.substr(0, 2) == "10" && s[2] != '0' && stoi(s.substr(2)) >= 2)
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