#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(char *str1, char *str2) {
	int i=0;
    do{
        if (*(str1 + i) != *(str2 + i))

        {
            return abs(*(str1 + i) - * (str2 + i));
        }
        i++;
   } while (*(str1+i) !=0 && *(str2+i) !=0);

    return  *(str1 + i) + * (str2 + i);

}


int main(void) {
    char arr[] = "aF";
    char ch[] = "af";

    printf("%d\n", compare(arr, ch));
    return 0;
}