#include<iostream>
using namespace std;
#define len(x) sizeof(x)/sizeof(int)
int pop(int *array,int &n)


{
    int top;
     top = array[n-1];
     array[n-1] = 0;
     n--;
    return top;
}

void push(int *array,int &n,int top)
{
    n++;
    array[n-1] = top;
    return;
}

void print(int *array,int &n)
{
    for(int i = 0; i < n; i++){
    cout<<array[i];}
    cout<<endl;
}


int main()

{
    int n =7;
    int stack[n] ={1,2,34,5,68,3,5};
    cout<<n;
    print(stack,n);
    cout<<endl;
    pop(stack,n);
    cout<<endl;
    print(stack,n);
    cout<<endl;
    push(stack , n, 23);
    print(stack,n);
    
    push(stack,n,5);
    print(stack,n);


}