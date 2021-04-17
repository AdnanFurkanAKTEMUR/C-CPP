#include "mat.h"


double ustAl(double x,double y){
	int i;
	for(i=1;i<y;i++){
		x=x*x;
	}
	return x;
}

double topla(double x,double y){
	return x+y;
	
}

double carp(double x,double y){
	return x*y;
}
