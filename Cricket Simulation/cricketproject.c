#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void stadium(int n)
{
    switch (n)
    {
    case 1:
        printf("WANKHADE STADIUM,MUMBAI,INDIA \n");
        break;
    case 2:
        printf("DHARAMSHALA STADIUM,HIMACHAL PRADESH,INDIA \n");
        break;
    case 3:
        printf("BRISBANE STADIUM(GABBA),BRISBANE,AUSTRALIA\n");
        break;
    case 4:
        printf("OPTUS STADIUM,PERTH,AUSTRALIA\n");
        break;
    case 5:
        printf("MELBOURNE CRICKET GROUND(MCG),MELBOURNE,AUSTRALIA\n");
        break;
    case 6:
        printf("LORD'S CRICKET GROUND,LONDON,ENGLAND\n");
        break;
    case 7:
        printf("OLD TRAFFORD,MANCHESTER,ENGLAND\n");
        break;
    case 8:
        printf("EDEN PARK,AUCKLAND,NEW ZELAND\n");
        break;
    case 9:
        printf("WANDERERS STADIUM,JOHANNESBURG,SOUTH AFRICA\n");
        break;
    case 10:
        printf("NEWLANDS CRICKET GROUND,CAPE TOWN,SOUTH AFRICA\n");
        break;
    case 11:
        break;
    }
}

struct cricket
{
    int balls;
    int wicket;
    int runs;
    float runrate;
};
void runs(struct cricket *sc, int run)
{
    sc->runs += run;
    sc->balls++;
}
void wicket(struct cricket *sc)
{
    sc->wicket++;
    sc->balls++;
}
void scorecard(struct cricket sc, char ch[])
{
    int overs = sc.balls / 6;
    int left = sc.balls % 6;
    sc.runrate = sc.runs / (overs + 0.1 * left);
    printf(" Team Name : %s Score : %d/%d Overs : %d.%d Runrate : %.2f\n", ch, sc.runs, sc.wicket, overs, left, sc.runrate);
}
void extras(struct cricket *sc)
{
    sc->runs += 1;
}
void team(char team1[], char team2[])
{
    scanf("%s", team1);
    scanf("%s", team2);
}

