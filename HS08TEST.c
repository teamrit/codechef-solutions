    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    int main()
    {
    	float x,y,z;
    	scanf("%f",&x);
    	scanf("%f",&y);
    	z= x+0.50;
    if (z <= y)
    	{
    	if (fmod(x,5)==0)
    	{ printf("%f", y-z); }
    	else
    	{ printf("%f", y); }
    	}
    else
    	{printf("%f", y); }
    	return 0;
    	} 
