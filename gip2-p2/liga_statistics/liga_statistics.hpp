//
//  liga_statistics.hpp
//  gip2-p2
//
//  Created by Marco Schöttelkotte on 11.05.22.
//

#ifndef liga_statistics_hpp
#define liga_statistics_hpp

#include <iostream>
#include <map>
#include <string>
#include <list>
#include "../team_statistics/team_statistics.hpp"

class LigaStatistics {
public:
    void Add(string& team_tag);
    void GamePairing(string& team1, string& team2, unsigned int goals_team1, unsigned int goals_team2);
    void Print() const;
private:
    map<string, TeamStatistics> _teamStatistics;
};

#endif /* liga_statistics_hpp */
