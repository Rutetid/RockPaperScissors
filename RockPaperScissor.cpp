#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

  
  int user = 0;
  int AI = 0;
  int tie = 0;
  int input;
  cout << "Welcome to Rock, Paper, Scissors"<<endl;
  while(true){
  cout<< endl<<"Type 0 for Rock"<<endl<<"Type 1 for paper"<<endl<<"Type 2 for scissor"<<endl<<"Type 3 to exit"<<endl<<endl;

  srand(time(0));
  int AiChoice = (rand() % 3);
    cin >> input;
  switch(input){
    case 0:
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

    case 1:
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

    case 2:
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

    case 3: 
      cout<<endl<<"Total No. of games : " << user + AI + tie<<endl;
      
    cout<< "You won "<<user<<" times."<<endl;
    cout<< "AI won "<<AI<<" times."<<endl;
    cout<< "You tied "<<tie<<" times."<<endl;
    exit(0);

    default:
    cout<<"Invalid Input"<<endl;
    
    }
    
  }
}
