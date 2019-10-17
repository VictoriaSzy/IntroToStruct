#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct cow { char name[11] ; int numberOfFriends ;} ;
struct cow getRandomCow() ;
void display(struct cow c) ;
void changeName(struct cow * c, char* newName) ;
void changeNumberOfFriends(struct cow * c, int newQuantity) ;
