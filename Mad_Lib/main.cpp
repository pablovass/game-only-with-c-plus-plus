#include <iostream>
#include <string>
/*
 * The Mad Lib game asks for the user’s help in creating a story. The user
supplies the name of a person, a plural noun, a number, a body part, and a
verb./
 */
//mad-lib
//creates a story based on user input
using  namespace std;
string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name,string noun, int number,string bodyPart,string verb);

int main() {
    std::cout << "Welcometo Mad Lib." << std::endl;
    std::cout << "Answer the following guestions to help create a new story" << std::endl;

    string name= askText("Please enter a name: ");
    string noun= askText("Please enter a plural noun: ");
    int number= askNumber("Please enter a body part: ");
    string bodyPart= askText("Please enter a body part: ");
    string verb= askText("Please enter a verb: ");
    tellStory(name,noun,number,bodyPart,verb);

    return 0;
}
string askText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text;
    return text;
}
int askNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void tellStory(string name,string noun, int number,string bodyPart,string verb){
    cout << "\nHere's your story: \n";
    std::cout << "The famous explorer " << std::endl;
    cout << name;
    std::cout << " had nearly given up a life- long quest to find" << std::endl;
    std::cout << "The Losr City of " << std::endl;
    cout <<noun;
    std::cout << "When one day, the" << std::endl;
    cout << noun;
    std::cout << "found the explorer" << std::endl;
    std::cout << "Surrounded by " << std::endl;
    cout <<number;
    cout << " " << noun;
    std::cout << ", a tear came to " << std::endl;
    cout << name << "'s '";
    cout << bodyPart << ". \n";
    std::cout << "After all this time, the quest was finally over." << std::endl;
    std::cout << "And then, the" << std::endl;
    cout <<noun<<". ";
    std::cout << "promptly devoured"<< std::endl;
    cout << name<<". ";
    std::cout << "The moral of the story? Be careful what you " << std::endl;
    cout <<verb;
    std::cout << "for." << std::endl;

}