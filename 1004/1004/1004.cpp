/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1004.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-02					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main(){

	int time;
	int n;
	int s;
	int p;
	int x;

	scanf ( "%d%d%d%d%d", &time, &n, &s, &p, &x );

	int now = 0;

	int sum1 = s + x;
	int sum2 = p * 2;

	int i;
	char c;
	getchar();

	for ( i = 1;i <= n; i ++ ){
	
		scanf ( "%c", &c );
		getchar();

		switch ( c ){
		
		case 'u':
			now += sum1;
			break;

		case 'f':
			now += sum2;
			break;

		case 'd':
			now += sum1;
			break;
	
		}

		if ( now > time ){
		
			break;
		
		}
	
	}

	printf ( "%d\n", --i );

	return 0;

}

