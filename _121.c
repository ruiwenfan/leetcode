#include <math.h>
int maxProfit(int* prices, int pricesSize){
    if(pricesSize<=1){
        return 0;
    }
    int ans=0;
    int lmin=prices[0];
    for(int i=0;i<pricesSize;i++){
        ans=fmax(ans,prices[i]-lmin);
        if(prices[i]<lmin){
            lmin=prices[i];
        }
    }
    return ans;
}