#include <iostream>
#include <math.h>
#include "story.hpp"

using std::string;
using std::cout;
using std::cin;
// VVV definitions of the stuff in story.hpp go here VVV


string stringfunction(string mystring) {
    // this is a dumb function.  It takes the input (from main), and appends two returns, the word "yeah", and one more return to it.  But it does work.
    mystring = mystring + "\n\nyeah\n";
    return string(mystring);
}

string nope(string choice) {
    // The "you can't do that" response, for the if-else.
    string youcantdothat = "This isn't Half Life Alyx, you can't just do anything. \"" + choice + "\" cannot be done.\nTry again: ";
    return string(youcantdothat);
}

string story(int index) {
    //The exposition and story can be written here, and indexed based on the call.  If for instance, we're in the starting room, it index will return the "0" switch
    string exposition;
    Room room00 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room01 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room02 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), 
         room03 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room04 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room05 = Room("hello world", 1, 1, 1, 1, 1, 1, 1),
         room06 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room07 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room08 = Room("hello world", 1, 1, 1, 1, 1, 1, 1),
         room09 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room10 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room11 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), 
         room12 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room13 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room14 = Room("hello world", 1, 1, 1, 1, 1, 1, 1),
         room15 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room16 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room17 = Room("hello world", 1, 1, 1, 1, 1, 1, 1),
         room18 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room19 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room20 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), 
         room21 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room22 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room23 = Room("hello world", 1, 1, 1, 1, 1, 1, 1),
         room24 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room25 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room26 = Room("hello world", 1, 1, 1, 1, 1, 1, 1),
         room27 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room28 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room29 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), 
         room30 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room31 = Room("hello world", 1, 1, 1, 1, 1, 1, 1), room32 = Room("hello world", 1, 1, 1, 1, 1, 1, 1);
    switch(index){
        case 0:
            exposition = "You wake up in a white cube of a room with padded walls, floors, and ceiling. There are no windows, but there are doors at N, W,E, and S.\n";
            room00.Description = exposition;
            return string(room00.Description);
        break;
        case 1:
            exposition = "This room looks similar to the last room, but mirrored.  Where the door handle was on the right, it is now on the left.\n";
            return string(exposition);
        break;
        case 2:
            exposition = "\n";
            return string(exposition);
        break;
        case 3:
            exposition = "\n";
            return string(exposition);
        break;
        
        default:
            return 0;
    }
}

void goNorth(double DoorN){

}
void goWest(double DoorW){

}
void goEast(double DoorE){

}
void goSouth(double DoorS){

}