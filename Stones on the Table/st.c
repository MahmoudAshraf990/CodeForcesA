#include<stdio.h>


int main(){
    int num = 0;
    scanf("%d", &num);
    char stones[num];
    for(int i=0; i<num; i++){
        scanf("%s", &stones[i]);
    }
    int result = 0;
    for(int j = 1; j<num; j++){
        if(stones[j] == stones[j-1]){
            result++;
        }
    }
    printf("\n%d", result);


}