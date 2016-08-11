//
//  main.c
//  Interactive Story
//
//  Created by Dan Esrey on 2016/09/08.
//  Copyright © 2016 Dan Esrey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void lockedDoor();
void roomNumberOne();
void roomNumberTwo();
void roomNumberThree();
void roomNumberFour();
void roomNumberFive();
void roomNumberSix();
void anotherLockedDoor();
void intro();
void game();
int error = -1;
int replay = -1;

int main(int argc, const char * argv[]) {
    
    printf("THE TREASURE OF THE IRON YARD! A CHOOSE-YOUR-OWN-ADVENTURE STORY\n\n");
    
    game();
    
    if (replay == 1) {
        game();
    } else {
        return 0;
    }
}

void roomNumberOne() {
    printf("\nYou walk into Room 1 and see that it looks like a typical hotel room with a bed, a dresser, a closet, and a bathroom.\n\n");
    printf("You also notice doors on either side of the room leading to adjoinging rooms. The door on the left leads to Room 6. The door on the right leads to Room 2.\n\nAfter searching this room thoroughly, you realize there is nothing here, and you decide to search one of the adjoining rooms.\n\nWhich room would you like to try next, 2 or 6?\n\n");
    int roomOne = -1;
    while (roomOne < 2 || (roomOne > 2 && roomOne < 6) || roomOne >= 7) {
        fpurge(stdin);
        error = scanf("%d", &roomOne);
        if (error != 1 || roomOne < 2 || (roomOne > 2 && roomOne < 6) || roomOne >= 7 ) {
            printf("\nPlease enter 2 or 6: \n\n");
            roomOne = -1;
        }
        if (roomOne == 2) {
            roomNumberTwo();
        }
        if (roomOne == 6) {
            lockedDoor();
        }
    }
}
void roomNumberTwo() {
    printf("\nYou walk into Room 2 and see two wooden chests marked 1 and 2.\n\n");
    printf("You believe one of the chests may contain the treasure you seek, and you decide to open the chests.\n\nWhich chest would you like to open first, 1 or 2?\n\n");
    int chests = -1;
    while (chests <1 || chests > 2){
        fpurge(stdin);
        error = scanf("%d", &chests);
        if (error != 1 || chests <1 || chests > 2) {
            printf("\nPlease enter 1 or 2: \n\n");
            chests = -1;
        }
        if (chests == 1) {
            printf("\nAs you open the lid to chest 1, you hear something inside break and you notice a green gas pouring out of the chest. Oh, no! The chest was booby-trapped! Before you can do anything else, your chest tightens and you are no longer able to breathe. As life leaves your body, you regret ever having sought the Treasure of the Iron Yard.\n\n");
        }
        if (chests ==2) {
            printf("\nAs you open the lid to chest 2, you start to see a golden light emanating from just inside. As you open the lid wider, you realize the chest is full of gold and jewels! You're rich! You've found the Treasure of The Iron Yard!\n\n");
        }
    }
}
void roomNumberThree() {
    printf("\nYou walk into Room 3 and see that it looks like a typical hotel room with a bed, a dresser, a closet, and a bathroom.\n\n");
    printf("You also notice doors on either side of the room leading to adjoinging rooms. The door on the left leads to Room 2. The door on the right leads to Room 4.\n\nAfter searching this room thoroughly, you realize there is nothing here, and you decide to search one of the adjoining rooms.\n\nWhich room would you like to try next, 2 or 4?\n\n");
    int roomThree = -1;
    while (roomThree < 2 || roomThree == 3 || roomThree >= 5) {
        fpurge(stdin);
        error = scanf("%d", &roomThree);
        if (error != 1 || roomThree < 2 || roomThree == 3 || roomThree >= 5) {
            printf("\nPlease enter 2 or 6: \n\n");
            roomThree = -1;
        }
        if (roomThree == 2) {
            roomNumberTwo();
        }
        if (roomThree == 4) {
            lockedDoor();
        }
    }
}
void roomNumberFour() {
    printf("\nAs soon as you enter Room 4, you wish you hadn't. This room STINKS! You're barely able to keep from retching as you back quickly out of the door you came in through, and you close the door tightly.\n\n");
    printf("Back in the hotel lobby, you decide to search another room.\n\nWhich room will you search next? (Type 1, 2, 3, 5, or 6): \n\n");{
        int roomFour = -1;
        while (roomFour < 1 || roomFour == 4 || roomFour >=7) {
            fpurge(stdin);
            error = scanf("%d", &roomFour);
            if (error != 1 || roomFour < 1 || roomFour == 4 || roomFour >= 7 ) {
                printf("Please enter 1, 2, 3, 5, or 6: \n\n");
                roomFour = -1;
            }
            if (roomFour == 1) {
                roomNumberOne();
            }
            if (roomFour == 2) {
                roomNumberTwo();
            }
            if (roomFour == 3) {
                roomNumberThree();
            }
            if (roomFour == 5) {
                roomNumberFive();
            }
            if (roomFour == 6) {
                roomNumberSix();
            }
        }
    }
}
void roomNumberFive() {
    printf("\nYou enter Room 5 and take a seat at the edge of the bed. Suddenly, you aren't feeling so well as you experience chest pain and shortness of breath. You are having a massive coronary. Bummer! Sadly, you'll never leave this room alive. At least the bed is comfy.\n\n");
}
void roomNumberSix() {
    printf("\nYou walk into Room 6 and see that it looks like a typical hotel room with a bed, a dresser, a closet, and a bathroom.\n\n");
    printf("You also notice doors on either side of the room leading to adjoinging rooms. The door on the left leads to Room 5. The door on the right leads to Room 1.\n\nAfter searching this room thoroughly, you realize there is nothing here, and you decide to search one of the adjoining rooms.\n\nWhich room would you like to try next, 5 or 1?\n\n");
    int roomSix = -1;
    while (roomSix < 1 || (roomSix > 1 && roomSix < 5) || roomSix >= 6) {
        fpurge(stdin);
        error = scanf("%d", &roomSix);
        if (error != 1 || roomSix < 1 || (roomSix > 1 && roomSix < 5) || roomSix >= 6) {
            printf("\nPlease enter 5 or 1: \n\n");
            roomSix = -1;
        }
        if (roomSix == 5) {
            roomNumberFive();
        }
        if (roomSix == 1) {
            anotherLockedDoor();
        }
    }
}
void lockedDoor() {
    printf("\nThe door is locked. You decide to try the door to Room 2.\n");
    roomNumberTwo();
}
void anotherLockedDoor() {
    printf("\nThe door is locked. You decide to try the door to Room 5.\n");
    roomNumberFive();
}
void game() {
    printf("\nYou are in a hotel with a lobby on the main floor where you are standing and six rooms numbered 1 through 6 on the second floor.\n\nInside one of the rooms, you may be able to find the fabled Treasure of the Iron Yard! But you must search for it. You climb the stairs to the second floor landing which wraps around the second floor and overlooks the first floor lobby.\n\nWhich room would you like to search first? (Type a number from 1 to 6): \n\n");
    int choice = -1;
    while (choice < 1 || choice >= 7) {
        fpurge(stdin);
        error = scanf("%d", &choice);
        if (error != 1 || choice < 1 || choice >= 7 ) {
            printf("Please enter 1, 2, 3, 4, 5, or 6: \n\n");
            choice = -1;
        }
    }
    switch (choice) {
        case 1: { // Room # 1
            roomNumberOne();
            break;
        }
        case 2: {
            roomNumberTwo();
            break;
        }
        case 3: { // Room # 3
            roomNumberThree();
            break;
        }
        case 4: { // Room # 4
            roomNumberFour();
            break;
        }
        case 5: { // Room # 5
            roomNumberFive();
            break;
        }
        case 6: { // Room # 6
            roomNumberSix();
            break;
        }
    }
    printf("Would you like to try THE TREASURE OF THE IRON YARD! again? (1=Y/2=N)\n\n");
    fpurge(stdin);
    while (replay < 1 || replay >= 3) {
        fpurge(stdin);
        error = scanf("%d", &replay);
        if (error != 1 || replay < 1 || replay >= 3 ) {
            printf("Please enter 1 or 2: \n\n");
            replay = -1;
        }
        if (replay == 1) {
            game();
        }
        
    }
}
