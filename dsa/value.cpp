#include<iostream>
#include<stack>
#include<string>
using namespace std;



 int main()
 {

    string postfix;
    stack <int> stack;
    int n = postfix.length();

    cout<<"enter a postfix experession";
    cin>>postfix;
    for(int i = 0; i < n; i++)
    {
        
    }
   
    for(int i = 0; i < n ;i++ )
    {
        if (isdigit(postfix[i]))
        {
            stack.push(postfix[i]);
        }
        else 
        {
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();

            switch (postfix[i])
            {
            case '+':
            stack.push(a+b);
            break;
            case '-':
            stack.push(a-b);
            break;
            case '*' :
            stack.push(a*b);
            case '/':
            stack.push(a/b);
            break;
                   
            }
                    

        }
        

    }

        cout<<stack;
        int value = stack.top();
        cout<<value;
 }