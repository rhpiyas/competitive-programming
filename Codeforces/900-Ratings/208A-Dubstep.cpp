#include<iostream>
#include<string>

using namespace std;

int main()
{
    string song;
    cin >> song;

    string result = "";

    for(int i=0; i<song.length(); i++)
    {
        if(song[i]=='W' && song[i+1]=='U' && song[i+2]=='B')
        {
            i = i+2;

            if(!result.empty() &&  result[result.length()-1] != ' ')
            {
                result += ' ';
            }
        }
        else
        {
            result = result + song[i];
        }

        
    }

    cout << result << endl;



    return 0;
}