/*Christopher Miller
 *11/25/2018
 */


#include <string.h>
#include <stdio.h>
#include "class.h"
//This method breaks apart a line from classes.txt
void breakApart(classes_t* class,char* line){
    char* result;
    int i;
    char space[2] = " ";

    result = strtok(line, " ");//get first token based on " "
    strcpy(class->classNumber,result);

    result = strtok(NULL, ":"); //get next token based on ":"
    strcpy(class->className,result);
    for(i=strlen(class->className);i<50;i++){//add spaces to className till it is 50 schars long for good spacing when printing
	strcat(class->className, space);
    }  
    

    result = strtok(NULL, " ");//next token based on " "
    strcpy(class->classDay,result);
    if(strcmp(class->classDay,"TR") == 0){//if the class is day code is TR add a space for nice spacing when printing
	strcat(class->classDay, space);
    }

    result = strtok(NULL, " ");//next token based on " "
    strcpy(class->classTime,result);

    result = strtok(NULL, " ");//next token based on " "
    class->classLevel = result[strlen(result)-2]-48;
}

