#include <stdio.h>
#include <stdlib.h>
int sadrzi(int n,int c )
{
	int br=0;
	while(n>0)
	{
		if(n%10==c)
			br++;
		n=n/10;
	}
	return br;
}
int main() 
{
	int br,c,n;
	printf("unesi cifru koja se trazi u broju\n");
	scanf("%d",&c);
	printf("unesi broj u kom trazis da li se data cifra sadrzi\n");
	scanf("%d",&n);
	br=sadrzi(n,c);
	if(br==0)
		printf("u broju %d cifra %d se ne pojavljuje",n,c);
	else
		printf("u broju %d cifra %d se pojavljuje %d. puta",n,c,br);
	return 0;
}
