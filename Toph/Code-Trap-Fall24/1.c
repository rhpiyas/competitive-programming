#include<stdio.h>
int main()
{
    char A,B;
    scanf(" %c",&A);
    scanf(" %c",&B);

    if(A<B)
        printf("The First Alphabet Takes the Crown!\n");
    else if(A>B)
        printf("The Second Alphabet Takes the Crown!\n");
    else if(A==B)
        printf("Draw!\n");



    return 0;
}
