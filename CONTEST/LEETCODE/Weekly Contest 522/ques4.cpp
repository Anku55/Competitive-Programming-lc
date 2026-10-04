class Solution {
public:
    using ll=long long;
    const ll mod=1e9+7;
    pair<ll,ll>fibonacci(ll n){
        if(n==0){
            return {0,1};
        }
        auto [a,b]=fibonacci(n/2);
        ll ccc=(a*((2*b%mod-a+mod)%mod))%mod;
        ll ddd=((a*a)%mod +(b*b)%mod)%mod;
        if(n%2==0)return {ccc,ddd};
        return {ddd,(ccc+ddd)%mod};
    }
    int countGoodStrings(long long n) {

        ll fib=fibonacci(n).first;
        return (2*fib)%mod;
        // const long long mod=1e9+7;
        // if(n==1)return 2;
        // long long dp01=1;
        // long long dp11=1;
        // for(int i=3;i<=n;i++){
        //     long long cur=(dp01+dp11)%mod;
        //     dp01=dp11;
        //     dp11=cur;
        // }
        // return (2*dp11)%mod;
    }
};