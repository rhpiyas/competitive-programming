#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int h, m;
        cin >> h >> m;

        int hour = (23-h)*60;
        int min = (60-m);

        cout << hour+min << endl;
    }



    return 0;
}