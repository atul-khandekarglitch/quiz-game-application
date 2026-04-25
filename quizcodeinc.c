// quiz game appication
#include <stdio.h>
#include<string.h>
void quiz(); //function defining
int main(){
    quiz(); //function calling
}
void quiz(){
    int score=0;
    int choice;
    char division[9];
    char name[30];
    int rollno;
    printf("enter your name\n");
    scanf("%s",name);
    printf("enter your divison\n");
    scanf("%s",division);
    printf("enter your roll no\n");
    scanf("%d",&rollno);
    if(rollno==2580){
    printf("****QUIZ START***\n");
    printf("who is first prime minister of india\n");
    printf("1.m.gandhi\n 2.j.neharu\n 3.indira gandhi\n 4.none\n");
    scanf("%d",&choice);
    if(choice==2){
        score++;
    }
    printf("what is capital of india\n");
    printf("1.mumbai\n 2.pune\n 3.delhi\n 4.u.p\n");
    scanf("%d",&choice);
    if(choice==3){
        score++;
    }
    printf("which is national animal of india\n");
    printf("1.lion\n 2.tiger\n 3.fox\n 4.none\n");
    scanf("%d",&choice);
    if(choice==2){
        score++;
    }
    printf("which is natinal bird of india\n");
    printf("1.peacock\n 2.cock\n 3.parrat\n 4.crow\n");
    scanf("%d",&choice);
    if(choice==1){
        score++;
    }
    printf("which is the national flower of india\n");
    printf("1.rose\n 2.sunflower\n 3.lili\n 4.lotus\n");
    scanf("%d",&choice);
    if(choice==4){
        score++;
    }
    printf("what is financial capital of india\n");
    printf("1.mumbai\n 2.pune\n 3.delhi\n 4.aasam\n");
    scanf("%d",&choice);
    if(choice==1){
        score++;
    }
    printf("who is the father of nation\n");
    printf("1.m.gandhi\n 2.j.neharu\n 3.indira gandhi\n 4.none\n");
    scanf("%d",&choice);
    if(choice==1){
        score++;
    }
    printf("what is the currancy of india \n");
    printf("1.dollar\n 2.euro\n 3.dinar\n 4.rupees\n");
    scanf("%d",&choice);
    if(choice==4){
        score++;
    }
    printf("which is largest state  of india\n");
    printf("1.u.p\n 2.maharastra\n 3.aasam\n 4.goa\n");
    scanf("%d",&choice);
    if(choice==1){
        score++;
    }
    printf("what is date of independent of india\n");
    printf("1.26\n 2.1\n 3.15\n 4.14\n");
    scanf("%d",&choice);
    if(choice==3){
        score++;
    }
    printf("***result****\n");
    printf("total score of student is %d\n",score);
    if(score>8){
    printf("PASSED WITH EXCELLENT GRADE =A\n");
    }
    else if(score>6){
    printf("PASSED WITH GOOD GREDE=B\n");
    }
    else if(score>=4)
    printf("pass\n");
    else
    printf("fail\n");
    }
    else{
    printf("entered roll no is incorrect\n");
    }
}
