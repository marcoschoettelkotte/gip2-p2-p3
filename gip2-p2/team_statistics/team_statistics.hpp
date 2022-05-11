//
//  team_statistics.hpp
//  gip2-p2
//
//  Created by Marco Schöttelkotte on 11.05.22.
//

#ifndef team_statistics_hpp
#define team_statistics_hpp

#include <iostream>
using namespace std;

class TeamStatistics {
public:
    TeamStatistics(string tag);
    ~TeamStatistics();
    void Print() const;
    void CalcWin(unsigned int scored_goals, unsigned int received_goals);
    bool operator<(const TeamStatistics& other) const;
private:
    string _tag;
    unsigned int _played_games = 0;
    unsigned _points = 0;
    unsigned _scored_goals = 0;
    unsigned _received_goals = 0;
    int _difference = 0;
};

#endif /* team_statistics_hpp */
