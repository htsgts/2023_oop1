#include "RandomGenerator.h"

#include <time.h>
#include <stdlib.h>


RandomGenerator::RandomGenerator()
{
	srand(time(NULL));
}

int RandomGenerator::generateValue(int value__)
{
	return rand() % value__;
}
