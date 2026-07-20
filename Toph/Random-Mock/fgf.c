#include <stdio.h>
#include <string.h>

int main() {
    char N[10000010]; // Large enough for up to 10^7 digits
    scanf("%s", N);

    int len = strlen(N);
    int lastThree = 0;

    // Only take the last 3 digits to check for divisibility by 8
    for (int i = (len > 3 ? len - 3 : 0); i < len; i++) {
        lastThree = lastThree * 10 + (N[i] - '0');
    }

    if (lastThree % 8 == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

