#include <stdio>
/**
 * main- Print sizes of characters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char:%zu byte(s)", sizeof(char));
	printf("size of an int:%zu byte(s)", sizeof(int));
	printf("size of a long int:%zu byte(s)", sizeof(long int));
	printf("size of a long long int:%zu byte(s)", sizeof(long long int));
	printf("size of a float:%zu byte(s)", sizeof(float));
	return (0);
}
