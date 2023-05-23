#include "find.h"
static int count_PW=0;

void find_PW()
{
    count_PW++; // increase count_PW by 1
    count_service++; // increase total counter by
    printf("\n Your are visiting the %s game.\n",title);
  
    printf("\n Total number of requests: %d,the number of requests for PW_search: %d.\n",
count_service, count_PW);
}
