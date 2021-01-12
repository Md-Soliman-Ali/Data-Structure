#include <iostream>
#define n 20

using namespace std;

int main()
{
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;

    cout<<"Queue using Array"<<endl;
    cout<<"\n1.Insertion \n2.Deletion \n3.Display"<<endl;
    while(ch)
    {
        cout<<"\nEnter the Choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            if(rear==x)
                cout<<"\nQueue is Full"<<endl;
            else
            {
                cout<<"\nEnter no: "<<j++<<endl;
                cin>>queue[rear++];
            }
            break;
        case 2:
            if(front==rear)
            {
                cout<<"\nQueue is empty"<<endl;
            }
            else
            {
                cout<<"\nDeleted Element is: "<<queue[front++]<<endl;
                x++;
            }
            break;
        case 3:
            cout<<"\nQueue Elements are:\n "<<endl;
            if(front==rear)
                cout<<"\nQueue is Empty"<<endl;
            else
            {
                for(i=front; i<rear; i++)
                {
                    cout<<queue[i]<<endl;
                    cout<<"\n"<<endl;
                }
                break;

            }
        }
    }
    return 0;
}
