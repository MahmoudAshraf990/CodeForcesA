#include<stdio.h>
#include <stdlib.h>


int main()
{

    int matrix[5][5];
    int rowOfOne, colOfOne;
    int result;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("\n%d", &matrix[i][j]);
            if(matrix[i][j]){
                rowOfOne = i;
                colOfOne = j;
            }
        }
    }
    result = abs(rowOfOne-2) + abs(colOfOne-2);
    printf("%d", result);
}

