
#include <stdio.h>

void reverseRound(int players[], int numPlayers) {
    int temp;
    for (int i = 0; i < numPlayers / 2; i++) {
        temp = players[i];
        players[i] = players[numPlayers - i - 1];
        players[numPlayers - i - 1] = temp;
    }
}

int main() {
    int numPlayers;

    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    if (numPlayers <= 0) {
        printf("Invalid number of players. Please enter a positive integer.\n");
        return 1;
    }

    int players[numPlayers];

    printf("Enter player IDs:\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("Player %d: ", i + 1);
        scanf("%d", &players[i]);
    }

    printf("Current order of players:\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("Player %d: %d\n", i + 1, players[i]);
    }

    reverseRound(players, numPlayers);

    printf("Reversed order of players:\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("Player %d: %d\n", i + 1, players[i]);
    }

    return 0;
}
