#include<stdio.h>

void strcpyToggleX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[20];

    printf("Please enter string\n");
    scanf("%[^'\n]s",arr);

    strcpyToggleX(arr,brr);  // strcpyX(100,200);

    printf("Copied string is : %s\n",brr);
    printf("Original string is : %s\n",arr);

    return 0;
}