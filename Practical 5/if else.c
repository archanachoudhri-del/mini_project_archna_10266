#include<stdio.h>
int main(){
    printf("ARCHNA CHOUDHRI\t10266\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is the largest number.\n",a);
    else if(b>a && b>c)
        printf("%d is the largest number.\n",b);
    else
        printf("%d is the largest number.\n",c);
    return 0;
}
// Enter three number: 3
// 4
// 5
// 5 is the largest.
