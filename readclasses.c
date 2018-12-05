/*
 * Christopher Miller
 * Program2
 * 11/28/18
 * */

#include <stdio.h>
#include <string.h>
#include "class.h"
int readClasses(classes_t* myClasses, int selection){
    //initalize the files to read from.
    char line[81];
    FILE *fp;
    fp = fopen("classes.txt","r");
    int i=0;
    //while reads new line break that into varialbes in classes_t
    while(fgets(line,80,fp) != NULL){
        breakApart(&myClasses[i],line);
	i++;
    }
    //close the file reader
    fclose(fp);
    return(i);
}
