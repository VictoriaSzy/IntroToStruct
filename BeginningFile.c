#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "headers.h"

struct cow {
  char *name ;
  int numberOfFriends ;
} ;

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

// display method prints out info about the cow given
void display(struct cow c) {
  printf("Here is a cow and its info:\nName: %s\nNumber of friends: %d\n", c.name, c.numberOfFriends) ;

}

// modifying functions
void changeName(struct cow c, char newName) {
  c.name = &newName ;
}
void changeNumberOfFriends(struct cow c, int newQuantity) {
  c.numberOfFriends = newQuantity ;
}

int main() {
  int x ;
  for (x = 0 ; x < 8 ; x++) {
    struct cow a = getRandomCow() ;
    display(a) ;
  }
  printf("********************************************************\n") ;
  printf("Here is a cow. What do you think it's name is?\n") ;
  printf("                                       /;    ;\\ \n") ;
  printf("                                   __  \\\\____//\n") ;
  printf("                                  /{_\\_/   `'\\____\n") ;
  printf("                                  \\___   (o)  (o  }\n") ;
  printf("       _____________________________/          :--\'  \n") ;
  printf("   ,-,\'\`@@@@@@@@       @@@@@@         \\_    \`__\\ \n") ;
  printf("  ;:(  @@@@@@@@@        @@@             \\___(o\'o)\n") ;
  printf("  :: )  @@@@          @@@@@@        ,\'@@(  \`====\'       \n") ;
  printf("  :: : @@@@@:          @@@@         \`@@@:\n") ;
  printf("  :: \\  @@@@@:       @@@@@@@)    (  \'@@@\'\n") ;
  printf("  ;; /\\      /\`,    @@@@@@@@@\\   :@@@@@)\n") ;
  printf("  ::/  )    {_----------------:  :~\`,~~;\n") ;
  printf(" ;;\'\`; :   )                  :  / \`; ;\n") ;
  printf(";;;; : :   ;                  :  ;  ; :              \n") ;
  printf("\`\'\`\' / :  :                   :  :  : :\n") ;
  printf("    )_ \\__;      \";\"          :_ ;  \\_\\       \`,\',\'\n") ;
  printf("    :__\\  \\    * \`,\'*         \\  \\  :  \\   *  8\`;\'*  *\n") ;
  printf("        \`^\'     \\ :/           \`^\'  \`-^-\'   \\v/ :  \\/ \n") ;
  printf("Created by Bill Ames") ;
  return 0 ;
}
