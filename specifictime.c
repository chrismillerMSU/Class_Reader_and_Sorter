#include <stdio.h>
#include <string.h>
#include "class.h"

void specificTime(classes_t* classes,char day[],char time[],int size){
    //initalize vartiables
    int i;
    char* token;
    char temp[8];
    //loop through size
    for(i=0;i<size;i++){
	strcpy(temp,classes[i].classTime);
	//grab time of class
	token = strtok(temp,"-");
	//check if time matches any classes
	if(strcmp(classes[i].classDay,day) == 0 && strcmp(token,time) == 0){
	    //print all classes that match
	    printOne(classes[i]);
	    break;
	}
    }
    //if no classes found.
    if(strcmp(classes[i].classDay,day) != 0 || strcmp(token,time) != 0){
	printf("\nNo classes found");
    }
}
