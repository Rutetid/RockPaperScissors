#include <iostream>
#include <cstdlib>
#include <ctime>

enum choice {
  rock ,
  paper ,
  scissor ,
  quit
};

int main() {

  using namespace std;
  
  int user = 0;
  int AI = 0;
  int tie = 0;
  int input;
  cout << "Welcome to Rock, Paper, Scissors"<<endl;
  cout<< "Type rock/paper/scissor or quit to exit"<<endl;

  srand(time(0));
  while(true){
  int AiChoice = (rand() % 3);
    cin >> input;
  switch(input){
    case rock:
    if (AiChoice == 1){
      cout<< "You chose rock"<<endl;
      cout<< "AI chose paper"<<endl;
      cout<< "AI wins"<<endl;
      AI++;
    }

    else if (AiChoice == 2){
      cout<< "You chose rock"<<endl;
      cout<< "AI chose scissor"<<endl;
      cout<< "you win"<<endl;
      user++;
    }

    else if (AiChoice == 0){
      cout<< "You chose rock"<<endl;
      cout<< "AI chose rock"<<endl;
      cout<< "you tied"<<endl;
      tie++;
    }
    break;

    case paper:
    if (AiChoice == 1){
      cout<< "You chose paper"<<endl;
      cout<< "AI chose paper"<<endl;
      cout<< "you tied"<<endl;
      tie++;
    }

    else if (AiChoice == 2){
      cout<< "You chose paper"<<endl;
      cout<< "AI chose scissor"<<endl;
      cout<< "AI wins"<<endl;
      AI++;
    }

    else if (AiChoice == 0){
      cout<< "You chose paper"<<endl;
      cout<< "AI chose rock"<<endl;
      cout<< "you win"<<endl;
      user++;
    }
    break;

    case scissor:
    if (AiChoice == 1){
      cout<< "You chose scissor"<<endl;
      cout<< "AI chose paper"<<endl;
      cout<< "you win"<<endl;
      user++;
    }

    else if (AiChoice == 2){
      cout<< "You chose scissor"<<endl;
      cout<< "AI chose scissor"<<endl;
      cout<< "you tie"<<endl;
      tie++;
    }

    else if (AiChoice == 0){
      cout<< "You chose scissor"<<endl;
      cout<< "AI chose rock"<<endl;
      cout<< "AI wins"<<endl;
      AI++;
    }
    break;

    case quit: 
    cout<< "You won "<<user<<" times."<<endl;
    cout<< "AI won "<<AI<<" times."<<endl;
    cout<< "You tied "<<tie<<" times."<<endl;
    exit(0);
    }
    
  }
}
