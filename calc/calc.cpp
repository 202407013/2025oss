// calc.cpp : ???�일?�는 'main' ?�수가 ?�함?�니?? 거기???�로그램 ?�행???�작?�고 종료?�니??
//

#include <iostream>
#include "add.h"
#include "dive.h"
#include "mod.h"
#include "mul.h"
#include "sub.h"

#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int x = 0;
	int y = 0;
	int i = 0;


	for (int i=0; i < 10; i++)
	{
		if (-999 == x) {
			printf("?�로그램??종료?�니??\n");
			break;
		}
		std::cout << "첫번�??��? ?�력?�세??: ";
		std::cin >> x;
		std::cout << "?�번�??��? ?�력?�세??: ";
		std::cin >> y;

		printf("?�력????x[ %d ] y[ %d ]\n", x, y);
		printf("add[ %d ] sub[ %d ] mul[ %d ] dive[ %d ] mod[ %d ]\n",
			add(x, y), sub(x, y), mul(x, y), dive(x, y), mod(x, y));
	}
}
