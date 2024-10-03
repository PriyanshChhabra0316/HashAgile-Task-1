// THIS WORK IS DONE BY PRIYANSH CHHABRA 
// COLLEGE : GALGOTIAS COLLEGE OF ENGINEERING AND TECHNOLOGY 
// ASSESSMENT FOR HASH AGILE 
// DOMAIN : FULL STACK DEVELOPER

#include <stdio.h>
void printPascalTriangle(int n){
    for(int i = 0 ; i<n ; i++){
        for(int k = 0; k<n-i-1 ; k++){
            printf(" ");
        }
        int val = 1;
        for(int j = 0 ; j<=i ; j++){
            printf("%d" , val);
            if(j<i){
                printf(" ");
            }
            val = val * (i-j) / (j+1);
        }
        printf("\n");
    }
}
int main(){
    int n = 5 ;
    printPascalTriangle(n);
    return 0 ;
}