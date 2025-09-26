#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int s, int j){
    if(s>=j){
        return;
    }
    swap(arr[s],arr[j]);
    reverse(arr,s+1,j-1);
    

}
void reverse2(int arr[],int i,int n){
    if(i>=n/2){
        return;

    }
    swap(arr[i],arr[n-i-1]);
    reverse2(arr,i+1,n);
}
int main(){
    int arr[5]={1,2,4,5,6};
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
    reverse2(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}