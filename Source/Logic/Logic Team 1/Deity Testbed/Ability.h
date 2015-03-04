#ifndef ABILITY_H_
#define ABILITY_H_

#include <string>

#define NUM_FLAGS 1

typedef unsigned short AbilityID;
typedef struct
{
	std::string name;
	AbilityID id;
	//String icon;
	std::string toolTip;
	unsigned short targetType; /* TODO: enumerated type */
	int cooldown;
	int duration;
	//Effect (function pointer to the contents of the effect)
	bool flags[NUM_FLAGS]; /* TODO: determine required number of flags */
} AbilityParam;

class Ability
{
	public:
		Ability(AbilityID);
		~Ability();
	private:
		AbilityParam param;
};

#endif