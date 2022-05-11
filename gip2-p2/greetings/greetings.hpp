//
//  greetings.hpp
//  gip2-p2
//
//  Created by Marco Schöttelkotte on 11.05.22.
//

#ifndef greetings_hpp
#define greetings_hpp

#include <iostream>
using namespace std;

class Greetings {
public:
    Greetings(string welcome);
    ~Greetings();
    void Print() const;
    void Ticker();
private:
    string _welcome;
    int _ticker = 0;
};

#endif /* greetings_hpp */
