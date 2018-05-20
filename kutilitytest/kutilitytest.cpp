// kutilitytest.cpp : Defines the entry point for the console application.
//

#include "kutility.h"
#include "cstandard.h"


int main()
{
	string trace_file_dir = ".\\klogs\\NetworkServer_x64_v141_Debug\\2018 - 05 - 20\\";
	int error_code = kk::Utility::CreateDir(trace_file_dir);
	if (error_code)
	{
		fprintf(stdout, ("create dir error, path:%s\n"), trace_file_dir.c_str());
	}
	return 0;
}

