#include<stdio.h>


int main(){

    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int SerejaPoints = 0;
    int DimaPoints = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int leftMost = 0;
    int rightMost = n-1;
    int isSereja = 1;
    while(leftMost <= rightMost){
        if(isSereja){
            if(arr[rightMost] >= arr[leftMost]){
            SerejaPoints += arr[rightMost];
            rightMost--;
            }
            else{
                SerejaPoints += arr[leftMost];
                leftMost++;
            }
            isSereja = 0;
        }
        else{
            if(arr[rightMost] >= arr[leftMost]){
                DimaPoints += arr[rightMost];
                rightMost--;
            }
            else{
                DimaPoints += arr[leftMost];
                leftMost++;
            }
            isSereja = 1;
        }
      
        
    }
    printf("%d %d", SerejaPoints, DimaPoints);

}


