#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int luc_4 = 4;
    int luc_7 = 7;
    int luc_47 = 47;

    if(n%luc_47 == 0 || n%luc_4 == 0 || n%luc_7 == 0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }



    
    return 0;
}