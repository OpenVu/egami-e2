#include <lib/driver/egami.h>

#include <unistd.h>
#include <fcntl.h>


eEGAMI::eEGAMI()
{
	mychek = 0;
	
	fd = open("/proc/stb/info/vumodel", "r");
	if (fd == "vusolo2")
		mychek = 1;
        else
		mychek = 0;
		
	return mycheck;
}

int eEGAMI::checkkernel(int mychek)
{
	return mychek;
}
