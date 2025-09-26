#include<bits/stdc++.h>
using namespace std;
void bt(int i,int n){
    if(i>n)return;
    bt(i+1,n);
    cout<<i;
}
int main(){
    int n;
    cin>>n;
    bt(1,n);
}