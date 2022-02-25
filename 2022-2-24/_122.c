// good problem
// first vesion
/*int maxProfit(int* prices, int pricesSize){
    int ans=0;
    for(int i=1;i<pricesSize;i++){
        if(prices[i]>prices[i-1]){
            ans+=prices[i]-prices[i-1];
        }
    }
    return ans;
}*/

int maxProfit(int* prices, int pricesSize){
    int dp0=0,dp1=-prices[0];
    for(int i=1;i<pricesSize;i++){
        dp0=fmax(dp0,dp1+prices[i]);
        dp1=fmax(dp1,dp0-prices[i]);
    }
    return dp0;
}
