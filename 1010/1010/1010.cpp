/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1010.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define wage 300

int main (){

	int exp[13] = {};
	int i;

	for ( i  = 1; i <= 12; i ++ ){
	
		scanf ( "%d", &exp[i] );
	
	}

	int rem = 0;//remain per month
	int mom = 0;//amount the mom have
	int boy = 0;//amount the boy have

	for ( i = 1; i <= 12; i ++ ){
	
		boy += wage;

		boy -= exp[i];

		if ( boy < 0 ){
		
			printf ( "-%d\n", i );
			return 0;
		
		}
		else {
		
			if ( boy / 100 > 0 ){
			
				mom += ( boy / 100 ) * 100;
				boy = boy % 100;
			
			} 
		
		}
	
	}

	boy += ( int ) ( ( ( double ) mom ) * 1.2 );

	printf ( "%d\n", boy );

	return 0;

}