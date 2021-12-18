#include "random.h"

Random::Random() {

	/* initialize random seed: */
	srand(time(NULL));
	
}

double Random::fRand(double fMin, double fMax)
{
	double f = (double)rand() / RAND_MAX;
	return fMin + f * (fMax - fMin); // Between 0 and 1
}
