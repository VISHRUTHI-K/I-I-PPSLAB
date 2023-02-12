#include<stdio.h>
int n;
void add(int a[n][n],int b[n][n]);
int main(){
printf("enter size of the matrix");
scanf("%d",&n);
int a[n][n];
printf("enter the elements of the first matrix");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
int b[n][n];
printf("enter the elements of the second matrix");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&b[i][j]);
}
}
add(a,b);
return 0;
}
void add(int a[n][n],int b[n][n]){
int i,j;

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%5d",a[i][j]+b[i][j]);
}
printf("\n");
}
return;
}

OUTPUT:
enter size of the matrix 3
3
enter the elements of the first matrix  1 1 2 1 1 2 1 1 2
1 1 2 1 1 2 1 1 2
enter the elements of the second matrix 1 1 2 1 1 2 1 1 2
1 1 2 1 1 2 1 1 2
    2    2    4
    2    2    4
    2    2    4
  
