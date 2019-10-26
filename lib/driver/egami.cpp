#include <lib/driver/egami.h>

#include <unistd.h>
#include <fcntl.h>
#include <string>


eEGAMI *eEGAMI::instance = 0;


eEGAMI::eEGAMI()
{
	ASSERT(!instance);
	instance = this;
	mychek = 0;
	
	fd = open("/proc/stb/info/vumodel", "r");
	if (fd == "vusolo2")
		mychek = 1;
        else
		mychek = 0;
		
}

eEGAMI *eEGAMI::getInstance()
{
	return instance;
}

void eEGAMI::checkkernel(int mychek)
{
	//return mychek;
}
