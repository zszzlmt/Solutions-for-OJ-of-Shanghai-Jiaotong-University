/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1359.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-21					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main (){

	int i = 0;
	char c;
	int res = 0;
	int state;

	c = getchar ( );

	while ( c != '\n' ){
	
		state = 2;

		if ( c == ' ' ){
			
			state = 0;

		}
		else {
		
			if ( c >= 'A' && c <= 'Z' ){
			
				state = 1;
			
			}
		
		}

		switch ( state ){
		
		case 0 :

			break;

		case 1 :

			res += ( c - 'A' + 1 ) * ( i + 1 );

			break;

		case 2 :

			res += ( c - 'a' + 1 + 26 ) * ( i + 1 );

			break;

		
		}

		i ++;
		c = getchar ( );
	
	}

	printf ( "%d\n", res );

	return 0;

}