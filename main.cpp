#include <iostream>
#include "RPG.h"

using namespace std;

int main()
{
    RPG p1 = RPG("wiz", 70, 45, 15, "mage");
    RPG p2 = RPG(); 

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Health: %i\t Strength: %i\t Defense: %i\n", p1.getHealth(), p1.getStrength(), p1.getDefense());

    //DO THE SAME FOR p2
    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Health: %i\t Strength: %i\t Defense: %i\n", p2.getHealth(), p2.getStrength(), p2.getDefense());

    // CALL updateHealth(0) on either p1 and p2
    p1.updateHealth(0);
    
    // Print out the new health
    cout << "New Updated Health for " << p1.getName() << ": " << p1.getHealth() <<endl;

    //CALL isAlive() on both p1 and p2
    cout << p1.isAlive() <<endl;
    cout << p2.isAlive() <<endl;

    return 0;
}