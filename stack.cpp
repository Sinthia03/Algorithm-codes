#include<iostream>
#define Max 4
using namespace std;

int stack_arr[Max];
int top =-1;

void push(int elements)
{
if(top == Max-1){
    cout<<"stack overflowed"<<endl;
    return;
}
top = top+1;
stack_arr[top]=elements;
}

int main(){
push(2);
push(9);
push(8);
push(6);
push(3);
}
