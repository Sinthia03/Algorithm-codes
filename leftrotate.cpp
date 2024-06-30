#include<bits/stdc++.h>
using namespace std;

void leftrotate(int *a,int n,int k){
for(int j=0;j<k;j++){
int t=a[0];
for(int i=0;i<n;i++){
    a[i-1]=a[i];
}
a[n-1]=t;}

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

}

int main(){

int a[5]={10,20,30,40,50};
 leftrotate(a,5,2);//2 ta stable thakbe & last ar 3 ta first rotate hbe

return 0;

}
