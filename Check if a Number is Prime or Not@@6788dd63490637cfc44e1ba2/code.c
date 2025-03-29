// Your code here...
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a=1;
    for (int i=2;i<=x-1;i++){
        if(x%i==0){
            a=0;
        }
    }
    if(a==1) printf("Prime");
    else printf("Not Prime");
    return 0;
}