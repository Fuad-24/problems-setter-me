#include<bits/stdc++.h>
using namespace std;
#define e 0.000000001
int main(){
     freopen("output4.txt","w",stdout);
     freopen("input4.txt","r",stdin);
int t,ax,bx,cx,dx,ay,by,cy,dy;cin>>t;
while(t--){

    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;
    cin>>dx>>dy;
    complex<double>a={ax,ay};
    complex<double>b={bx,by};
    complex<double>c={cx,cy};
    complex<double>d={dx,dy};
    double p1,p2,p3,p4;
    p1=(conj(c-a)*(c-b)).imag();
    p2=(conj(d-a)*(d-b)).imag();
    p3=(conj(a-c)*(a-d)).imag();
    p4=(conj(b-c)*(b-d)).imag();
    /*cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;
    cout<<p4<<endl;*/
    if(abs(p1-0)<e){
        if(min(ax,bx)<=cx&&cx<=max(ax,bx)){cout<<"Doomed"<<endl;continue;}
    }
     if(abs(p2-0)<e){
        if(min(ax,bx)<=dx&&dx<=max(ax,bx)){cout<<"Doomed"<<endl;continue;}
    } if(abs(p3-0)<e){
        if(min(cx,dx)<=ax&&ax<=max(cx,dx)){cout<<"Doomed"<<endl;continue;}
    } if(abs(p4-0)<e){
        if(min(cx,dx)<=bx&&bx<=max(cx,dx)){cout<<"Doomed"<<endl;continue;}
    }
    if(p1*p2<0&&p3*p4<0){cout<<"Doomed"<<endl;continue;}
    cout<<"Saved"<<endl;
    //cout<<a<<endl;
}

}
