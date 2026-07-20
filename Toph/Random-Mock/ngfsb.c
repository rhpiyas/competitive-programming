#include<stdio.h>
#include<string.h>

int main()
{
    char N[];
    scanf("%s",N);

    int len;
    len = strlen(N);
    int sum = 0;

    int i;
    for(i=(len>3?len-3:0); i<len; i++)
    {
        sum = sum*10 + (N[i]-'0');
    }
    if(sum%8==0)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}


