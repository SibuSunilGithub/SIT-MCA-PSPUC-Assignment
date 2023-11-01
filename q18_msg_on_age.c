/* WAP To out put message based on age.

0-20    Dance dance!
21-30   Study Study!
31-40   Run Run!
41-50   Exercise!
51-60   Good Diet!
61-70   Take Rest!
71-80   Bhajan Karo!
81-90   RIP!

*/

# include<stdio.h>
int main(){
    int age;
    printf("Please Enter Your Age:\n");
    scanf("%d",&age);

    switch (age)
    {
    case 0 ...20:
        printf("Dance Dance!");
        break;
    case 21 ...30:
        printf("Study study!");
        break;
    case 31 ...40:
        printf("Run Run!");
        break;
    case 41 ...50:
        printf("Exercise!");
        break;
    case 51 ...60:
        printf("Good Diet!");
        break;
    case 61 ...70:
        printf("Take Rest!");
        break;
    case 71 ...80:
        printf("Bhajan Karo!");
        break;
    case 81 ...90:
        printf("RIP!");
        break;
    default:
        printf("Invalid Input");
    }
}