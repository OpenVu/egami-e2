#ifndef __egami_h
#define __egami_h

#include <string>

class eEGAMI
{
	static eEGAMI *instance;
	string fd;

public:
	eEGAMI();
	
	static eEGAMI *getInstance();
	int mychek;
	void checkkernel(int mychek);
	
};

#endif
