#include<bits/stdc++.h>
using namespace std;

void printList(int a[],int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;

}
void leftshift(int b[],int n,int k){

    for(int j=0;j<k;j++){
for(int i=0;i<n;i++){
    b[i-1]=b[i];
}
for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
}
cout<<endl;
}
}


int main(){
int a[5]={10,20,30,40,50};

printList(a,5);
leftshift(a,5,2);


}
