#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int n = s.length();

    cout << (char) toupper(s[0]);

    for(int i=1; i<n; i++)
    {
        if(s[i] == ' ')
        {
            cout << (char) toupper(s[i+1]);
        }
    }
    cout << endl;


    return 0;
}