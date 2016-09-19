/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1023.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-19					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int t[600 + 1][600 + 1] = {};

int main (){

	int n;
	int k;

	scanf ( "%d", &n );

	int size;
	int way;
	int i;
	int j;

	for ( k = 1; k <= n; k ++ ){
	
		scanf ( "%d%d", &size, &way );

		for ( i = 1; i <= size; i ++ ){
		
			for ( j = 1; j <= size; j ++ ){
			
				scanf ( "%d", &( t[i][j] ) );
			
			}
		
		}
		switch ( way ){
		
		case 0:

			for ( i = 1; i <= size; i ++ ){
			
				for ( j = size; j >= 1; j -- ){
				
					printf ( "%d", t[i][j] );

					if ( j > 1 ){
					
						printf ( " " );
					
					}
				
				}

				printf ( "\n" );
			
			}

			break;
		
		case 1:

			for ( i = size; i >= 1; i -- ){
			
				for ( j = 1; j <= size; j ++ ){
				
					printf ( "%d", t[i][j] );

					if ( j < size ){
					
						printf ( " " );
					
					}
				
				}

				printf ( "\n" );
			
			}

			break;

		case 2:

			for ( i = 1; i <= size; i ++ ){
			
				for ( j = 1; j <= size; j ++ ){
				
					printf ( "%d", t[j][i] );
			
					if ( j < size ){
				
						printf ( " " );
				
					}
				}

				printf ( "\n" );

			}

			break;
		
		default:

			break;

		}
	
	}

	return 0;

}