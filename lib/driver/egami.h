#ifndef __egami_h
#define __egami_h

#include <string.h>

class eEGAMI
{

public:
	eEGAMI();
	std::string fd;
	int mychek;
	int checkkernel();
	
};

#endif
