double compute_pow(double x,long long n){
    double ans=1.0;
    double base=x;
    while(n!=0){
        if(n%2==1){
            ans*=base;
        }
        base*=base;
        n/=2;
    }
    return ans;
}
double myPow(double x, int n){
    long long n_long = (long long)n;
    if(n_long<0){
        return 1.0/compute_pow(x,-n_long);
    }else{
        return compute_pow(x,n);
    }
    
}