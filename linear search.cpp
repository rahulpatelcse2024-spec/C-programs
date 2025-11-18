
#include <stdio.h>

int main() {
   int i,a[10],flag=0,x;
 printf("Enter the  elements\n");
 for(i=0;i<10;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("Enter the element you want to search :");
 scanf("%d",&x);
for(i=0;i<10;i++)
{
    if(a[i]==x)
    {
        flag=1;
        break;
    }
    
}
    if(flag==1)
    {
        printf("The number %d is found at index %d",a[i],i);
    }
    else if(flag==0)
    {
        printf("The number is not found");
    }

}
