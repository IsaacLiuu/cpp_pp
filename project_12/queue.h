// queue.h -- interface for a queue
#ifndef QUEUE_H_
#define QUEUE_H_

// This queue will contain Customer items
class Customer
{
private:
    long arrive;        // arrive time for customer
    int processtime;    // processing time for customer
public:
    Customer(void)
    {
        arrive = processtime = 0;
    }
    void set(long when);
    long when(void) const
    {
        return arrive;
    }
    int ptime(void) const
    {
        return processtime;
    }
};

typedef Customer Item;

class Queue
{
private:
    // class scope definitions
    // Node is a nested structure defineition local to this class
    struct Node
    {
        Item item;
        struct Node *next;
    };
    enum{Q_SIZE = 10};
    // private class members
    Node *front;        // pointer to front of queue
    Node *rear;         // pointer to rear of queue
    int items;          // current number of items in queue
    const int qsize;    // maximum number of items in queue
    // preemptive definitions to prevent public copying
    Queue(const Queue & q):qsize(0)
    {}
    Queue & operator=(const Queue & q)
    {
        return *this;
    }
public:
    Queue(int qs = Q_SIZE);     // create queue with a qs limit
    ~Queue(void);
    bool isempty(void) const;
    bool isfull(void) const;
    int queuecount(void) const;
    bool enqueue(const Item &item);     // item to end
    bool dequeue(Item &item);           // remove item from front
};

#endif