//
//  main.cpp
//  gip2-p2
//
//  Created by Marco Schöttelkotte on 10.05.22.
//

#include <iostream>
#include "greetings/greetings.hpp"
#include "team_statistics/team_statistics.hpp"
#include "liga_statistics/liga_statistics.hpp"

void Print(TeamStatistics statistics) {
    statistics.Print();
}

void Print(LigaStatistics statistics) {
    statistics.Print();
}

void Print(string tag, int played_games, int points, int scored_goals, int received_goals, int difference) {
    cout << tag << " " << played_games << " " << points << " " <<  scored_goals << ":" << received_goals << " " << showpos << difference << noshowpos << endl;
}

int main(int argc, const char * argv[]) {
    LigaStatistics ligaStatistics;
    unsigned int match_count;
    cin >> match_count;
    if(cin.good() == false) return EXIT_FAILURE;
    
    for(int i = 0; i < match_count; ++i){
        string team;
        cin >> team;
        if(cin.good() == false) break;
        ligaStatistics.Add(team);
    }
        
    while(true) {
        string scored_team;
        cin >> scored_team;
        if(cin.good() == false) break;
            
        unsigned int scored_goals;
        cin >> scored_goals;
        if(cin.good() == false) break;
            
        unsigned int received_goals;
        cin >> received_goals;
        if(cin.good() == false) break;
            
        string received_team;
        cin >> received_team;
        if(cin.good() == false) break;
        
        ligaStatistics.GamePairing(scored_team, received_team, scored_goals, received_goals);
    }

    Print(ligaStatistics);
    return EXIT_SUCCESS;
}
