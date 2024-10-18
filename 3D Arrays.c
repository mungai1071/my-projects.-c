//Arrays in c - 3D
/*
Author: John Mungai
Reg No:CT101/G/24029/24

*/
#include<stdio.h>
int main(){
    int i,j,k;
    int marks[2][2][3] = {{{50,60,70},{40,50,60}}, {{50,90,60}, {40,70,40}}};
    for (i=0;i<2;i++){
        for(j=0; j<2;j++){
            for(k=0;k<3;k++){
                prinf("marks[%d][%d][%d] = %d \n",i,j,k, marks[i][j][k]);
            }
        }
    },
    return 0;
}