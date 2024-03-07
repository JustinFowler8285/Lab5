#include <cstdlib>
#include "RPG.h"

using namespace std;

//constructors
RPG::RPG() {
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
}
RPG:: RPG(string newName, int newHealth, int newStrength, int newDefense, string newType) {
    name = newName;
    health = newHealth;
    strength = newStrength;
    defense = newDefense;
    type = newType;
    setSkills(); //Call setSkills to initialize skills on the RPGs role
}

//Accessor functions
string RPG::getName() const {
    return name;
}
int RPG::getHealth() const {
    return health;
}
int RPG:: getStrength() const {
    return strength;
}
int RPG:: getDefense() const {
    return defense;
}
/** myPrint
 * @brief sets the skills based on the RPG's role
 * 
*/
void RPG::setSkills() {
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    } else if (type == "theif"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    } else if (type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    } else {
        skills[0] = "slash";
        skills[1] = "parry";
    }
}
/**
 * @brief Prints along the lines of Name used Skill on OPPONENT
 * 
 * @param skill
 * @param opponent
*/
void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}

//updateHealth()
/**
 * @brief updates health into new_health
 * 
 * @param new_health
*/
void RPG::updateHealth(int new_Health){
    health = new_Health;
}
//isAlive()
/**
 * @brief returns whether health is greater than 0
 * 
 * @return true
 * @return false
*/
bool RPG::isAlive() const{
    return health > 0;
}