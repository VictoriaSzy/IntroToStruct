#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

struct cow {
  char name[11] ;
  int numberOfFriends ;
} ;

char names[20][10] = { "Johnny", "Loula", "Jackie", "Kathy", "Luis", "Luke", "Francine",
                      "Timothy", "Avocado", "Will", "Daisy", "Wilson", "Eddie", "Abigail",
                      "Macy", "Katie", "Willow", "Sandy", "CoolPerson", "Evangelina" } ;

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

// display method prints out info about the cow given
void display(struct cow c) {
  printf("Here is a cow and its info:\nName: %s\nNumber of friends: %d\n", c.name, c.numberOfFriends) ;
}

// modifying functions
void changeName(struct cow * c, char* newName) {
  strcpy(c -> name, newName) ;
}
void changeNumberOfFriends(struct cow * c, int newQuantity) {
  c -> numberOfFriends = newQuantity ;
}

int main() {
  struct cow a = getRandomCow() ;
  printf("\n") ;
  display(a) ;
  printf("\nLet's change the cow's name to Yoda!\n") ;
  struct cow * p = &a ;
  changeName(p, "Yoda") ;
  printf("------------------------------------------------\nHere is updated information about the cow!\n------------------------------------------------\n") ;
  display(a) ;
  printf("\nLet's change how many friends your cow has! How about 1000000000 friends?\n") ;
  changeNumberOfFriends(p, 1000000000) ;
  printf("------------------------------------------------\nHere is updated information about the cow!\n------------------------------------------------\n") ;
  display(a) ;
  printf("Wow, this cow is very social! Look at how many friends they have!") ;
  printf("********************************************************\n") ;
  printf("Here is a cow. What do you think its name is?\n") ;
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
