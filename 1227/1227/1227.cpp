/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1227.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-20					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

typedef struct link_node{

	int val;
	struct link_node * next;

} node;

typedef struct link_head{

	node * first;

} head;

void insert_head ( head * h, node * p );

int main (){

	int n;
	head h;

	scanf ( "%d", &n );
	h.first = NULL;

	int i;
	node * tmp;

	for ( i = 1; i <= n; i ++ ){
	
		tmp = ( node * ) malloc ( sizeof ( node ) );
		tmp -> next = NULL;

		scanf ( "%d", & ( tmp -> val ) );
		
		insert_head ( &h, tmp );

	}

	int min;
	int j;
	node * scan;
	node * min_now;

	for ( i = 1; i <= n - 1; i ++ ){
	
		if ( i == 1 ){
		
			min = h.first->val;
			tmp = h.first;
		
		}
		else {
		
			for ( j = 1, tmp = h.first; j != i; j ++ ){
			
				tmp = tmp -> next;
			
			}

			min = tmp -> val;
		
		}
	
		scan = tmp -> next;
		min_now = tmp;

		while ( scan != NULL ){
		
			if ( scan -> val < min ){
			
				min = scan -> val;
				min_now = scan;
			
			}

			scan = scan -> next;
		
		}

		if ( min_now != tmp ){
			
			int t;

			t = min_now -> val;
			min_now -> val = tmp -> val;
			tmp -> val = t;
		
		}

	}

	tmp = h.first;

	while ( tmp != NULL ){
	
		printf ( "%d", tmp -> val );

		if ( tmp -> next != NULL ){
		
			printf ( " " );
		
		}

		tmp = tmp -> next;
	
	}

	return 0;

}

void insert_head ( head * h, node * p ){

	node * tmp;

	tmp = h -> first;
	h -> first = p;
	p -> next = tmp;

}