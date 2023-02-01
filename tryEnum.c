#include <stdio.h>

int main(void)
{
	enum drink {
		MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND
	};

	int price(enum drink d)
	{
		switch (d) {
			case MUDSLIDE:
				return 6;
			case FUZZY_NAVEL:
				return 5;
			case MONKEY_GLAND:
				return 4;
		}
		return 0;
	}

	int money = price(FUZZY_NAVEL);

	printf("Price at money is %d\n", money);

	return 0;
}
