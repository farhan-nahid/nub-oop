#include <iostream>

using namespace std;

class FootballPlayer {
    private:
        string name;
        int goal;
        int assist;   


    public:
        FootballPlayer(int goal, int assist){
            this->goal = goal;
            this->assist = assist;
        }

        FootballPlayer(string name, int goal, int assist){
            this->name = name;
            this->goal = goal;
            this->assist = assist;
        }

        void setName(string name){
            this->name = name;
        }
    
        void printCareerStatistics(){
            cout << "Name " << name << " Goals scored: " << goal << " Assists made: " << assist << endl;
        }

        double assistToGoalRatio(){
            return assist / goal;
        }
};


int main() {
    // Create a new FootballPlayer object with 30 goals and 10 assists
    FootballPlayer p1(30, 10);  
    p1.printCareerStatistics(); // Output: Goals scored: 30 Assists made: 10
    cout << "=====================" << endl;

    // Create a new FootballPlayer object with name and career stats
    FootballPlayer p2("Lionel Messi", 700, 300);
    p2.printCareerStatistics(); // Output: Name: Lionel Messi Goals scored: 700 Assists made: 300
    cout << "----------------------------" << endl;

    // Calculate the goal-scoring rate of p2 and output it
    //cout << "Goal-scoring rate: " << p2.goalScoringRate() << endl; // Output: Goal-scoring rate: 0.8193
    cout << "=====================" << endl;

    // Change the name of p1 to "Cristiano Ronaldo"
    p1.setName("Cristiano Ronaldo");
    p1.printCareerStatistics(); // Output: Name: Cristiano Ronaldo Goals scored: 30 Assists made: 10
    cout << "----------------------------" << endl;

    // Calculate the assist-to-goal ratio of p1 and output it
    cout << "Assist-to-goal ratio: " << p1.assistToGoalRatio() << endl; // Output: Assist-to-goal ratio: 0.3333
    return 0;
}