void finalscorecard(struct cricket sc, struct cricket sc1, char team1[], char team2[])
{

    int overs = sc.balls / 6;
    int left = sc.balls % 6;
    sc.runrate = sc.runs / (overs + 0.1 * left);
    int over1 = sc1.balls / 6;
    int left1 = sc1.balls % 6;
    sc1.runrate = sc1.runs / (over1 + 0.1 * left1);
    printf("Team          Score         Overs           Runrate\n");
    printf("%s            %d-%d          %d.%d           %.2f\n", team1, sc.runs, sc.wicket, overs, left, sc.runrate);
    printf("%s          %d-%d           %d.%d         %.2f\n", team2, sc1.runs, sc1.wicket, over1, left1, sc1.runrate);
}
int main()
{
    int n;
    printf("Select Stadium From Below List\n");
    printf("1.WANKHADE STADIUM,MUMBAI,INDIA \n");
    printf("2.DHARAMSHALA STADIUM,HIMACHAL PRADESH,INDIA \n");
    printf("3.BRISBANE STADIUM(GABBA),BRISBANE,AUSTRALIA\n");
    printf("4.OPTUS STADIUM,PERTH,AUSTRALIA\n");
    printf("5.MELBOURNE CRICKET GROUND(MCG),MELBOURNE,AUSTRALIA\n");
    printf("6.LORD'S CRICKET GROUND,LONDON,ENGLAND\n");
    printf("7.OLD TRAFFORD,MANCHESTER,ENGLAND\n");
    printf("8.EDEN PARK,AUCKLAND,NEW ZELAND\n");
    printf("9.WANDERERS STADIUM,JOHANNESBURG,SOUTH AFRICA\n");
    printf("10.NEWLANDS CRICKET GROUND,CAPE TOWN,SOUTH AFRICA\n");
label1:
    scanf("%d", &n);
    stadium(n);
    if (n < 1 || n > 10)
    {
        printf("Enter valid number:\n");
        goto label1;
    }

    printf("Enter Team Name\n");
    char team1[100];
    char team2[100];
    team(team1, team2);
    int overs;
    printf("NO. OF OVERS OF IN THE MATCH : ");
    scanf("%d", &overs);
    srand(time(0));
    int k;
    printf("\n");

    printf("------------------TOSS-----------------\n");
    int m = rand() % 3;
    if (m == 0)
    {
        m = rand() % 3;
    }
    if (m == 1)
    {

        printf("%s Wins Toss\n", team1);
    label3:

        printf("Choose 1 for Bat\n");
        printf("Choose 2 for Ball\n");
        scanf("%d", &k);
        if (k < 1 || k > 2)
        {
            printf("Enter valid number:\n");
            goto label3;
        }
    }
    if (m == 2)
    {

        printf("%s Wins Toss\n", team2);
    label2:

        printf("Choose 1 for Bat\n");
        printf("Choose 2 for Ball\n");
        scanf("%d", &k);
        if (k < 1 || k > 2)
        {
            printf("Enter valid number:\n");
            goto label2;
        }
    }

    if (k == 1 || k == 2)
    {
        struct cricket sc = {0, 0, 0};
        if ((m == 1 && k == 1) || (m == 2 && k == 2))
        {
            printf("1st Inning\n");
            struct cricket sc = {0, 0, 0};
            int totalballs = overs * 6;
            for (int i = 1; i <= totalballs; i++)
            {
                int outputs = rand() % 8;

                if (outputs == 5)
                {
                    extras(&sc);
                    printf("Balls %d: Extras!\n", i);
                    i--;
                    continue;
                }
                if (outputs == 7)
                {
                    wicket(&sc);
                    if (sc.wicket == 10)
                    {
                        break;
                    }
                    printf("Ball %d: Wicket!\n", i);
                }
                else
                {
                    runs(&sc, outputs);
                    printf("Ball %d: %d run(s)\n", i, outputs);
                }

                scorecard(sc, team1);
            }
            printf("\n");
            printf("--------------------Final Score------------------- \n");
            scorecard(sc, team1);
            struct cricket sc1 = {0, 0, 0};
            int target = sc.runs + 1;
            printf("\n");
            printf("\n");
            printf("Target = %d\n", target);
            printf("\n");
            printf("2nd Inning\n");
            for (int i = 1; i <= totalballs; i++)
            {
                int outputs = rand() % 8;
                // To add extras
                if (outputs == 5)
                {
                    extras(&sc1);
                    printf("Balls %d: Extras!\n", i);
                    i--;
                    continue;
                }
                if (outputs == 7)
                {
                    wicket(&sc1);
                    if (sc1.wicket == 10)
                    {
                        break;
                    }
                    printf("Ball %d: Wicket!\n", i);
                }
                else
                {
                    runs(&sc1, outputs);
                    printf("Ball %d: %d run(s)\n", i, outputs);
                }
                scorecard(sc1, team2);
                if (sc1.runs >= target)
                {
                    break;
                }
            }
            printf("\n");
            printf("--------------------Final Score------------------- \n");
            scorecard(sc1, team2);

            printf("\n");
            printf("\n");
            printf("FINAL SCORECARD");
            printf("\n");
            printf("==================================================\n");
            finalscorecard(sc, sc1, team1, team2);
            printf("==================================================\n");
            printf("\n");
            if (sc1.runs > target)
            {
                printf("%s wins the match\n", team2);
            }
            else
            {
                printf("%s wins the match", team1);
            }
        }
        else
        {
            printf("1st Inning\n");
            struct cricket sc = {0, 0, 0};
            int totalballs = overs * 6;
            for (int i = 1; i <= totalballs; i++)
            {
                int outputs = rand() % 8;
                if (outputs == 5)
                {
                    extras(&sc);
                    printf("Balls %d: Extras!\n", i);
                    i--;
                    continue;
                }
                if (outputs == 7)
                {
                    wicket(&sc);
                    if (sc.wicket == 10)
                    {
                        break;
                    }
                    printf("Ball %d: Wicket!\n", i);
                }
                else
                {
                    runs(&sc, outputs);
                    printf("Ball %d: %d run(s)\n", i, outputs);
                }

                scorecard(sc, team2);
            }
            printf("\n");
            printf("--------------------Final Score------------------- \n");
            scorecard(sc, team2);
            struct cricket sc1 = {0, 0, 0};
            int target = sc.runs + 1;
            printf("\n");
            printf("\n");
            printf("Target = %d\n", target);
            printf("\n");
            printf("2nd Inning\n");
            for (int i = 1; i <= totalballs; i++)
            {
                int outputs = rand() % 8;
                if (outputs == 5)
                {
                    extras(&sc1);
                    printf("Balls %d: Extras!\n", i);
                    i--;
                    continue;
                }
                if (outputs == 7)
                {
                    wicket(&sc1);
                    if (sc1.wicket == 10)
                    {
                        break;
                    }
                    printf("Ball %d: Wicket!\n", i);
                }
                else
                {
                    runs(&sc1, outputs);
                    printf("Ball %d: %d run(s)\n", i, outputs);
                }

                scorecard(sc1, team1);
                if (sc1.runs >= target)
                {
                    break;
                }
            }
            printf("\n");
            printf("--------------------Final Score------------------- \n");
            scorecard(sc1, team1);

            printf("\n");
            printf("\n");
            printf("FINAL SCORECARD");
            printf("\n");
            printf("==================================================\n");
            finalscorecard(sc1, sc, team1, team2);
            printf("==================================================\n");
            printf("\n");
            if (target < sc1.runs)
            {
                printf("%s wins the Match\n", team1);
            }
            else
            {
                printf("%s wins the Match\n", team2);
            }
        }
    }

    return 0;
}
