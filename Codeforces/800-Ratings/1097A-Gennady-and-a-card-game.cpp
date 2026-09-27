#include<iostream>
using namespace std;

int main()
{
    string table;
    cin >> table;

    string one, two, three, four, five;
    cin >> one >> two >> three >> four >> five;

    bool flag = false;

    if(table[0] == one[0] || table[1] == one[1])
    {
        flag = true;
    }
    
    if(table[0] == two[0] || table[1] == two[1])
    {
        flag = true;
    }

    if(table[0] == three[0] || table[1] == three[1])
    {
        flag = true;
    }

    if(table[0] == four[0] || table[1] == four[1])
    {
        flag = true;
    }

    if(table[0] == five[0] || table[1] == five[1])
    {
        flag = true;
    }

    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}