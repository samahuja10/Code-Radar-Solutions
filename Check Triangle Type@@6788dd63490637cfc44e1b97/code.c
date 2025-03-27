// Your code here...
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
     if (a <= 0 || b <= 0 || c <= 0 || 
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a valid triangle");
        return 0;
    }
    if(a==b && b==c) printf("Equilateral");
    else if(a==b!=c || a!=b==c || a==c!=b) printf("Isosceles");
    else if(a!=b && b!=c && a!=c ) printf("Scalene");
    return 0;
}