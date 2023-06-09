// tabtenn1.h -- a table-tennis base class
#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>

using std::string;
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string & fn = "none",
                      const string & ln = "none",
                      bool ht = false);
    void Name(void) const;
    bool HasTable(void) const
    {
        return hasTable;
    };
    void ResetTable(bool v)
    {
        hasTable = v;
    };
};

// simple derived class
class RatedPlayer:public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r, const string & fn = "none",
                const string & ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating(void) const
    {
        return rating;
    }
    void ResetRating(unsigned int r)
    {
        rating = r;
    }
};

#endif