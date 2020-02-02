#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=0;

    scanf("%d",&n);
    while(n--)
    {
        char arr[1000];
        scanf("%s",arr);
        if(arr[0]=='+'||arr[2]=='+')
        {
            a++;
        }
        else if(arr[0]=='-'||arr[2]=='-')
        {
            a--;
        }
    }
    printf("%d",a);
    return 0;
}
