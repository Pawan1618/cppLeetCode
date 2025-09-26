#include<bits/stdc++.h>
using namespace std;

void showName(string s, int i,int n){
    if(i>n)return;
    cout<<s<<""<<i;
    showName(s,++i,n); /// cannot write i++ makes infinite recursion call; i not updated
    // but can write ++i pre-increment 
    


}
int main(){
    string s="pawan";
  
    int n;
    cin>>n;
    showName(s,0,n);



}