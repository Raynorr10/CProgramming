#ifndef _LINK_TYPES_
#define _LINK_TYPES_
#include "linked-list.h"

typedef struct student {
 char lastname[30];
 char firstname[20];
 int group;
} Student_t;

typedef struct link{
     Student_t  student;
     struct link * next;
} Link_t;

#endif
