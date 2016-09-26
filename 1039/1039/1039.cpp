/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1039.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-22					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

#define SIZE 100000

static int t[SIZE + 1] = {};
static int pos[SIZE + 1] = {};
/*when recursive way*/
//static int stack[SIZE + 1] = {};
//static int visit[SIZE + 1] = {};

//int pos ( int x );
void post ( int i );

int cnt;

int main (){

	int n;
	int i;
	int i1;
	int i2;
	int i3;
	int base;
	int sonid;

	t[1] = 1;
	pos[1] = 1;

	scanf ( "%d", &n );
	
	for ( i = 1; i <= n; i ++ ){
	
		scanf ( "%d%d%d", &i1, &i2, &i3 );

		base = pos [i1];
	
		if ( i2 != -1 ){
	
			sonid = 2 * base;
			t[sonid] = i2;
			pos[i2] = sonid;
		
		}
		if ( i3 != -1 ){
		
			sonid = 2 * base + 1;
			t[sonid] = i3;
			pos[i3] = sonid; 
		
		}
	
	}

	for ( i = 1; i <= n; i ++ ){

		printf ( "%d", pos[i] );

		if ( i != n ){
		
			printf ( " " );
		
		}
	
	}

	printf ( "\n" );
	
	/*recursive*/
	cnt = n;
	post ( 1 );

	/*non-recursive

	cnt = n;

	int sp;//stack pointer
	int p;

	sp = 0;//begin with 1 in stack
	p = 1;

	while ( t[p] != 0 ){
	
		sp ++;
		stack[sp] = p;
		p = 2 * p;//left child
	
	}

	while ( sp != 0 ){
	
		p = stack[sp];

		if ( t[2 * p + 1] == 0 || visit[p] == 1 ){
			
			visit[p] = 1;
			sp --;

			printf ( "%d", t[p] );
			
			cnt --;

			if ( cnt != 0 ){
			
				printf ( " " );
			
			}
			else {
			
				printf ( "\n" );
			
			}
		
		}
		else {
		
			visit[p] = 1;

			p = 2 * p + 1;

			while ( t[p] != 0 ){
			
				sp ++;
				stack[sp] = p;
				p = p * 2;
			
			}
		
		
		
		}
	
	
	}

	*/
	
	return 0;

}

/*

int pos ( int x ){

	int i;

	for ( i = 1; ; i ++ ){
	
		if ( t[i] == x ){
		
			return i;
		
		}
	
	}


}

*/

void post ( int i ){

	if ( t[i] == 0 ){
	
		return ;
	
	}

	if ( t[2 * i] != 0 ){

		post ( 2 * i );

	}

	if ( t[2 * i + 1] != 0 ){

		post ( 2 * i + 1 );

	}

	
	printf ( "%d", t[i] );
	cnt --;

	if ( cnt != 0 ){
		
		printf ( " " );
		
	}
	else {
		
		printf ( "\n" );
		
	}

	return ;

}
