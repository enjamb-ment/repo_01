#include <iostream>
// VVV definitions of the stuff in story.hpp go here VVV


std::string stringfunction(std::string mystring)
{
    // this is a dumb function.  It takes the input (from main), and appends two returns, the word "yeah", and one more return to it.  But it does work.
    mystring = mystring + "\n\nyeah\n";
    return std::string(mystring);
}

std::string nope(std::string choice)
{
    // The "you can't do that" response, for the if-else.
    std::string youcantdothat = "I'm sorry, \"" + choice + "\" cannot be done.\nTry again: ";
    return std::string(youcantdothat);
}

std::string story(int index)
{
    //The exposition and story can be written here, and indexed based on the call.  If for instance, we're in the starting room, it index will return the "0" switch
    std::string exposition;
    switch(index){
        case 0:
            exposition = "You wake up in a white room with padded walls, floors, and ceiling. There are no windows.\n";
            return std::string(exposition);
        break;
        case 1:
            exposition = "This room looks similar to the last room, but mirrored.  Where the door handle was on the right, it is now on the left.\n";
            return std::string(exposition);
        break;
        case 2:
            exposition = "\n";
            return std::string(exposition);
        break;


        
        default:
            return 0;
    }
}