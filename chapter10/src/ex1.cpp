#include <iostream>
#include <string_view>

enum class Type {
	ogre,
	dragon,
	orc,
	giant_spider,
	slime,
};

struct Monster {
	Type monsterType;
	std::string_view name;
	int health;
};

constexpr void printMonster(const Monster& monster) {
	std::string_view type;
	switch (monster.monsterType) {
		case Type::ogre: type = "ogre"; break;
		case Type::dragon: type = "dragon"; break;
		case Type::orc: type = "orc"; break;
		case Type::giant_spider: type = "giant spider"; break;
		//case Type::slime: type = "slime"; break;
		default: {
			std::cout << "Monster not found!" << std::endl;
			return;
		}
	} 

	std::cout << "This " << type << " is named " << monster.name << " and has " << monster.health << " health.\n";
	return;
}

int main() {
	Monster myFirstMonster {Type::giant_spider, "gianni", 1};
	Monster myBadMonster {Type::slime, "gianni", 1};
	printMonster(myFirstMonster);
	printMonster(myBadMonster);
	return 0;
}
