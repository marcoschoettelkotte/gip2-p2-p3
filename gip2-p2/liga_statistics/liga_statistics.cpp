//
//  liga_statistics.cpp
//  gip2-p2
//
//  Created by Marco Schöttelkotte on 11.05.22.
//

#include "liga_statistics.hpp"
#include "../team_statistics/team_statistics.hpp"

void LigaStatistics::Add(string& team_tag){
    TeamStatistics teamStatistics(team_tag);
    this->_teamStatistics.insert({team_tag, teamStatistics});
}

void LigaStatistics::GamePairing(string& team1, string& team2, unsigned int goals_team1, unsigned int goals_team2){
    this->_teamStatistics.at(team1).CalcWin(goals_team1, goals_team2);
    this->_teamStatistics.at(team2).CalcWin(goals_team2, goals_team1);
}

void LigaStatistics::Print() const{
    list<TeamStatistics> teamStatisticsList;
    list<TeamStatistics>::iterator it = teamStatisticsList.begin();
    
    for(auto teamStatistic : this->_teamStatistics){
        teamStatisticsList.insert(it, teamStatistic.second);
        ++it;
    }
    teamStatisticsList.sort();
    for(auto teamStatistic : teamStatisticsList){
        teamStatistic.Print();
    }
}


