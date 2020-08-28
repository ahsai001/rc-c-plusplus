#include <iostream>
#include <string>
#include "../io.h"

enum class MonsterType{
    OGRE,
    DRAGON,
    ORC,
    GIANTSPIDER,
    SLIME,
};

struct Monster{
    MonsterType type;
    std::string name;
};

void printMonster(Monster monster){
    IO::printLineSpace(2);
    IO::printHeader("Monster Info");
    
    std::string type;
    int health;
    if(monster.type == MonsterType::OGRE){
        type = "Ogre";
        health = 3500;
    } else if(monster.type == MonsterType::SLIME){
        type = "Slim";
        health = 2000;
    } else {
        type = "Unknown";
        health = 10000;
    }
    std::cout << "This " << type << " is named " << monster.name << " and has " << 
    health << " health" << std::endl;

    IO::printFooter("Monster Info");
    IO::printLineSpace(2);
}

int main(){
    Monster mon1 = {MonsterType::OGRE, "terion"};
    Monster mon2 = {MonsterType::SLIME, "runsy"};

    printMonster(mon1);
    printMonster(mon2);

    return 0;
}