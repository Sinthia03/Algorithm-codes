#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
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

int n =2000;
int *a=new int [n];

ifstream fin("20shift.txt");
for(int i=0;i<n;i++){
        fin>>a[i];

}
 //printList(a,n);
auto start = high_resolution_clock::now();
int  *m =bubblesort(a,n);
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop-start);
cout<<duration.count()<<endl;
//printList(m,n);
}



