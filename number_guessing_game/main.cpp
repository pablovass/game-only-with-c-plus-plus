// Guess My Number
// The classic number guessing game
#include <iostream>
#include <cstdlib>
#include <ctime>

using  namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber=rand()%100+1;
    int tries=0;
    int guess;
    cout << "\nWelcome to Guess My Number\n\n" <<endl;
    do{
        cout << "Enter a guess: ";
        cin>>guess;
        ++tries;
        if(guess>secretNumber){
            cout << "Too high\n\n";
        }else if(guess<secretNumber){
            cout << "Too low\n\n";
        }else
        {
            cout << "\nThat´s it! you got it in "<<tries<<" guesses!";
        }
    }while(guess!=secretNumber);

    return 0;
}
