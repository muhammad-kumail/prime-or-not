#include<stdio.h>
#include<conio.h>
main()
{
    int n,c;
    printf("Enter number: ");
    scanf("%d",&n);
    c=2;
    while(n%c!=0)
    {
        c++;
    }
    if(c==n)printf("%d is prime",n);
    else printf("%d is not prime",n);
    getch();
}
