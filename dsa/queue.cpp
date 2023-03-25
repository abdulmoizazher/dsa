#include<iostream>
using namespace std;
#define len(x) sizeof(x)/sizeof(int)

class queue
{
    private:
    int rear;
    int front;
    int *q;
    int n;

    public:
    queue( int n){
        rear = -1;
        front =-1;
        q = new int[n];
        q = {0};
        }

    
    void enqueue (int data)
    {
        n = len(queue);
        if (rear == front && rear != 1){
            cout<<"overflow";
            return;
        }

        else if (rear = n-1)
        {
            rear = 0;
            q[rear] = data;
            rear++;
         
        }

        else{
            q[rear] = data;
            rear++; 
        }
        

    }

    void dequeue()

    {   n = len(queue);
        if ( rear && front == -1 || rear == front-1 ){
            cout<<"queue is empty";
        }
        else if( front = n-1)
        {
            front =0;
            q[front] = 0;
            front++;

        }
        else{
            q[front] = 0;
            front++;

        }

    }

    void print()

    {
        for(int i = n; i < 10;i++)
        {cout<<q[i];}

        cout<<endl;
    }
    
    

};

int main()
    {
        
        queue q1(3);
        q1.enqueue(2);
        q1.print();
        q1.dequeue();
        q1.print();
       
        return 0;
               

    }