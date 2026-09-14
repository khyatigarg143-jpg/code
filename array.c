#include <stdio.h>
int main()
{
    int a[5];
    for (int i =0;i<=4;i++) 
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&a[i]);
    }
    for (int i =0;i<=4;i++) printf("the %d element is: %d\n",(i+1),a[i]);
    return 0; 
    


}