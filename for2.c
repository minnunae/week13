#include<stdio.h>
int for2(){
    int i;
    printf ("Enter a number : ");
    scanf("%d",&number);
    for (i=1;i<12;i=i+1){
        printf("%d, %dx%d = %d\n",i,number,(i*number));
        sum+sum+(i*number);
    }
    printf ("sum=%d",sum);
    return 0;
}
