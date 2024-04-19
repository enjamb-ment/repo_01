// This is a header file.  I can put all of my common function definitions here... things I intend to need to use elsewhere.
using std::string;
using std::cout;
using std::cin;

string stringfunction(string mystring);


string story(int index);



string nope(string choice);


/*
class Inventory_item {
    //is this just list everything someone can be holding as boolean?


};
*/

class Room {
    // VVV "CLASS METHOD" VVV
    /*void describeRoom() 
    {
        std::cout << "Room " << index << Description << ".\n";
    }
    */

    // double DoorX: Where DoorX = # of the Room that the door will lead to, and null refers to no door
    double DoorN;
    double DoorW;
    double DoorE;
    double DoorS;
    bool Bookshelf;
    bool Desk;

public:
    // VVV "CONSTRUCTOR" VVV
    string Description;
    Room(string description, double doorn, double doorw, double doore, double doors, bool bookshelf, bool desk, bool rug) {
        Description = description;  //Room Description
        double DoorN = doorn;       //0 = no door; 1 = unlocked door; 2 = locked door
        double DoorW = doorw;
        double DoorE = doore;
        double DoorS = doors;
        bool Bookshelf = bookshelf;
        bool Desk = desk;
        bool Rug = rug;
                                    //Rooms probably have more things than this...
    }
    void goNorth(double DoorN);
    void goWest(double DoorW);
    void goEast(double DoorE);
    void goSouth(double DoorS);
};

class Room_liminal : private Room {
    //inherit Room class and include some unique methods


};