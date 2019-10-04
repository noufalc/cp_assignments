#include <stdio.h>

int main()
{
    int a[100], i, n, key, flag = 0;
    printf("Enter the nubmer of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Number found.\n");
    }
    else
    {
        printf("Number not found.\n");
    }
    
    return 0;
}
