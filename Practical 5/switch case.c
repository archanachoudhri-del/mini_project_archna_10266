 #include<stdio.h>
int main(){
    printf("ARCHNA CHOUDHRI\t10266\n");
    int day;
    printf("Enter a numbers (1-3): ");
    scanf("%d",&day);
  switch (day)
  {
  case 1:
    printf("Monday\n");
    break;
  case 2:
  printf("Tuesday\n");
    break;
    case 3:
    printf("Wednesday\n");
    break;
    default:
    printf("Invalid number!\n");
  }
    return 0;

}
// Enter a numbers (1-3): 2
// Tuesday
