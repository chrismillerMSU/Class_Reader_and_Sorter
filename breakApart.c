#include <string.h>
#include <stdio.h>
#include "class.h"

void breakApart(classes_t* class,char* line){
    char* result;
    int i;
    char space[2] = " ";

    result = strtok(line, " ");
    strcpy(class->classNumber,result);

    result = strtok(NULL, ":");
    strcpy(class->className,result);
    for(i=strlen(class->className);i<50;i++){
	strcat(class->className, space);
    }  
    

    result = strtok(NULL, " ");
    strcpy(class->classDay,result);
    if(strcmp(class->classDay,"TR") == 0){
	strcat(class->classDay, space);
    }

    result = strtok(NULL, " ");
    strcpy(class->classTime,result);

    result = strtok(NULL, " ");
    class->classLevel = result[strlen(result)-2]-48;
}

