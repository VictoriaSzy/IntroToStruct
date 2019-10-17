#include "headers.h"

char names[20][10] = { "Johnny", "Loula", "Jackie", "Kathy", "Luis", "Luke", "Francine", "Timothy", "Avocado", "Will", "Daisy", "Wilson", "Eddie", "Abigail", "Macy", "Katie", "Willow", "Sandy", "CoolPerson", "Evangelina" } ;

struct cow getRandomCow() {
  srand(time(NULL)) ;
  char s[11] ;
  strcpy(s, names[rand() % 20]) ;
  struct cow q ;
  strcpy(q.name, s) ;
  int n = rand() ;
  n = n % 200 ;
  q.numberOfFriends = n ;
  return q ;
}

void display(struct cow c) {
  printf("Here is a cow and its info:\nName: %s\nNumber of friends: %d\n", c.name, c.numberOfFriends) ;

}

void changeName(struct cow * c, char* newName) {
  strcpy(c -> name, newName) ;
}
void changeNumberOfFriends(struct cow * c, int newQuantity) {
  c -> numberOfFriends = newQuantity ;
}
