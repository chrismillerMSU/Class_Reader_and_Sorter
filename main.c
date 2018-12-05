/*
 * Christopher Miller
 * Connor Morrison (help with method get_menu)
 * 11/25/18
 *
 * */
#include <stdio.h>
#include <string.h>
#include "class.h"
int get_menu();
int main(){
    int size;
    //initalize the classes_t array
    classes_t myClasses[20];
    //get the size of classes
    size = readClasses(myClasses,1);
    //get the menu
    get_menu(myClasses,size);
    return(0);
}

//method to return the menu and initalize correct methods.
int get_menu(classes_t* class,int const size){
    int value;
    //print out the instructions
    printf("\n\n1.Print all classes by CSCI number in order of CSCI number.\n2.Print all classes available on MWF or available on TR in order of times.\n3.Print the class available at a specific time.\n4.Print classes available to freshman, sophomore, junior or senior in order of CSCI number.\n5.Quit.\n\n");
    printf("Enter an operation number: ");
    scanf("%d",&value);
    //switch between values
    switch(value){
	case 1:
                //if one then order by number
		reOrder(BYNUMBER,class,size);
		get_menu(class,size);
		break;
	case 2:
		//if two then order by availability on MWF or avail on TR.
		reOrder(BYTIME,class,size);
		get_menu(class,size);
		break;
	case 3:
		//Class available at specific time.
		printf("Enter specific time (EX: MWF 0900) : ");
		//get day and time
		char day[4], time[5];
		scanf("%s%s",day,time);
		//check if day is TR
		if(day[0] == 'T' && day[1] == 'R'){
		    strcpy(day,"TR \0");
		}
		//request specific time
		specificTime(class,day,time,size);
		get_menu(class,size);
		break;
	case 4:
		//Level of classes
		printf("Enter the level you wish to search by (EX: Freshman) : ");
		char level[20];
		//grab level
		scanf("%s",level);
		byLevel(class,level,size);
		get_menu(class,size);
		break;
	case 5:
		//exit
		return(0);
		break;
	default:
		return(0);
	    	break;
    }
    //check value
    return(0);
}
