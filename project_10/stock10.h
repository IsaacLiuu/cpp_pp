// stock10.h -- Stock class declaration with constructors, destructor add
#ifndef STOCK10_H_
#define STOCK10_H_

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(void)
    {
        total_val = shares * share_val;
    }
public:
    //two constructors
    //default constuctor
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0);
    //noisy destructor
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif