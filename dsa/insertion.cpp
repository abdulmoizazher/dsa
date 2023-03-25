#include<iostream>
#define len(x)  sizeof(x)/sizeof(int)
using namespace std;
int main()
{
int num,n,j;
n = 4;
int array[n]  = {1,2,3,4};
for(int i = 0; i < n; i++){
    cout<<array[i];}
    cout<<endl;
cout<<"enter a number";
cin>>num;
cout<<"enter the index";
cin>>j;
cout<<j<<"\n"<<num<<"\n";
for (int i = n; i >= j ; i--)
{
    array[i] = array[i-1];

}

array[j]= num; 
n++;
for(int i = 0; i < 5; i++){
    cout<<array[i];}
    cout<<endl;
}
