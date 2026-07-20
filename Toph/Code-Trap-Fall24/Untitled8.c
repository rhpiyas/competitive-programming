#include <stdio.h>

int main() {
    int W, M;

    // Read the number of slots for Web Development (W) and Mobile App Development (M)
    scanf("%d %d", &W, &M);

    // Calculate the total number of participants
    int total_participants = W + M;

    // Print the total number of participants
    printf("%d\n", total_participants);

    return 0;
}

