/**
 * @ Author: Tom Veldkamp
 * @ Create Time: 2023-10-21 10:57:33
 * @ Modified by: Your name
 * @ Modified time: 2023-10-21 14:16:07
 * @ Description: Reverse string print
 */




#include <stdio.h>
void inputString(char *str, int maxLength);
void reverse(char *str);
void printString(const char *str);

int main() 
{
    char input[100];
    printf("Voer een string in: ");
    inputString(input, sizeof(input));
    
    reverse(input);
    
    printf("Omgekeerde string: ");
    printString(input);
    
    return 0;
}

void inputString(char *str, int maxlengte) 
{
    int i = 0;
    char c;
    while (i < maxlengte - 1 && (c = getchar()) != '\n' && c != EOF) 
    {
        str[i] = c;
        i++;
    }
    str[i] = '\0';
}

void reverse(char *str) 
{
    int len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }

    char *start = str;
    char *end = str + len - 1;
    
    while (start < end) 
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

void printString(const char *str) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        putchar(str[i]);
        i++;
    }
    putchar('\n');
}