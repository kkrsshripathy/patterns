/*
FLOyd'S triangle
1 
2 3 
4 5 6 
7 8 9 10 
*/
#include<stdio.h>
int main(){
    int n=4;
    int c=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
       
        printf("%d ",c++);
        
    }
    printf("\n");
}

return 0;}
/*
*
* *
*   *
*     *
*********
*/
#include<stdio.h>
int main(){
    int n=5;
for(int i=1;i<=n;i++){
    for(int j=1;j<=2*i-1;j++){
      
    if(j==2*i-1||j==1||i==n){
    
        printf("*");
    }
    else{
        printf(" ");
    }}
    printf("\n");
}

return 0;}
/*
    *
   * *
  *   *
 *     *
*********

*/
#include<stdio.h>
int main(){
    int n=5;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");}
     for(int j=1;j<=2*i-1;j++){ 
    if(j==2*i-1||j==1||i==n){
    
        printf("*");
    }
    else{
        printf(" ");
    }}
    printf("\n");
}

return 0;}
/*
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 
pascal's triangle
*/

#include <stdio.h>

int main() {int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
    
    int c=1;
    for(int k=1;k<=i;k++){
        printf("%d ",c);
        c=c*(i-k)/k;
        }
        printf("\n");
    }
    return 0;
}