/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1003.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-02					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int table1[101][101] = {};
int table2[101][101] = {};

void copy( int l );

int main(){

	int l;
	int i, j;

	scanf ( "%d", &l );

	int cnt;
	cnt = l * l;
	int num;

	for ( i = 1; i <= l; i ++ ){
	
		for ( j = 1; j <= l; j ++ ){
		
			scanf ( "%d", &( table1[i][j] ) );
			if ( table1[i][j] != 0 ){
			
				cnt --;

			}
			table2[i][j] = table1[i][j];
			
		}
	
	}

	num = 0;

	while ( cnt > 0 ){
			
			num ++;
			
			for ( i = 1; i <= l; i ++ ){
	
				for ( j = 1; j <= l; j ++ ){
		
					if ( table1[i][j] == 1 ){
					
						if ( i >= 2 ){
						
							if ( table2[i - 1][j] == 0 ){
							
								table2[i - 1][j] = 1;
								cnt --;
								
							}

						}

						if ( i <= l - 1 ){
						
							if ( table2[i + 1][j] == 0 ){
							
								table2[i + 1][j] = 1;
								cnt --;
								
							}

						}

						if ( j >= 2 ){
						
							if ( table2[i][j - 1] == 0 ){
							
								table2[i][j - 1] = 1;
								cnt --;
								
							}

						}

						if ( j <= l - 1 ){
						
							if ( table2[i][j + 1] == 0 ){
							
								table2[i][j + 1] = 1;
								cnt --;
								
							}

						}

					
					}

		
				}

			}

			copy( l );
	
	}

	printf ( "%d\n", num );

	return 0;

}

void copy( int l ){

	int i;
	int j;

	for ( i = 1; i <= l; i ++ ){
	
		for ( j = 1; j <= l; j ++ ){
		
			table1[i][j] = table2[i][j];
		
		}
	
	}

}