#include <iostream>
#include <string>


enum class MonsterType {
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME,
};

struct MyMonster {
	MonsterType type;
	std::string name;
	int health;
};

void printMonster(MyMonster monster);

int main()
{
	void printMonster(MyMonster monster);
	MyMonster ogre1 = {MonsterType::OGRE, "Jabbath", 100};
	MyMonster spider1 = { MonsterType::GIANT_SPIDER, "Ogaran", 50 };
	printMonster(ogre1);
	printMonster(spider1);
}

void printMonster(MyMonster monster)
{
	std::string type;
	switch (static_cast<int>(monster.type)) {
	case 0 : type = "Ogre";
		break;
	case 1: type = "Dragon";
		break;
	case 2: type = "Orc";
		break;
	case 3: type = "Giant Spider";
		break;
	case 4: type = "Slime";
		break;
	}
	std::cout << "\nThis " << type << " is named " << monster.name << " and has " << monster.health << " health.";
};
