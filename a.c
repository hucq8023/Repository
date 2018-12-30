#include <stdio.h>

int main(void)
{
	int deepth_feet,deepth_inches,deepth_m;
	deepth_inches = 7;
	deepth_feet = deepth_inches * 6;
	deepth_m = deepth_feet * 3;
	printf("Wreck of the Hesperus:\n");
	printf("It\'s deepth at sea in different units:\n");
	printf("  %d deepth_feet\n",deepth_feet);
	printf("  %d deepth_inches\n",deepth_inches);
	printf("  %d deepth_m\n",deepth_m);
	//while (1);
	return 0;
}