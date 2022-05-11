//
//  greetings.cpp
//  gip2-p2
//
//  Created by Marco Schöttelkotte on 11.05.22.
//

#include "greetings.hpp"


Greetings::Greetings(string welcome){
    this->_welcome = welcome;
    cout << this->_welcome << endl;
}

Greetings::~Greetings(){
    cout << "Bye" << endl;
}

void Greetings::Print() const {
    cout << this->_ticker << endl;
}

void Greetings::Ticker(){
    ++_ticker;
}
