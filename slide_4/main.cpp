#include<iostream>
#define max 5
using namespace std;

int stack[max];
int top=-1;

void push()
{
    if(top==max-1)
    {
        cout<<"The Stack Is Full\n"<<endl;
    }
    else
    {
        int item;
        top=top+1;
        cout<<"Enter A Stack Element: ";
        cin>>item;
        stack[top]=item;
        cout<<"Pushed Successfully ...!\n"<<item<<endl;
    }
}

void display()
{
    if(top==-1)
        cout<<"The Stack Is Empty\n"<<endl;
    else{
        cout<<"The Element Of Stacks: "<<endl;
        int i;
        for(i=top;i>=0;i--)
        {
            cout<<"\n"<<stack[i]<<endl;
        }
        cout<<"\n"<<endl;
    }
}


int main()
{
    push();
    push();
    push();
    push();
    push();
    display();

    return 0;
}
