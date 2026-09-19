#include <stdio.h>

void charFrequency(char str[]) {
    int freq[256] = {0};
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("\nCharacter Frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (i == '\n')
                printf("newline: %d\n", freq[i]);
            else
                printf("'%c': %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    charFrequency(str);
    return 0;
}
