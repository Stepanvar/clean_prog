#include "stdio.h"

typedef enum {
	monday,
	tuesday,
	wednesday,
	thursday,
	friday
} WEEKDAY;
WEEKDAY growup(WEEKDAY day)
{
	printf("%p\n", &day);
	return (++day);
}

int main()
{
	WEEKDAY day;

	day = monday;
	printf("%u\n", day);
	printf("%p\n", &day);
	day = growup(day);
	printf("%u\n", day);
	return (0);
}
