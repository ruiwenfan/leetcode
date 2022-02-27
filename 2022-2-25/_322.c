int coinChange(int* coins, int coinsSize, int amount){
    int ans[amount+1];
    for(int i=0;i<=amount;i++){
        ans[i]=amount+1;
    }
    ans[0]=0;
    for(int i=1;i<=amount;i++)
        for(int j=0;j<coinsSize;j++){
            if(coins[j]<=i){
                ans[i]=fmin(ans[i],ans[i-coins[j]]+1);
            }
        }
    return  ans[amount]<=amount? ans[amount]:-1;
}