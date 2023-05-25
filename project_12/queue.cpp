// queue.cpp -- Queue and Customer mothods
#include <cstdlib>
#include "queue.h"

// Queue methods
Queue::Queue(int qs):qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

Queue::~Queue(void)
{
    Node *temp;
    while(front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isempty(void) const
{
    return items == 0;
}

bool Queue::isfull(void) const
{
    return items == qsize;
}

int Queue::queuecount(void) const
{
    return items;
}

// Add item to queue
bool Queue::enqueue(const Item &item)
{
    if(isfull())
    {
        return false;
    }
    Node *add = new Node;   // create node
    // on failure, new throws std::bad_alloc exception
    add->item = item;
    add->next = NULL;
    items++;
    if(front == NULL)
    {
        front = add;
    }
    else
    {
        rear->next = add;
    }
    rear = add;
    return true;
}

// Place front item into item variable and remove from queue
bool Queue::dequeue(Item &item)
{
    if(front == NULL)
    {
        return false;
    }
    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;
    if(items == 0)
    {
        rear = NULL;
    }
    return true;
}

// customer method
// when is the time at which the customer arrives
// the arrival time is set to when and the processing
// time set to a random value in the range 1 - 3
void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}