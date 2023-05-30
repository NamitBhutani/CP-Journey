#include <stdio.h>
int main()
{
    char str[200];
    int line, word, ch;
    line = word = ch = 0;
    printf("Enter the string terminated with ~ : \n");
    scanf("%[^~]", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            line++;
        }
        else if (str[i] == ' ' || str[i] == '\t')
        {
            word++;
            ch++;
        }
        else
        {
            ch++;
        }
    }
    printf("\n  Character count: %d\n", ch);
    printf("Word Count: %d\n", word);
    printf("Line Count: %d\n", line);
    return 0;
}
