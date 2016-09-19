/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1020.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main (){
 
	int n;
 
	scanf ( "%d", &n );
	printf ( "%d=", n );
 
	int i;
 
	int now = n;
	
	for ( i = 2; (i-1) * (i-1) <= n; i ++ ){//to be fast, we should calculate sqrt(n), but the fucking oj don't use -lm in gcc, holy fuck!
		
			if ( now % i == 0 ){
			
				printf ( "%d(", i );
 
				int acc = 0;//account the times
 
				while ( now % i == 0 ){
				
					acc ++;
					now /= i;
				
				}
 
				printf ( "%d)", acc );
			
			}
 
			if ( now == 1 ){
			
				break;
			
			}
	
	}
 
	if ( now != 1 ){
	
		printf ( "%d(1)", now );
	
	}

	printf ( "\n" );
 
	return 0;
 
}