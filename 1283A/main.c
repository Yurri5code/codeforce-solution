#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int minInDay = 60*24;
    int cases = 0;
    int minute = 0,hour = 0;
    scanf("%d",&cases);

    for(int i = 0;i < cases;i++){
        scanf("%d %d",&hour,&minute);

        const hourInThisDay = hour*60 + minute;

        printf("it's left %d minutes to new year\n",minInDay - hourInThisDay);
    }
    return 0;
}
