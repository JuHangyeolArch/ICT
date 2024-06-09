#include <stdio.h>

int slow_add(int x, int y){
    int sum =0;
    for(x; x<=y;x++)
    sum +=x;
    return sum;
}

int add(int x, int y){
    int sum =0;
    if((y-x)%2==0)
        sum = (x+(y-x)/2)*(y-x+1);
    else
        sum = (y+x)*((y-x+1)/2);
    return sum;
}

int main(void){

    int a,b,i;
    printf("첫번째 수를 입력하시오:");
    scanf("%d",&a);
    printf("마지막 수를 입력하시오:");
    scanf("%d",&b);
    
    printf("slow_add 결과 =%d\n",slow_add(a,b));
    printf("add 결과=%d\n",add(a,b));


    return 0;
}