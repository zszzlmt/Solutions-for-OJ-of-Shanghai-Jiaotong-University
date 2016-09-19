/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1001.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-01					                               *
********************************************************************************/

#include<stdio.h>

int main(){

	int h;
	int a;
	int num;
	int count = 0;

	int apple;

	int i;

	scanf ( "%d%d%d", &h, &a, &num );

	int t;

	t = h + a;

	for ( i = 1; i <= num; i ++ ){
	
		scanf( "%d", &apple );

		if ( t >= apple ){
		
			count ++;

		}

	}

	printf( "%d", count );

	return 0;

}