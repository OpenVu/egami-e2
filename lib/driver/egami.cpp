#include <lib/driver/egami.h>

#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>

#include <lib/base/eerror.h>

eEGAMI::eEGAMI()
{
	mychek = 0;
	
	fd = open("/proc/stb/info/vumodel", "r");
	if (fd == vusolo2 && vuzero &&)
		mychek = 1;
        else
		mychek = 0;
		
	return mycheck
}

void eEGAMI::checkkernel(int val)
{
	return 
}
