// Word Jumble
// The classic word jumble game where the player can ask for a hint
//spanish
//Revoltijo de palabras
//El clásico juego de revoltijo de palabras en el que el jugador puede pedir una pista.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    enum fields{
        WORD, HINT, NUM_FIELDS
    };
    const int NUM_WORDS=5;
    const string WORDS[NUM_WORDS][NUM_FIELDS]={{"wall","These might help you see the answer."},
                                                {"gasses","Do you feel you´re banging you head against something?"},
                                                {"labored","These might help you see the answer"},
                                                {"pesistent","Keep at it."},
                                                 {"jumble","It´s what the game is all about."}};

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD]; //word to guess
    string theHint = WORDS[choice][HINT]; //hint for word

    string jumble = theWord; //jumbled version of word
    int length = jumble.size();
    for (int i = 0; i < length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }
    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "Enter 'quit' to quit the game.\n\n";
    cout << "The jumble is: " << jumble;
    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;

    while ((guess != theWord) && (guess != "quit"))
    {
        if (guess == "hint")
        {
            cout << theHint;
        }
        else
        {
            cout << "Sorry, that's not it.";
        }
        cout <<"\n\nYour guess: ";
        cin >> guess;
    }

    if (guess == theWord)
    {

        cout << "\nThat's it! You guessed it!\n";
    }
    cout << "\nThanks for playing.\n";
    return 0;
}

