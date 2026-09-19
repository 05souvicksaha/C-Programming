#include <stdio.h>
#include <string.h>

int countWords(char sentence[]);

int main()
{
    char sentence[1000];
    int wordCount;

    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);

    wordCount = countWords(sentence);

    printf("Number of words: %d\n", wordCount);
    return 0;
}

int countWords(char sentence[])
{
    int i, wordCount = 0, flag;

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t')
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            wordCount++;
        }
    }

    return wordCount;
}
