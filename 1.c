#include<stdio.h>
void main(){
    for( int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}