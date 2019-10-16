#include "headers.h"

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
