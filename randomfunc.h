#ifndef RANDOMFUNC_H
#define RANDOMFUNC_H


//////////////////////////////////////////////////////////////////////////
/*              SIMPLE TWO FUNCTIONS FOR RANDOM                         */
/* This functions simply make random numbers int or double	        */
/*                                                                      */
/*----------------------------------------------------------------------*/
/* int int_rand_span(int min, int max)				        */
/*                                                                      */
/* Argument     |       Explenation                                     */
/*______________________________________________________________________*/
/* Creates an integer number within the range of min or max	        */
/* min	        |       The smallest number			        */
/* max   	|       The greatest number				*/
/*----------------------------------------------------------------------*/
/* double float_rand_span(double min,double max, int dec)		*/
/*______________________________________________________________________*/
/* Creates a double (floating point) number within the range of min and */
/* and max								*/	
/* dec       	|       Where you want to have the randomization	*/
/*			e.g "100" will just affect the third comma value*/                  
//////////////////////////////////////////////////////////////////////////







int int_rand_span(int min,int max)
{
	int x;
	int i;
	int y;
	if(min > max)
	{
		printf("The minimum is larger than the maximum in the function int_rand_span - maybe switched it?\n");
	}

	if(max > 0 && min > 0 || (max > 0 && min < 0))
	{
		x = rand() %max + min +1 ;
	}
	else
	{
		x = rand() %min + max +1;
	}
	

	int pos_neg;
	if(max > 0 && min < 0)
	{	
		pos_neg = rand() %2;
		if(pos_neg == 1)
		{
			x = rand()%max + 1; 
			if( x < min)
			{
				x = min;
			}
			if( x > max)
			{
				x = max;
			}
		}
		else
		{
			min = min*(-1);
			x = rand()%(min +1);
			x = x*(-1);
			if(x < min*(-1))
			{
				x = min*(-1);
			}

		}
	}

	return x;
}

double float_rand_span(double min,double max, int dec)
{

	double x;
	int i;
	int divid = 10;
	
	if(min > max)
	{
		printf("The minimum is larger than the maximum in the function float_rand_span - maybe switched it?\n");
	}
		if( max > 0 && min > 0 || (max > 0 && min < 0))
		{
			x = (double) ((rand() % (int) max) + min +1);
		}
		else
		{
			x = (double) ((rand() % (int) min) + max + 1);
		}
		int pos_neg;	
		if(max > 0 && min < 0)
		{
			pos_neg = rand() %2;
			if(pos_neg == 1)
			{
				x = rand()% (int)max +1;
				if(x < min)
				{
					x = min;
				}
				if( x > max)
				{
					x = max;
				}
			}
			else
			{
				min = min*(-1);
				x = rand()%((int)min +1);
				x = x*(-1);
				if(x < min*(-1))
				{
					x = min*(-1);
				}
			}
		}
	if(dec > 1)
	{
			
		for(i=2; i < dec;i ++)
		{
			divid = divid*10;
		}
		
		x = x + x/divid;
	}
	else	
	{
		x = x;		
	}
	return x;
} 















#endif
