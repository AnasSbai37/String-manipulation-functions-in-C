#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(char[]);
void stringConcatenation(char result[],char str1[],char str2[]);
_Bool isequal(char str1[], char str2[]);

int main () {
    char mystring[100];
    char str1[100];
    char str2[100];
    char result[200];

    printf("Please enter a string to calculate it's characters.\n");
    scanf("%s",mystring);

    int length = stringLength(mystring);

    printf("The length of the string is : %d\n", length);
    printf("Please enter two strings to concatenate.\n");

    scanf("%s",str1);
    scanf("%s",str2);

    stringConcatenation(result,str1, str2);

    printf("Concatenated string is : %s.\n",result);

    if (isequal(str1,str2)) {
        printf("The strings are equal.\n");
    }
    else {
        printf("The strings are not equal.\n");
    }

    return 0;
}

_Bool isequal(char str1[], char str2[]) {
    int i=0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return true;
    }
    else {
        return false;
    }
}

void stringConcatenation(char result[],char str1[],char str2[]) {
    int i=0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    int j=0;
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
}

int stringLength(char mystring[]) {
    int i =0;

    while (mystring[i] != '\0') {
        i++;
    }
    return i;
    }
