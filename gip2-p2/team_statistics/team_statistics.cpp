//
//  team_statistics.cpp
//  gip2-p2
//
//  Created by Marco Schöttelkotte on 11.05.22.
//

#include "team_statistics.hpp"

TeamStatistics::TeamStatistics(string tag){
    this->_tag = tag;
}

TeamStatistics::~TeamStatistics(){

}

void TeamStatistics::Print() const {
//    [KÜRZEL] [Spiele] [Punkte] [geschossene Tore]:[erhaltene Tore] [Tordifferenz]
    cout << this->_tag << " " << this->_played_games << " " << this->_points << " " <<  this->_scored_goals << ":" << this->_received_goals << " " << showpos << this->_difference << noshowpos << endl;
}

void TeamStatistics::CalcWin(unsigned int scored_goals, unsigned int received_goals){
    this->_scored_goals += scored_goals;
    this->_received_goals += received_goals;
    this->_played_games += 1;
    if(scored_goals > received_goals){
        // win
        this->_points += 3;
    }else if(scored_goals == received_goals){
        this->_points += 1;
    }
    this->_difference = this->_scored_goals - this->_received_goals;
}

bool TeamStatistics::operator<(const TeamStatistics& other) const {
    if(this->_points > other._points){
        return true;
    }
    if(this->_points == other._points){
        if(this->_difference > other._difference){
            return true;
        } else {
            if(this->_scored_goals > other._scored_goals){
                return true;
            }else if(this->_scored_goals == other._scored_goals){
                if(this->_tag < other._tag){
                    return true;
                }
            }
        }
    }
    return false;
}
