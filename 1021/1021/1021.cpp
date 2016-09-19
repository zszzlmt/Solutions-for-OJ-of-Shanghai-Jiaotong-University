/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1021.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-15					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int t[150 + 1][150 + 1] = {};

int main (){

	int n;

	scanf ( "%d", &n );

	int sm = 1;//state machine within 1, 2, 3, 4
	int done = 0;
	int total = n * n;

	int i = 1;
	int j = 1;

	int index = 1;

	while ( done < total ){
	
		switch ( sm ){
		
		case 1:

			while ( t[i][j] == 0 && j <= n && j >= 1 ){
			
				t[i][j] = index;
				index ++;
				done ++;

				j ++;
			
			}

			j --;
			i ++;
			sm = 2;

			break;
		case 2:

			while ( t[i][j] == 0 && i <= n && i >= 1 ){
			
				t[i][j] = index;
				index ++;
				done ++;

				i ++;
			
			}

			i --;
			j --;
			sm = 3;

			break;
		case 3:

			while ( t[i][j] == 0 && j <= n && j >= 1 ){
			
				t[i][j] = index;
				index ++;
				done ++;

				j --;
			
			}

			j ++;
			i --;
			sm = 4;

			break;
		case 4:

			while ( t[i][j] == 0 && i <= n && i >= 1 ){
			
				t[i][j] = index;
				index ++;
				done ++;

				i --;
			
			}

			i ++;
			j ++;
			sm = 1;

			break;
		default :

			break;
		}
	
	}
	
	for ( i = 1; i <= n; i ++ ){
	
		for ( j = 1; j <= n; j ++ ){
		
			printf ( "%d", t[i][j] );
			
			if ( j == n ){
			
				printf ( "\n" );
			
			}
			else {
			
				printf ( " " );
			
			}
		
		}
	
	}


	return 0;

}