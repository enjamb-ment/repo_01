#include <iostream>
#include <cmath>
#include <cstring>


#include "story.hpp"
using std::string;
using std::cout;
using std::cin;

string choice;
string confirm;
int bookmark = 0;

int main(){

    cout << "Idk man, this seems like a lot?\n";
    cout << "Yeah, I know very little about c++, just how to print words and do some math... maybe a for loop.  Oh, I know you can use vectors and arrays...\n";
    cout << "kinda cool I made my first .exe file though.\n";

    cout << stringfunction("woah");

    cout << "Bet it'd be pretty straightforward to make a text-based choose your own adventure. Where you win when you can return 0 maybe.\n\n";
    cout << "okay, money where your mouth is:\n...gonna just be a bunch of nested ifs or somesuch...\n\n";



    cout << "Make a choice, direction you would like to go ('N', 'W', 'S', 'E'), thing you'd like to know more about ('Desk', 'key', 'onion', 'Door'), etc. etc.\n\n";
    cout << story(bookmark);
    


    while (choice != "QUIT"){
    cin >> choice;

    if(choice == "N" || choice == "W" || choice == "S" || choice == "E"){
        //make this part a function: navigation() or something.  Make it so navigation checks to see if Object of Class Room has corresponding exit.islocked() = false
        if(choice == "N"){
            cout << "You go north. ";
            cout << story(bookmark);
        }

    /*}else if(choice == [insert objectlookupthinghere]){
        //make this part of a function: objects_of_interest() or something.
    */
    }else if(choice == "QUIT"){
        cout << "Are you sure? (y/n) ";
        cin >> confirm;
            if(confirm == "y" || confirm == "Y"){
                choice = "QUIT";
                cout << "Thanks! Bye\n";

                return 0;
            }else{
                choice = "0";
            }
    }else{
        cout << nope(choice);
    }
    }


}