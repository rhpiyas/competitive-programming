#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int hour = (s[0]-'0')*10 + (s[1]-'0');
        
        int min = (s[3]-'0')*10 + (s[4]-'0');

        string count = "AM";

        if(hour >= 12)
        {
            count = "PM";
        }

        if(hour > 12)
        {
            hour = hour - 12;
        }

        if(hour == 0)
        {
            hour = 12;
        }

        if(hour < 10)
        {
            cout << 0 << hour;
        }
        else
        {
            cout << hour;
        }

        cout << ":";

        if(min<10)
        {
            cout << 0 << min;
        }
        else
        {
            cout << min;
        }

        cout << " " << count << endl;
    }


    return 0;
}