//Pattern 15 Floyd's triangle 2.0 //
#include<stdio.h>
int main(){
    int i,j,m,n;
    
    printf("Enter The Rows :: ");
    scanf("%d",&n);
    printf("Enter The cols :: ");
    scanf("%d",&m);
    int a = 1;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
           if(j<=i){printf("%d ",a);
           a=a+2; }
           else{printf("  ");}
        }
        printf("\n");
    }
    return 0;
}