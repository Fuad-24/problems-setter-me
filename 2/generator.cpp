#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input3.txt","w",stdout);
cout<<300<<endl;
srand(time(NULL));
int a=-1000000,b=-a,t=300,x;
while(t--){
 x=rand();x=x*x;x=a+x%(b-a);cout<<x<<" ";
 x=rand();x=x*x;x=a+x%(b-a);cout<<x<<" ";
 x=rand();x=x*x;x=a+x%(b-a);cout<<x<<" ";
 x=rand();x=x*x;x=a+x%(b-a);cout<<x<<" ";
 cout<<endl;

}
}
