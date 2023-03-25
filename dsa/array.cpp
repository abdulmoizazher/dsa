#include<iostream>
using namespace std;
#define len(x) sizeof(x)/sizeof(int)
int main()

{
    int j,num,n;
    n=7;
    int array[n] = {1,2,3,4,5,6,7};
    
    for(int i = 0; i < n; i++){
    cout<<array[i];}
    cout<<endl;
    cout<<"enter the index for deletion";
    cin>>j;
    array[j] = 0;
    for(int i = j ; i < n; i++ )
    {
        array[i] =array[i+1];
       
    }
    n--;
         
    for(int i = 0; i < n; i++){
    cout<<array[i];}
    cout<<endl;
    return 0;

}