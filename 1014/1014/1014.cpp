/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1014.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-22					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

char a[100000 + 1] = {};
char b[100000 + 1] = {};
char sum[100000 + 2] = {};

void reverse( char* sum, int len );

int main(){

	char c;
	int i = 1;

	/*input*/

	c = getchar();

	while ( c != '\n' ){
	
		a[i] = c;
		i ++;

		c = getchar();
	
	}

	a[i] = '\0';

	int j = 1;

	c = getchar();
	
	while ( c != '\n' ){
	
		b[j] = c;
		j ++;

		c = getchar();
	
	}

	b[j] = '\0';

	/*calculate the sum*/

	i --;
	j --;
	
	int index = 1;
	int cflag = 0;
	int t;

	while ( i >= 1 || j >= 1 ){
	
		if ( i >= 1 && j >= 1 ){
		
			t = ( a[i] - '0' ) + ( b[j] - '0' ) + cflag;

			cflag = 0;

			if ( t >= 10 ){
		
				cflag = 1;
				t -= 10;

			}

			sum[index] = t + '0';

			i --;
			j --;

			index ++;
			
		}
		else {
		
			if ( i < 1 ){
			
				while ( j >= 1 ){
				
					t = b[j] - '0' + cflag;
					cflag = 0;

					if ( t >= 10 ){
					
						cflag = 1;
						t -= 10;
					
					}

					sum[index] = t + '0';

					index ++;
					j --;
				
				}

				//break;
			
			}
			else {
			
				while ( i >= 1 ){
				
					t = a[i] - '0' + cflag;
					cflag = 0;

					if ( t >= 10 ){
					
						cflag = 1;
						t -= 10;
					
					}

					sum[index] = t + '0';

					index ++;
					i --;
				
				}

				//break;
			
			}
		
		}

	}//while-done

	if ( cflag == 1 ){
	
		sum[index] = '1';
		index ++;

	}

	sum[index] = '\0';

	reverse( sum, index );

	for ( i = 1; i < index; i ++ ){
	
		printf ( "%c", sum[i] );
	
	}

	printf ( "\n" );

	return 0;

}

void reverse( char* sum, int len ){

	int i;
	int j;
	char tmp;

	i = 1;
	j = len - 1;

	while ( i < j ){
	
		tmp = sum[i];
		sum[i] = sum[j];
		sum[j] = tmp;

		i ++;
		j --;
	
	}

}