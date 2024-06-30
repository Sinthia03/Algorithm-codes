#include<bits/stdc++.h>
using namespace std;

void printList(int b[],int n){

 for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
 }

    cout<<endl;

}


void shiftleft(int a[],int n){
for(int i=0;i<n;i++){
    a[i-1]=a[i];
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}

cout<<endl;
}


int main(){
int a[5]={10,20,30,40,50};
printList(a,5);

shiftleft(a,5);
//shiftleftagain(a,5,2);

}
