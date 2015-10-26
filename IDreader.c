#include <stdio.h>

int covt(char a,char b,char c)
{
    int x,y,z;

    x = a - 48;
    y = b - 48;
    z = c - 48;

    return (x*100 + y*10 + z);
}

int main()
{
    char id[10];
    int days;

    printf("Enter the ID number : ");
    scanf("%s",id);

    printf("\n");

    days = covt(id[2],id[3],id[4]);

    if (days < 500)
    {
        printf("hey man your DOB is : 19");
    }
    else
    {
        printf("hey lady your DOB is : 19");
    }

    printf("%c%c ",id[0],id[1]);
    //printf("%d",days);
    if(days >= 500){
        days = days-500;
    }

    if (days <= 31)
    {
        printf("jan %d",days);
    }
    else if (days <= 60)
    {
        printf("feb %d",days-31);
    }
    else if (days <= 91)
    {
        printf("mar %d",days-60);
    }
    else if (days <= 121)
    {
        printf("apr %d",days-91);
    }
    else if (days <= 152)
    {
        printf("may %d",days-121);
    }
    else if (days <= 182)
    {
        printf("jun %d",days-152);
    }
    else if (days <= 213)
    {
        printf("jul %d",days-182);
    }
    else if (days <= 244)
    {
        printf("aug %d",days-213);
    }
    else if (days <= 274)
    {
        printf("sep %d",days-244);
    }
    else if (days <= 305)
    {
        printf("oct %d",days-274);
    }
    else if (days <= 335)
    {
        printf("nov %d",days-305);
    }
    else if (days <= 366)
    {
        printf("dec %d",days-335);
    }

    printf("\n");
   // getch();
    return 0;
}
