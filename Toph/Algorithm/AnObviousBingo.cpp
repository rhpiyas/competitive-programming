#include<iostream>
using namespace std;

int main()
{
    long long left, right, mid;
    left = 0;
    right = 1000000;
    int count = 0;

    while(left <= right)
    {
        mid = left + (right-left)/2;
        count++;

        if(count == 25)
        {
            break;
        }

        cout << mid << endl;
        cout.flush();

        string name;
        cin >> name;

        if(name == "Bingo!")
        {
            break;
        }
        else if(name == "Smaller")
        {
            right = mid-1;
        }
        else if(name == "Bigger")
        {
            left = mid+1;
        }

    }



    return 0;
}