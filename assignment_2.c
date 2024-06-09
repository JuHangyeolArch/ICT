#include <stdio.h>
int main(void){
    int tmp;
    int card[7]={2,7,3,5,4,1,6};
    int i,j;
    for(i=0;i<6;i++){
        tmp = card[i];
        for(j=1; j<7-i;j++){
            if(card[i]>card[j+i]){
                card[i] = card[j+i];
                card[j+i] = tmp;
                tmp = card[i];
                printf("%d %d %d\n",i,j,card[i]);
            }

        }
    }
    
    for(i=0;i<7;i++)
    printf("%d",card[i]);

    return 0;

}