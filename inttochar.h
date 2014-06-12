#ifndef INTTOCHAR_H
#define INTTOCHAR_H




//////////////////////////////////////////////////////////////////////////
/* 		SIMPLE FUNCTION FOR INT TO CHAR 			*/
/* This function simply converts numbers up to 9999 from int to char	*/
/*									*/
/*----------------------------------------------------------------------*/
/* void converter(int number, int correcture, char* c_number)		*/
/* 									*/
/* Argument 	| 	Explenation					*/
/*______________________________________________________________________*/
/* This function simply converts numbers up to 9999 from int to char 	*/
/* number	|	The number you want to covnert to string	*/
/* correcutre	|	Maybe you have some other ASCII Standard so 	*/
/*			you may enter some correcture which will be 	*/
/*			added to the ASCII - Number. The standard is 	*/
/*			that numbers start at "48"			*/
/* c_number		The output of this function. Here will be the	*/
/*			string of the number				*/
/*----------------------------------------------------------------------*/
/* void change(int pos, char *string_r, char* c_number, int length)     */
/*______________________________________________________________________*/ 
/* This function changes a string at a ceratin point to something other */
/* pos		| 	The position at which you want string_r to be	*/
/*			changed						*/
/* string_r	|	The string you want to be changed		*/
/* c_number	|	The string you want to be placed inside of 	*/
/*			string_r					*/
/* length	|	The total length of the change			*/
//////////////////////////////////////////////////////////////////////////



void converter(int number, int correcture, char* c_number)
{
	int t;
	int h;
	int z;
	int e;
	int z_a;
	int h_a;
	

	if(number >= 10)
	{
		z = number/10;
		e = number - 10*z;


		c_number[0] = (char) (z+48 + correcture);
		c_number[1] = (char) (e+48 + correcture);
	}
	else
	{
		c_number[0] = (char)(number + 48 + correcture);
	}
	
	if(number >= 100)
	{
		h = number/100;
		printf("%d \n", h);
		z_a = number - 100*h;

		z = z_a/10;
		printf("%d" , z);
		e = z_a - 10*z;
		printf("%d", e);

		c_number[0] = (char) (h + 48 + correcture);
		c_number[1] = (char) (z + 48 + correcture);
		c_number[2] = (char) (e + 48 + correcture);


	}


	if(number >= 1000)
	{
		t = number/1000;
		h_a = number - 1000*t;

		h = h_a/100;
		
		z_a = h_a - 100*h;
		z = z_a/10;

		e = z_a - 10*z;

		c_number[0] = (char) (t + 48 + correcture);
		c_number[1] = (char) (h + 48 + correcture);
		c_number[2] = (char) (z + 48 + correcture);
		c_number[3] = (char) (e + 48 + correcture);


	}

}



void change(int pos, char *string_r, char* c_number, int length)
{
	int i = 0;

	for(; i < length; i ++)
	{
		string_r[i + pos] = c_number[i];
	}
}











#endif 
