#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int arr[9];
        int flag = 1;
        int xyz = 0;

        int n;
        cin >> n;

        int count = 0;

        while(n>0)
        {
            int x = n%10;
            if(x!=0)
            {
                count++;
                arr[xyz] = x*flag;
                xyz++;
            }
            n = n/10;
            flag = flag*10;
        }

        cout << count << endl;
        for(int i=0; i<count; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    }


    return 0;
}