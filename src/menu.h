#ifndef MENU_H
#define MENU_H

#include <nds/ndstypes.h>

void titleMenu();
void installMenu();
void testMenu();

#define NUM_OF_ITEMS 100

typedef struct {
	char label[32+1];
} MenuItem;

typedef struct {
	int cursor;
	int scrolly;
	int numberOfItems;
	MenuItem items[NUM_OF_ITEMS];
} Menu;

void clearMenu(Menu* m);
void printMenu(Menu* m);

int getMenuCursor(Menu* m);
int getNumberOfMenuItems(Menu* m);
bool moveCursor(Menu* m);

void addMenuItem(Menu* m, char* label);

enum {
	YES = true,
	NO = false
};

void keyWait(u32 key);
bool choiceBox(char* message);
bool choicePrint(char* message);
void messageBox(char* message);

#endif