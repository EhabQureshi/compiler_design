#include<stdio.h>
#include<ctype.h>
#include<string.h>


int isvalid(const char *str)
{
    
    if (!isalpha(str[0]) && str[0] != '_')
    {
        return 0;
    }

    
    for (int i = 1; str[i] != '\0'; i++)
    {
        if (!isalnum(str[i]) && str[i] != '_')
        {
            return 0;
        }
    }
    return 1; 
}

int main()
{
    char iden[1000];
    printf("Enter the identifier: ");
    scanf("%s", iden);

    if (isvalid(iden))
    {
        printf("Valid identifier\n");
    }
    else
    {
        printf("Not a valid identifier\n");
    }

    return 0;
}
