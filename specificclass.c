#include <stdio.h>
#include <string.h>
#include "class.h"

void byLevel(classes_t* classes,char level[],int const size){
    //initialize the classes_t
    classes_t lClasses[5];
    int i,j=0;
    int intLevel;
    if(strcmp(FR,level) == 0){
	//if the level is freshman
	intLevel = 1;
    }else if(strcmp(SM,level) == 0){
	//if the level is sophomore
	intLevel = 2;
    }else if(strcmp(JR,level) == 0){
	//if the level is junior
	intLevel = 3; 
    }else if(strcmp(SR,level) == 0){
	//if the level is senior
	intLevel = 4;
    }else{
	//if error
	printf("\nNo classes found");
    }
    //grab all the classes of that level
    for(i=0;i<size;i++){
	if(classes[i].classLevel == intLevel){
	    lClasses[j] = classes[i];
	    j++;
	}	
    }
    //order classes by number
    reOrder(BYNUMBER,lClasses,j);

}
