/* Created by: Christopher Miller, Connor Morrison
 * 11/25/18
 * This file prints to a output.txt file
 */


#include <stdio.h>
#include "class.h"
#include <string.h>
//getLevel prints out the number of classes_t objects specified by size
void getLevel(classes_t* classes,int size){
    int i,j;
    char level[20];  // Holds string for class level
    int intLevel;
    char space[2] = " \0";
    fp = fopen("output.txt","a");  //Opens file "output.txt" and sets it append.
    fprintf(fp,"\n\n");
    for(i=0;i<size;i++){ //loop for peint number of objects specified by size
	intLevel = classes[i].classLevel; //Sets intLevel equals to numberical class level
	switch(intLevel){ //This swtich stement converts numberical class level to string class level
            case 1:
                    strcpy(level, FR);
                    break;
            case 2:
                    strcpy(level, SM);
                    break;
            case 3:
                    strcpy(level, JR);
                    break;
            case 4:
                    strcpy(level, SR);
                    break;
            default:
		    strcpy(level, "Error\0");
                    break;
        }
	for(j=strlen(level);j<10;j++){
            strcat(level, space);
        }
	//This prints the entire classes_t object starting with name, number, level, Day, Time
	fprintf(fp,"%s  %s  %s  %s  %s\n",classes[i].className,classes[i].classNumber,level,classes[i].classDay,classes[i].classTime);
    }
    fprintf(fp,"\n\n");
    fclose(fp); //Closes file
}
//This method is the same as getLevel but only prints one classes_t object
void printOne(classes_t class){
    char level[20];
    int intLevel,j;
    char space[2] = " \0";
    fp = fopen("output.txt","a");
    fprintf(fp,"\n\n");
    intLevel = class.classLevel;
        switch(intLevel){
            case 1:
                    strcpy(level, FR);
                    break;
            case 2:
                    strcpy(level, SM);
                    break;
            case 3:
                    strcpy(level, JR);
                    break;
            case 4:
                    strcpy(level, SR);
                    break;
            default:
                    //strcpy(level, "Error\0");
                     break;
	}
	for(j=strlen(level);j<10;j++){
            strcat(level, space);
        }
    fprintf(fp,"%s  %s  %s  %s  %s\n",class.className,class.classNumber,level,class.classDay,class.classTime); 
    fprintf(fp,"\n\n");
    fclose(fp);
}
