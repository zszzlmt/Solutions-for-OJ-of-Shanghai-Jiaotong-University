/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1209.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-20					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main (){

	int n;
	int k;
	int num;
	int cnt;

	cnt = 0;
	scanf ( "%d", &n );

	for ( k = 1; k <= n; k ++ ){
	
		scanf ( "%d", &num );

		while ( num ){
		
			if ( num & 1 ){
			
				cnt ++;
			
			}
			
			num = num >> 1;
		
		}
	
	}

	printf ( "%d", cnt );

	return 0;

}