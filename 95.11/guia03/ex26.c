#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100

int main ( void ) {

    char buffer[MAX_LEN], str1[MAX_LEN], str2[MAX_LEN], dest[MAX_LEN];
    int i, j, num;

    if(fgets(str1, MAX_LEN, stdin) == NULL)
        return 1;

    if(fgets(str2, MAX_LEN, stdin) == NULL)
        return 1;

    if(fgets(buffer, MAX_LEN, stdin) == NULL)
       return 1;

    num = atoi(buffer);

//  This part couts the lengh of the first string;
    for(i = 0; str1[i] != '\0'; i++)
        ;
    
//  This part checks if the input number is bigger than
//  the length of the string;
    if(num > i)
        return 1;

    for(i = num, j = 0; str2[i] != '\0'; j++)
        if(j <= num)
            dest[j] = str1[j];

        else 
            dest[i] = str2[i];
            i++;

    printf("%s\n", dest);
    return 0;
}