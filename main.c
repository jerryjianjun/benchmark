#include <stdio.h>
#include <benchmark.h>

int main(int argc, char *argv[])
{
	benchmark("memcpy");
	benchmark("memset");
	benchmark("memmove");
	benchmark("memcmp");

	return 0;
}
