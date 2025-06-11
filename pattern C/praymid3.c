/*
1      1
12    21
123  321
12344321
*/

#include <stdio.h>

int main() {int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
    for(int j=1;j<=2*(n-i);j++){
        printf(" ");
    }

    for(int k=i;k>=1;k--){
        printf("%d",k);
    }
    
        printf("\n");
    }
    return 0;
}
/*

****
*  *
*  *
****

*/

#include <stdio.h>

int main() {int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1||j==4||i==1||i==4){
            printf("*");
        }
    else{
        printf(" ");
    }
        }
        printf("\n");
    }
    return 0;
}
/*
    1
   212
  32123
 4321234
543212345
*/

#include <stdio.h>

int main() {int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        for(int k=2;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
/*
 *********
  *******
   *****
    ***
     *
      
     *
    ***
   *****
  *******
 *********
***********
*/

#include <stdio.h>

int main() {int n=6;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*(n-i)-1;j++){
            printf("*");
        }printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*(i)-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
 4  4  4  4  4  4  4 
 4  31 32 31 32 31 4 
 4  32  2  2  2 32 4 
 4  31  2  1  2 31 4 
 4  32  2  2  2 32 4 
 4  31 32 31 32 31 4 
 4  4  4  4  4  4  4 
*/

#include <stdio.h>

int main() {int n=7;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n)
            printf(" 4 ");
            else{
                printf(" ");
            if(i==2||i==n-1||j==2||j==n-1)
            printf("3");
            else{
                printf(" ");
            }
            if(i==3||i==n-2||j==3||j==n-2)
            printf("2");
            else{
                printf("1");
            }
            }
        }
        printf("\n");
    }
    
    return 0;
}