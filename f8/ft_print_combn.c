#include <stdio.h>
#include <unistd.h>

void test2(int length, int n[])
{
	int i;
        char c;

        i = 0;
	while( i < length )
        {
                c = n[i] + '0';
                write(1, &c, 1);
		++i;
        }
        c = ' ';
	write(1, &c, 1);
        c = ',';
	write(1, &c, 1);

}	

void test1(int n[], int index, int length)
{
	if(index == length)
	{	
		test2(length, n);
	}
	int j;

	j = index;
   	while( j < length )
	{
		int temp;
                
		temp = n[index];
		n[index] = n[j];
		n[j] = temp;
		test1(n, index + 1, length);

		temp = n[index];
		n[index] = n[j];
		n[j] = temp;
		++j;
	}	
} 

void ft_print_combn(int n)
{
        int index;
        int xs[n];
	int length;

	while( n > 0 )
	{
		xs[n] = n;
		++n;
		++length;
	}	
        index = 0;
        test1(xs, index, length);
}


int main(void)
{
	ft_print_combn(2);
}	
