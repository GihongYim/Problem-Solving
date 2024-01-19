#include <stdio.h>
#include <stdbool.h>
int list(int a, bool b) //true는 해당 년도 개수
{
    switch(a)
    {
        case 1967: if(b) {return 1;} else {printf("1967 DavidBowie\n");} break;
        case 1969: if(b) {return 1;} else {printf("1969 SpaceOddity\n");} break;
        case 1970: if(b) {return 1;} else {printf("1970 TheManWhoSoldTheWorld\n");} break;
        case 1971: if(b) {return 1;} else {printf("1971 HunkyDory\n");} break;
        case 1972: if(b) {return 1;} else {printf("1972 TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars\n");} break;
        case 1973: if(b) {return 2;} else {printf("1973 AladdinSane\n1973 PinUps\n");} break;
        case 1974: if(b) {return 1;} else {printf("1974 DiamondDogs\n");} break;
        case 1975: if(b) {return 1;} else {printf("1975 YoungAmericans\n");} break;
        case 1976: if(b) {return 1;} else {printf("1976 StationToStation\n");} break;
        case 1977: if(b) {return 2;} else {printf("1977 Low\n1977 Heroes\n");} break;
        case 1979: if(b) {return 1;} else {printf("1979 Lodger\n");} break;
        case 1980: if(b) {return 1;} else {printf("1980 ScaryMonstersAndSuperCreeps\n");} break;
        case 1983: if(b) {return 1;} else {printf("1983 LetsDance\n");} break;
        case 1984: if(b) {return 1;} else {printf("1984 Tonight\n");} break;
        case 1987: if(b) {return 1;} else {printf("1987 NeverLetMeDown\n");} break;
        case 1993: if(b) {return 1;} else {printf("1993 BlackTieWhiteNoise\n");} break;
        case 1995: if(b) {return 1;} else {printf("1995 1.Outside\n");} break;
        case 1997: if(b) {return 1;} else {printf("1997 Earthling\n");} break;
        case 1999: if(b) {return 1;} else {printf("1999 Hours\n");} break;
        case 2002: if(b) {return 1;} else {printf("2002 Heathen\n");} break;
        case 2003: if(b) {return 1;} else {printf("2003 Reality\n");} break;
        case 2013: if(b) {return 1;} else {printf("2013 TheNextDay\n");} break;
        case 2016: if(b) {return 1;} else {printf("2016 BlackStar\n");} break;
        default: if(b) {return 0;} break;
    }
    return 0;
}


int main()
{
    int a; 
    scanf("%d", &a);
    int b, c, d;
    for(int i=0;i<a;i++)
    {
        scanf("%d %d", &b, &c);
        d=0; for(int j=b;j<=c;j++) {
            d+=list(j, true);
        }
        printf("%d\n", d);
        for(int j=b;j<=c;j++) {
            list(j, false);
        }
    }
    return 0;
}