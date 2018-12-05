/*Christoper Miller
 *Connor Morrison
 *11/25/18
 */

#define BYNUMBER 1
#define BYTIME 2
#define MWF 0
#define TR 1
#define FR "Freshman"
#define SM "Sophomore"
#define JR "Junior"
#define SR "Senior"

typedef struct classes{
    char classNumber[8];
    char className[81];
    char classDay[4];
    char classTime[10];
    int classLevel;
} classes_t;

FILE* fp;
void byLevel(classes_t* classes,char level[],int size);
void specificTime(classes_t* classes,char day[],char time[],int size);
void printOne(classes_t class);
void getLevel(classes_t* classes,int size);
int readClasses();
int get_menu(classes_t* class,int const size);
void reOrder(int by, classes_t* classes,int size);
void breakApart(classes_t* class,char* line);
