#include<iostream>

using namespace std;
#define len(x)  sizeof(x)/sizeof(int)


void rec (int *array,int n)
{
    int s;
    for(int i = 0; i <n; i++)
    {
        if( array[i] > array[i+1])
        {
        
        int temp;
        temp = array[i+1];
        array[i+1] = array[i];
        array[i] = temp;
        s++;
        }
        
        }
        if ( s == 0)
       {
        return;
       }
       
       rec(array,n);
       
        
    }







void sort(int*array,int n)
{
    int i =0,j =0 ,s = 0;

    while ( j < n)
    {
        i = 0 ,s = 0;
    
    while ( i < n)
    {
       
        if (array[i] > array[i+1])
        {
            int temp;
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
            s++;
        }
        
        i++;

    }
            if (s == 0)
        {
            break;
        }

        j++;
       
    }
      
    }

 int search(int *array, int n, int x)
{
    int mid,end,beg;
    beg = 0;
    end = n;
    while (beg < end)
    {
        mid = (beg+end)/2;
        if (array[mid] == x )
        {
            break;
        }

        else if ( array[mid] > x)
        {
            end = mid -1;
        }
        else if( array[mid] < x)
        {
            beg = mid +1;

        }
       
       
    }
    if ( beg == end)
       {
        mid = -1;
       }
    
     return mid;
} 

void insertion_sort(int *array, int n)
{
    for(int i =1 ; i< n; i++ )
    {
        int j = i;
        while (j > 0 && array[j-1] > array[j])

        {   
            int temp;
            temp = array[j-1];
            array[j-1] = array[j];
            array [j] = temp;
            j--;    
        }
        
    }
    

}

void print(int *array, int n)
{
    for(int i = 0; i < n; i++){
    cout<<array[i];}
    cout<<endl;

}



int main()

{
    int array[10] = {1,3,4,5,2,4,6,7};
    int n = len(array);
    print(array,n);
    rec(array,n);
    print(array,n);
    cout<<search(array, n, 10);
    return 0;

}