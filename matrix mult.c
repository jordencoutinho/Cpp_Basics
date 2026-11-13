#include <stdio.h>
int main() {
int rA,cA,rB,cB,i,j,k;
printf("Enter the number of rows in matrix A: ");
scanf("%d",&rA);
printf("Enter the number of columns in matrix A: ");
scanf("%d",&cA);
printf("Enter the number of rows in matrix B: ");
scanf("%d",&rB);
printf("Enter the number of columns in matrix B: ");
scanf("%d",&cB);
    
int a[rA][cA];
for(i=0;i<rA;i++){
    for(j=0;j<cA;j++){
    printf("Enter the elements in %d row and %d column: ", i+1,j+1);
    scanf("%d",&a[i][j]);}}

int b[rB][cB];
for(i=0;i<rB;i++){
    for(j=0;j<cB;j++){
    printf("Enter the elements in %d row and %d column: ", i+1,j+1);
    scanf("%d",&b[i][j]);}}


if (cB==rA){
    int c[rA][cB];
    for(i=0;i<rA;i++){
        for(j=0;j<cB;j++){
        c[i][j] = 0;}}
    
    for(i=0;i<rA;i++){
        for(j=0;j<cB;j++){
            for(k=0;k<cA;k++){
                c[i][j] += a[i][k] * b[k][j];
            }}}

    for(i=0;i<rA;i++){
        for(j=0;j<cB;j++){
        printf("%d ",c[i][j]);}
    printf("\n");}
        
    
}
    
else printf("Matrix Multiplication not possible.");
}
