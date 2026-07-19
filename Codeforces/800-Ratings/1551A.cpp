#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        n++;

        int two = n/3;
        int one = n- (two*2) -1;

        cout << one << " " << two << endl;
    }


    return 0;
}