#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        int area = (n*m) + 1;

        cout << area/2 << endl;


    }



    return 0;
}