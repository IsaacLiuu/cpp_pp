// stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_

#include <string>

class Stock
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot()
    {
        total_val = shares * share_val;
    }
public:
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    //括号后面的const表示该函数不会修改被隐式地访问的对象
    void show()const;
    const Stock & topval(const Stock & s)const;
};

#endif
