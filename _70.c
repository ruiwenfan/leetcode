int climbStairs(int n){
    if(n==1){
        return 1;
    }else if(n==2){
        return 2;
    }
    int first=1;
    int second=2;
    int tmp;
    for(int i=3;i<=n;i++){
        tmp=second;
        second+=first;
        first=tmp;
    }
    return second;
}