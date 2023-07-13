#include<bits/stdc++.h>
using namespace std;


class Queue{

    public:
    int queue[1000];
    int max_capacity;
    int front;
    int rear;
    int size;

    Queue(){
        this->front = 0;
        this->rear = -1;
        this->max_capacity=1000;
        this->size=0;
    }
    void enqueue(int data){
        if(size==max_capacity){
            cout<<"Maximum capacity has been reached";
            return;
        }
        rear=(rear+1)%max_capacity;
        queue[rear]=data;
        size++;

    }
    void dequeue(){
        if(size==0){
            cout<<"The size of the queue is 0 "<<endl;
            return;
        }
        cout<<"the element to be dequeued is "<<queue[front]<<endl;
        front++;
        size--;
    }
    void peekqueue(){
        cout<<"The element at the front of the queue is "<<queue[front]<<endl;

    }
    void sizeOfQueue(){
        cout<<"The queue currently has "<<this->size<<" Elements in it"<<endl;
    }

};


int main(){
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.peekqueue();
    q.dequeue();
    q.peekqueue();
    q.dequeue();
    return 0;
}