#include<bits\stdc++.h>
using namespace std;
#define SIZE 5

class queue
{
    private:
        int front,rear, q[SIZE];
    public:
        queue()
        {
            front = -1;
            rear = -1;
            // 
        }
        bool isempty()
        {
            if(front&&rear == -1)
             return true;
          return false;

        }
        bool isfull()
        {
            if(front == 0 && rear == SIZE-1)
             return true;
         return false;
        }
        void enque(int element)
        {
            if(isfull())
                cout<<"que is full\n";
            else
            {
                if(front == -1)front = 0;
                rear++;
                q[rear]=element;
                cout<<"inserted element"<<element<<"\n"
            }
        }
};
 int dequeue ()
 {
    int element;
    if (isempty()){
        cout<<"queue is empt\n"
        return -1;
    }
 else
 {
    element = q [front];
    if (front>= rear)
    {
        this -> front = -1;
        this -> rear = -1;
            }
    {
        else front ++;
        cout<<"Deleted element is "<< element<<"\n";
        return element
    }
 }
}
 void display ()
 {
    COUT <<"ALL present  element is queue "
 }
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Queue itme
    item.enqueue(10);
    item.enqueue(20);
    item.enqueue(30);
    item.enqueue(40);
    item.enqueue(50);

    item.dequeue();
    item.dequeue();
    return 0;
}