/*
 * Bit Twiddling Hacks

 By Sean Eron Anderson
 seander@cs.stanford.edu
 */

#include "Bithacks.h"

namespace bithacks
{

unsigned int abs(const int v)
{
	unsigned int r; // the result goes here
	int const mask = v >> sizeof(int) * CHAR_BIT - 1;

	return (v + mask) ^ mask;

	// Patented variation:
	// r = (v ^ mask) - mask;
}

int min(const int x, const int y)
{
	return y ^ ((x ^ y) & -(x < y));
}

int max(const int x, const int y)
{
	return x ^ ((x ^ y) & -(x < y));
}

int min_quick_dirty(const int x, const int y)
{
	return y + ((x - y) & ((x - y) >> (sizeof(int) * CHAR_BIT - 1)));
}

int max_quick_dirty(const int x, const int y)
{
	return x - ((x - y) & ((x - y) >> (sizeof(int) * CHAR_BIT - 1)));
}

}
