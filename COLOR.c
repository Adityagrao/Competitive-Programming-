  
//https://www.codechef.com/problems/COLOR
#ifndef max
#define max(a,b)   (((a) > (b)) ? (a) : (b))
#endif
#include <stdio.h>
int main()
{
	int n,t;
	int p[100];
	char c;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d\n",&n);
		p['R']=0; p['G']=0; p['B']=0;
		while ((c=getchar())!='\n') p[c]++;
		printf("%d\n",n-max(p['R'],max(p['B'],p['C'])));
	}
	return (0);
} 
