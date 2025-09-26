#include<bits/stdc++.h>
using namespace std;
void show(int i,int n){
    if(i<1)return;
    cout<<i<<" ";
    show(i-1,n);
}
int main(){

    int n;
    cin>>n;
    show(n,n);

}