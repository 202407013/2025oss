// calc.cpp : ???μΌ?λ 'main' ?¨μκ° ?¬ν¨?©λ?? κ±°κΈ°???λ‘κ·Έλ¨ ?€ν???μ?κ³  μ’λ£?©λ??
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
			printf("?λ‘κ·Έλ¨??μ’λ£?©λ??\n");
			break;
		}
		std::cout << "μ²«λ²μ§??λ? ?λ ₯?μΈ??: ";
		std::cin >> x;
		std::cout << "?λ²μ§??λ? ?λ ₯?μΈ??: ";
		std::cin >> y;

		printf("?λ ₯????x[ %d ] y[ %d ]\n", x, y);
		printf("add[ %d ] sub[ %d ] mul[ %d ] dive[ %d ] mod[ %d ]\n",
			add(x, y), sub(x, y), mul(x, y), dive(x, y), mod(x, y));
	}
}
