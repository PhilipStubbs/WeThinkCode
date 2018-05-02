#include <unistd.h>

unsigned char reverse_bits(unsigned char octec)
{
	int byte = 8;
	unsigned char r= 0;

	while(byte--)
	{
		r = (r << 1) | (octec & 1);
		octec >>=1;
	}
	return (r);

}

void	print_bits(unsigned char octec)
{
	int i = 256;
	while(i >>=1)
	{
		(octec & i) ? write(1,"1",1) : write(1, "0", 1);
	}
	write(1, "\n", 1);
}


unsigned char swap_bits(unsigned char octec)
{
	 return((octec >> 4) | (octec << 4));
}

int main()
{

	unsigned char r = 'r';
	print_bits(r);
	print_bits(reverse_bits(r));
	print_bits(swap_bits(r));

}