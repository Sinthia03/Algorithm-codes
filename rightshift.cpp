#include<bits/stdc++.h>
using namespace std;
void printList(int a[],int n){
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
    cout<<endl;
}

void rightshift(int b[],int n){
for(int i=n-1;i>0;i--){
    b[i]=b[i-1];
}
for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
}
cout<<endl;
}

int main ()
{
int a[5]={10,20,30,40,50};
printList(a,5);
rightshift(a,5);



}
