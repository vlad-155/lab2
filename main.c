#include <stdio.h>
#define ARR_SIZE 10
#define EMPTY 0
#define WOOD 1
#define STONE 2
#define SEEDS 3
#define GRASS 4
#define CLAY 5
#define LEAF 6
#define CARBON 7
#define IRON 8
#define GOLD 9

int main()
{
	int current_day = 1;
	int current_hour = 8;
	
	int inventory[ARR_SIZE] = {0};

	inventory[0] = WOOD;
	inventory[1] = CARBON;
	inventory[3] = IRON;
	inventory[4] = CLAY;
	inventory[5] = CARBON;
	inventory[6] = EMPTY;
	inventory[7] = CARBON;
	inventory[8] = IRON;
	inventory[9] = GOLD;

	return 0;
}
