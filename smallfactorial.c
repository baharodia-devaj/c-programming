#include <stdio.h>
#include<math.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        int fact=1;
        scanf("%d",&num);
        for(int i=2;i<=num;i++)
        {
            fact*=i;
        }
        printf("%d\n",fact);
        
    }
    
	// your code goes here
	return 0;
}

