/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1206.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-29					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char bestack[10000 + 1] = {};
char iestack[10000 + 1] = {};

int besp;
int iesp;

void push ( char * s, char c, int * sp );
char pop ( char * s, int * sp );

void push ( char * s, char c, int * sp ){

	s[ ++ ( * sp ) ] = c;

}
char pop ( char * s, int * sp ){

	if ( ( * sp ) == 0 ){
	
		return '0';
	
	}

	return s[ ( * sp ) -- ];

}

int main ( ){

	char c;
	int succ = 1;
	char * s;

	s = ( char * ) malloc ( sizeof ( char ) * 10000 );

	besp = 0;
	iesp = 0;

	while ( scanf ( "%s", s ) != EOF ){

		if ( strcmp ( s, "begin" ) == 0 ){ 
		
			push ( bestack, 'b', &besp );
		
		}
		else if ( strcmp ( s, "end" ) == 0 ){
	
			c = pop ( bestack, &besp );

			if ( c != 'b' ){
			
				succ = 0;
				break;

			}

		}
		else if ( strcmp ( s, "if" ) == 0 ){

			push ( iestack, 'i', &iesp );

		}
		else if ( strcmp ( s, "then" ) == 0 ){

			push ( iestack, 't', &iesp );

		}
		else if ( strcmp ( s, "else" ) == 0 ){

			c = pop ( iestack, &iesp );

			if ( c != 't' ){
			
				succ = 0;
				break;
			
			}

			c = pop ( iestack, &iesp );

			if ( c != 'i' ){
			
				succ = 0;
				break;
			
			}

		}
	}

	while ( ( c = pop ( iestack, &iesp ) ) != '0' ){
	
		if ( c == 't' ){
		
			if ( ( c = pop ( iestack, &iesp ) ) != 'i' ){
			
				succ = 0;
				break;
			
			}
		
		}
		else {
		
			succ = 0;
			break;
		
		}
	
	}

	if ( succ == 0 || besp != 0 ){
	
		printf ( "Error!\n" );
	
	}
	else {
	
		printf ( "Match!\n" );
	
	}

	return 0;

}