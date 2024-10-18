//A arrays in c -2D Arrays
/*
Author: John Mungai
Reg No:CT101/G/24029/24

*/
#include<stdio.h>
int main(){
    int i,j;
    int marks[2][3] ={{60,70,40}, {40,60,50}};
    for(i=0; i<3; i++){
           for(j=0; j<3; j++){
        printf("marks[%d][%d] = %d \n", i,j, marks[i][j]);
    }
    }
    return 0;
    }