#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("output2.txt","w",stdout);
    //freopen("input2.txt","r",stdin);
long long t,b,n,i,j;
long long fib[52];
fib[1]=1;
fib[0]=1;
for(i=2;i<52;i++)fib[i]=fib[i-1]+fib[i-2];
scanf("%lld",&t);
while(t--){
    scanf("%lld %lld",&n,&b);
    printf("%lld\n",fib[n+1]*b);

}
}
