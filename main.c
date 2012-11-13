#include <benchmark.h>

int main(int argc, char *argv[])
{
	benchmark("memcpy");
	benchmark("memset");
	benchmark("memmove");
	benchmark("memcmp");
	benchmark("fwrite");
	benchmark("fread");

	return 0;
}
