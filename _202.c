typedef int bool;
#define true 1
#define false 0
#include <stdio.h>
int get_next(int);
bool isHappy(int);
int main(){
    printf("19 is happy? %d\n",isHappy(19));
}
int  get_next(int n){
    int next=0;
    while (n!=0)
    {
        next+=(n%10)*(n%10);
        n/=10;
    }
    return next;
}
bool isHappy(int n){
    int fast=n;
    int slow=n;
    do{
        if(fast==1 || get_next(fast)==1)
          return true;
        fast=get_next(get_next(fast));
        slow=get_next(slow);
    }while(fast!=slow);
    return false;
}
