#include <stdio.h>

int main ()
{
    int number;
    int day, month;
    char route;
    int command;
    int a;
    int year;
    printf("\n Enter the number : ");
    scanf("%d", &number);
    switch (number)
    {
        case 1 :
            printf("\n Enter the day : ");
            scanf("%d", &day);
            printf("\n Enter the month : ");
            scanf("%d", &month);
            if (day > 31 || day < 1 || month < 1 || month > 12)
            {
                printf("\n Error!");
            }
            switch (day)
            {
            case (10):
                printf("desyatoe ");
                break;
            case (11):
                printf("oddinadsatoe ");
                break;
            case (12):
                printf("dvenadsatoe ");
                break;
            case (13):
                printf("trinadsatoe ");
                break;
            case (14):
                printf("chetirnadsatoe ");
                break;
            case (15):
                printf("pyatnadsatoe ");
                break;
            case (16):
                printf("shestnadsatoe ");
                break;
            case (17):
                printf("semnadsatoe ");
                break;
            case (18):
                printf("vosemnadsatoe ");
                break;
            case (19):
                printf("devyatnasatoe ");
                break;
            case (20):
                printf("dvadsatoe ");
                break;
            case (30):
                printf("tridsatoe ");
                break;
            default:
                switch (day / 10)
                {
                case (2):

                    printf("dvadsat' ");
                    break;
                case (3):
                    printf("tridsat' ");
                    break;

                }
                switch (day % 10)
                {
                case (1):
                    printf("pervoe ");
                    break;
                case (2):
                    printf("vtoroe ");
                    break;
                case (3):
                    printf("tret'e ");
                    break;
                case (4):
                    printf("chetvertoe ");
                    break;
                case (5):
                    printf("pyatoe ");
                    break;
                case (6):
                    printf("shestoe ");
                    break;
                case (7):
                    printf("sed'moe ");
                    break;
                case (8):
                    printf("vos'moe ");
                    break;
                case (9):
                    printf("devyatoe ");
                    break;
                }
                break;
            }

            switch (month)
            {
            case (1):
                printf("yanvarya \n");
                break;
            case (2):
                printf("fevralya \n");
                break;
            case (3):
                printf("marta \n");
                break;
            case (4):
                printf("aprelya \n");
                break;
            case (5):
                printf("maya \n");
                break;
            case (6):
                printf("iunya \n");
                break;
            case (7):
                printf("iulya \n");
                break;
            case (8):
                printf("avgusta \n");
                break;
            case (9):
                printf("sentyabrya \n");
                break;
            case (10):
                printf("oktyabrya \n");
                break;
            case (11):
                printf("noyabrya \n");
                break;
            case (12):
                printf("decabrya \n");
                break;
            }
            break;
        case 2 :
            printf("\n Enter N(= north) or W(= west) or S(= south) or E(= east): ");
            scanf("%s", &route);
            printf("\n Enter 0(= keep moving) or 1(= turn left) or -1(= turn right): ");
            scanf("%d", &command);
            if (((route == 'N') && (command == 0)) || ((route == 'E') && (command == 1)) || ((route == 'W') && (command == -1)))
                printf("\n North");
            if (((route == 'N') && (command == 1)) || ((route == 'S') && (command == -1)) || ((route == 'W') && (command == 0)))
                printf("\n West");
            if (((route == 'N') && (command == -1)) || ((route == 'E') && (command == 0)) || ((route == 'S') && (command == 1)))
                printf("\n East");
            if (((route == 'E') && (command == -1)) || ((route == 'S') && (command == 0)) || ((route == 'W') && (command == 1)))
                printf("\n South");
        break;
        case 3 : 
        printf("\n Enter a (10 <= a <= 40) : ");
        scanf("%d", &a);
            if ((a > 9) && (a < 41))
            {
                switch (a)
                {
                case (10):
                    printf("\n Desyat' uchebnih zadaniy");
                    break;
                case (11):
                    printf("\n Oddinatsat' uchebnih zadaniy");
                    break;
                case (12):
                    printf("\n Dvenadsat' uchebnih zadaniy");
                    break;
                case (13):
                    printf("\n Trinadsat' uchebnih zadaniy");
                    break;
                case (14):
                    printf("chetirnadsat' uchebnih zadaniy");
                    break;
                case (15):
                    printf("\n Pyatnadsat' uchebnih zadaniy");
                    break;
                case (16):
                    printf("\n Shestnadsat' uchebnih zadaniy");
                    break;
                case (17):
                    printf("\n Semdandsat' uchebnih zadaniy");
                    break;
                case (18):
                    printf("\n Vosemnadsat' uchebnih zadaniy");
                    break;
                case (19):
                    printf("\n Devyatnadsat' uchebnih zadaniy");
                    break;
                case (20):
                    printf("\n Dvadsat' uchebnih zadaniy");
                    break;
                default:
                    switch (a / 10)
                    {
                    case (2):
                        printf("\n Dvadsat' ");
                        break;
                    case (3):
                        printf("\n Tridsat' ");
                        break;
                    case (4):
                        printf("\n Sorok ");
                        break;

                    }
                    switch (a % 10)
                    {
                    case (1):
                        printf("odno uchebnoe zadanie");
                        break;
                    case (2):
                        printf("dva uchebnih zadaniy");
                        break;
                    case (3):
                        printf("tri uchebnih zadaniya");
                        break;
                    case (4):
                        printf("chetire uchebnih zadaniya");
                        break;
                    case (5):
                        printf("pyat' uchebnih zadaniy");
                        break;
                    case (6):
                        printf("shest' uchebnih zadaniy");
                        break;
                    case (7):
                        printf("sem' uchebnih zadaniy");
                        break;
                    case (8):
                        printf("vosem' uchebnih zadaniy");
                        break;
                    case (9):
                        printf("devyat' uchebnih zadaniy");
                        break;
                    }
                    break;
                }
            case 4:
            printf("\n Enter a : "); 
            scanf("%d", &a);
            if ((a > 99) && (a < 1001))
            {
                switch (a / 100)
                {
                case (1):
                    printf("\n Sto ");
                    break;
                case (2):
                    printf("\n Dvesti ");
                    break;
                case (3):
                    printf("\n Trista ");
                    break;
                case (4):
                    printf("\n Chetiresta ");
                    break;
                case (5):
                    printf("\n Pyat'sot ");
                    break;
                case (6):
                    printf("\n Shest'sot ");
                    break;
                case (7):
                    printf("\n Sem'sot ");
                    break;
                case (8):
                    printf("\n Vosem'sot ");
                    break;
                case (9):
                    printf("\n Devyat'sot ");
                    break;
                }
                if (((a / 10) % 10) == 1)
                {
                    switch (a % 100)
                    {
                    case (10):
                        printf("desyat' ");
                        break;
                    case (11):
                        printf("oddinadsat' ");
                        break;
                    case (12):
                        printf("dvenadsat' ");
                        break;
                    case (13):
                        printf("trinadsat' ");
                        break;
                    case (14):
                        printf("chetirnadsat' ");
                        break;
                    case (15):
                        printf("pytnadsat' ");
                        break;
                    case (16):
                        printf("shestnadsat' ");
                        break;
                    case (17):
                        printf("semnadsat' ");
                        break;
                    case (18):
                        printf("vosemnadsat' ");
                        break;
                    case (19):
                        printf("devyatnadsat' ");
                        break;
                    }
                    printf("\n");
                    return 0;
                }
                switch ((a / 10) % 10)
                {
                case (2):
                    printf("dvadsat' ");
                    break;
                case (3):
                    printf("tridsat' ");
                    break;
                case (4):
                    printf("sorok ");
                    break;
                case (5):
                    printf("pyat'desyat ");
                    break;
                case (6):
                    printf("shest'desyat ");
                    break;
                case (7):
                    printf("sem'desyat ");
                    break;
                case (8):
                    printf("vosem'desyat ");
                    break;
                case (9):
                    printf("devyanosto ");
                    break;
                }
                switch (a % 10)
                {
                case (1):
                    printf("odin");
                    break;
                case (2):
                    printf("dva");
                    break;
                case (3):
                    printf("tri");
                    break;
                case (4):
                    printf("chetire");
                    break;
                case (5):
                    printf("pyat'");
                    break;
                case (6):
                    printf("shest'");
                    break;
                case (7):
                    printf("sem'");
                    break;
                case (8):
                    printf("vosem'");
                    break;
                case (9):
                    printf("devyat'");
                    break;
                }
                printf("\n");
            }
            else
            {
                printf("Error! \n");
            }
            break;
            }
            else
            {
                printf("Error! \n");
            }
            break;
        case 5:
            printf("\n Year : "); scanf("%d", &year);
            printf("\n God ");
            switch ((year) % 10) {
            case 0:
            case 1:
                printf("bel");
                break;
            case 2:
            case 3:
                printf("chern");
                break;
            case 4:
            case 5:
                printf("zelen");
                break;
            case 6:
            case 7:
                printf("krasn");
                break;
            case 8:
            case 9:
                printf("zhelt");
                break;
            }
            switch ((year + 8) % 12) {
            case 0:
                printf("oy krisi\n");
                break;
            case 1:
                printf("oy korovi\n");
                break;
            case 2:
                printf("ogo tigra\n");
                break;
            case 3:
                printf("ogo zaitsa\n");
                break;
            case 4:
                printf("ogo drakona\n");
                break;
            case 5:
                printf("oy zmei\n");
                break;
            case 6:
                printf("oy loshadi\n");
                break;
            case 7:
                printf("oy ovtsi\n");
                break;
            case 8:
                printf("oy obez'yani\n");
                break;
            case 9:
                printf("oy kyritsi\n");
                break;
            case 10:
                printf("oy sobaki\n");
                break;
            case 11:
                printf("oy svin'i\n");
                break;
            }
            break;
    }
    return (0);
}