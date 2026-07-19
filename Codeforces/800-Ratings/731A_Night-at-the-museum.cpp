#include<iostream>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int len = name.length();
    
    int count;

    int a = abs(name[0] - 'a');

    int b = 26 - a;

    count = min(a, b);

    for(int i=0; i<len-1; i++)
    {
        int x = abs(name[i+1] - name[i]);
        int y = 26-x;
        
        count = count + min(x, y);
    }

    cout << count << endl;

    return 0;
}