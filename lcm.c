#include<stdio.h>
int main(){
int a,b;
printf("entre the value of the number a and b\n");
scanf("%d %d",&a,&b);
int res=(a>b)?a:b;
while(1){
    if(res%a==0 && res%b==0){
        printf("lcm is %d\n",res);
        break;
    }
    ++res;
}

return 0;
}