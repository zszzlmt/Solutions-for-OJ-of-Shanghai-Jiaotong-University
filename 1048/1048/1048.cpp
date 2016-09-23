/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1048.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-23					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int t[1024] = {};
char lr[1024] = {};
int que[1024] = {};

int main (){


	int n;
	int i;
	int f;
	int l;
	int r;

	scanf ( "%d", &n );

	for ( i = 1; i <= ( n - 1 ) / 2; i ++ ){
	
		scanf ( "%d%d%d", &f, &l, &r );

		t[l] = f;
		t[r] = f;
		lr[l] = 'l';
		lr[r] = 'r';
	
	}

	int root;

	for ( i = 1; i <= n; i ++ ){
	
		if ( t[i] == 0 ){
		
			root = i;
			break;
		
		}
	
	}

	int s;//start of que
	int e;//end of que
	int tmp;
	int done;
	int to_push[2 + 1] = {};
	int leaf_flag = 0;

	s = 0;
	e = 0;

	que[e++] = root;

	while ( s != e ){
	
		/*pop*/
		tmp = que[s++];

		done = 0;
		to_push[1] = 0;
		to_push[2] = 0;

		/*push*/
		if ( leaf_flag == 0 ){

			for ( i = 1; i <= n; i ++ ){
		
				if ( t[i] == tmp ){
			
					done ++;

					switch ( lr[i] ){
				
					case 'l':

						to_push[1] = i;

						break;

					case 'r':

						to_push[2] = i;

						break;

					default :

						break;
				
					}

					if ( done == 2 ){
				
						break;
				
					}
			
				}
		
			}

		}

		if ( to_push[1] != 0 && to_push[2] != 0 ){
		
			que[e++] = to_push[1];
			que[e++] = to_push[2];
		
		}
		else {
		
			leaf_flag = 1;
		
		}

		printf ( "%d\n", tmp );

	
	}

	return 0;

}