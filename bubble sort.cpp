#include<bits/stdc++.h>
using namespace std;

void printList(int *p,int n){
for(int i=0;i<n;i++){
    cout<<p[i]<<" ";
}
cout<<"\n----- "<<endl;
}
int *bubblesort(int *p,int n){
for(int k=0;k<n-1;k++){
    for(int i=0;i<n-1;i++){
      if(p[i]>p[i+1])  {

        //int x=p[i];
        swap (p[i],p[i+1]);
        //p[i+1]=x;
      }
    }
}
return p;

}


int main(){

int n =20;
int *a=new int [n];

ifstream fin("20shift.txt");
for(int i=0;i<n;i++){
        fin>>a[i];

}
 printList(a,n);
int  *m =bubblesort(a,n);
printList(m,n);
}



