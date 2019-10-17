#include "headers.h"

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
  printf("\nWow, this cow is very social! Look at how many friends they have!\n") ;
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
  printf("Created by Bill Ames\n") ;
  return 0 ;
}
