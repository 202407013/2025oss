// calc.cpp : ???Œì¼?ëŠ” 'main' ?¨ìˆ˜ê°€ ?¬í•¨?©ë‹ˆ?? ê±°ê¸°???„ë¡œê·¸ë¨ ?¤í–‰???œì‘?˜ê³  ì¢…ë£Œ?©ë‹ˆ??
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
			printf("?„ë¡œê·¸ë¨??ì¢…ë£Œ?©ë‹ˆ??\n");
			break;
		}
		std::cout << "ì²«ë²ˆì§??˜ë? ?…ë ¥?˜ì„¸??: ";
		std::cin >> x;
		std::cout << "?ë²ˆì§??˜ë? ?…ë ¥?˜ì„¸??: ";
		std::cin >> y;

		printf("?…ë ¥????x[ %d ] y[ %d ]\n", x, y);
		printf("add[ %d ] sub[ %d ] mul[ %d ] dive[ %d ] mod[ %d ]\n",
			add(x, y), sub(x, y), mul(x, y), dive(x, y), mod(x, y));
	}
}
