// Author: zhangjianwei

#include "zengine.h"

int main(int argc, char **argv)
{
	if (zgx_get_options(argc, argv) != ZGX_OK)
	{
		return 1;
	}

	if (zgx_show_version)
	{
	}

	return 0;
}
