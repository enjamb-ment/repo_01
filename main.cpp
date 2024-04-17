#include <iostream>
#include <cmath>
#include <cstring>

#include "story.hpp"

std::string choice;
std::string confirm;
int bookmark = 0;

int main(){

    std::cout << "Idk man, this seems like a lot?\n";
    std::cout << "Yeah, I know very little about c++, just how to print words and do some math... maybe a for loop.  Oh, I know you can use vectors and arrays...\n";
    std::cout << "kinda cool I made my first .exe file though.\n";

    std::cout << stringfunction("woah");

    std::cout << "Bet it'd be pretty straightforward to make a text-based choose your own adventure. Where you win when you can return 0 maybe.\n\n";
    std::cout << "okay, money where your mouth is:\n...gonna just be a bunch of nested ifs or somesuch...\n\n";



    std::cout << "Make a choice, direction you would like to go ('N', 'W', 'S', 'E'), thing you'd like to know more about ('Desk', 'key', 'onion', 'Door'), etc. etc.\n\n";
    std::cout << story(bookmark);
    


    while (choice != "QUIT"){
    std::cin >> choice;

    if(choice == "N" || choice == "W" || choice == "S" || choice == "E"){
        //make this part a function: navigation() or something.  Make it so navigation checks to see if Object of Class Room has corresponding exit.islocked() = false
        if(choice == "N"){
            std::cout << "You go north. ";
            std::cout << story(bookmark);
        }

    /*}else if(choice == [insertobjectlookupthinghere]){
        //make this part of a function: objects_of_interest() or something.
    */
    }else if(choice == "QUIT"){
        std::cout << "Are you sure? (y/n) ";
        std::cin >> confirm;
            if(confirm == "y"){
                choice = "QUIT";
                std::cout << "Thanks! Bye\n";
            }else{
                choice = "0";
            }
    }else{
        std::cout << nope(choice);
    }
    }







}