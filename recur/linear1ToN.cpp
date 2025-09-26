#include<bits/stdc++.h>
using namespace std;
void linear(int start,int n){
    if(start>n)return;
    cout<<start<<" ";
    linear(++start,n);
}
int main(){
    int n;
    cin>>n;
    linear(1,n);

}