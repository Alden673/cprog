
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void concatenateNames() {
    char actor[50], actress[50];
    printf("Enter your favorite actor's name: ");
    scanf("%s", actor);
    printf("Enter your favorite actress's name: ");
    scanf("%s", actress);

    strcat(actor, " ");
    strcat(actor, actress);

    printf("Concatenated name: %s\n", actor);
}

void formatName() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Uppercase: %s\n", strupr(name));
    printf("Lowercase: %s\n", strlwr(name));

    char fname[50], lname[50];
    sscanf(name, "%s %s", fname, lname);
    printf("First name: %s\n", fname);
    printf("Last name: %s\n", lname);
}

void countAndDeleteThe() {
    char sentence[1000];
    printf("Enter a sentence: ");
    getchar();
    fgets(sentence, sizeof(sentence), stdin);

    char *ptr = sentence;
    int count = 0;
    while ((ptr = strstr(ptr, "the")) != NULL) {
        count++;
        memmove(ptr, ptr + 3, strlen(ptr + 3) + 1);
    }

    printf("Frequency of 'the': %d\n", count);
    printf("Sentence without 'the': %s\n", sentence);
}

int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int choice;
    do {
        printf("\nString Handling Menu:\n");
        printf("1. Concatenate actor and actress names\n");
        printf("2. Display name in different formats\n");
        printf("3. Count and delete 'the' from a sentence\n");
        printf("4. Check if a string is a palindrome\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                concatenateNames();
                break;
            case 2:
                formatName();
                break;
            case 3:
                countAndDeleteThe();
                break;
            case 4: {
                char str[50];
                printf("Enter a string to check for palindrome: ");
                scanf("%s", str);
                if (isPalindrome(str)) {
                    printf("%s is a palindrome.\n", str);
                } else {
                    printf("%s is not a palindrome.\n", str);
                }
                break;
            }
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
