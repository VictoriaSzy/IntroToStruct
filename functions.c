#include "headers.h"

char *makeName() {
    srand(time(NULL)) ;
    char *list[15] ;
    list[0] = "Johnny" ;
    list[1] = "Loula" ;
    list[2] = "Jackie" ;
    list[3] = "Kathy" ;
    list[4] = "Luis" ;
    list[5] = "Luke" ;
    list[6] = "Francine" ;
    list[7] = "Timothy" ;
    list[8] = "Avocado" ;
    list[9] = "Will" ;
    list[10] = "Daisy" ;
    list[11] = "Wilson" ;
    list[12] = "Eddie" ;
    list[13] = "Abigail" ;
    list[14] = "Macy" ;
    return list[rand() % 15] ;
}

struct cow getRandomCow() {
  struct cow q ;
  q.name = makeName() ;
  int n = abs(rand()) ;
  n = n % 200 ;
  q.numberOfFriends = n ;
  return q ;
}

void display(struct cow c) {
  printf("Here is a cow and its info:\nName: %s\nNumber of friends: %d\n", c.name, c.numberOfFriends) ;

}

void changeName(struct cow c, char newName) {
  c.name = &newName ;
}
void changeNumberOfFriends(struct cow c, int newQuantity) {
  c.numberOfFriends = newQuantity ;
}
