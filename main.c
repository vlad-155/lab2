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
#define DAY_HOURS 24

int main()
{
	int current_day = 1;
	int current_hour = 8;
	
	int inventory[ARR_SIZE] = {0};

	inventory[0] = WOOD;
	inventory[1] = CARBON;
	inventory[2] = STONE;
	inventory[3] = IRON;
	inventory[4] = CLAY;
	inventory[5] = CARBON;
	inventory[6] = EMPTY;
	inventory[7] = CARBON;
	inventory[8] = IRON;
	inventory[9] = GOLD;

	printf("Добро пожаловать в меню игры \"Весёлый фермер\"!\n");

	int choice;
	while (1)
	{
		printf("Для выбора действия введите цифру от 0 до 6 >>");
		while (scanf("%d", &choice) != 1 || choice < 0 || choice > 6)
		{
			printf("Ошибка! Введите цифру от 0 до 6 >>");
			while (getchar() != '\n');
		}

		switch (choice)
		{
			case 0:
				printf("Выход из игры...");
				return 0;
			case 1:
				if (current_hour <= 9)
				{
					printf("Текущее время: День %d, 0%d:00\n", current_day, current_hour);
				}
				else
					printf("Текущее время: День %d, %d:00\n", current_day, current_hour);
				break;
			case 2:
				int work_hours;
				printf("Введите количество часов, которые хотите потратить на работу >>");

				while (scanf("%d", &work_hours) != 1)
				{
					printf("Ошибка! Количество часов должно быть целым числом\n");
					printf("Введите количество часов, которые хотите потратить на работу >>");
					while (getchar() != '\n');
				}

				current_hour += work_hours;
				if (current_hour >= DAY_HOURS)
				{
					int full_days_count = current_hour / DAY_HOURS;
					current_day += full_days_count;
					current_hour -= full_days_count * DAY_HOURS;
				}

				printf("Время успешно обновлено!\n");
				break;
			case 3:
				for (int i = 0; i < ARR_SIZE; i++)
				{
					switch (inventory[i])
					{
						case WOOD:
							printf("Слот %d: [1] (Дерево)\n", i);
							break;
						case STONE:
							printf("Слот %d: [2] (Камень)\n", i);
							break;
						case SEEDS:
							printf("Слот %d: [3] (Семена)\n", i);
							break;
						case GRASS:
							printf("Слот %d: [4] (Трава)\n", i);
							break;
						case CLAY:
							printf("Слот %d: [5] (Глина)\n", i);
							break;
						case LEAF:
							printf("Слот %d: [6] (Листья)\n", i);
							break;
						case CARBON:
							printf("Слот %d: [7] (Уголь)\n", i);
							break;
						case IRON:
							printf("Слот %d: [1] (Железо)\n", i);
							break;
						case GOLD:
							printf("Слот %d: [1] (Золото)\n", i);
							break;
						default:
							printf("Слот %d: [0]\n", i);
							break;
					}
				}
				break;
		}
	}

	return 0;
}
