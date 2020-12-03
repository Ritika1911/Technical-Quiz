#include<stdio.h> #include<conio.h> #include<ctype.h> #include<stdlib.h> #include<string.h> void show_record(); void reset_score(); void help();
void edit_score(float , char []); int main()
{
int countr,r,r1,count,i,n,m; float score;
char choice;
char playername[20]; mainhome:
system("cls");
printf("\t\t\tC PROGRAM QUIZ GAME\n"); 
 



















 

printf("\n\t\t\t	WELCOME ");	
printf("\n\t\t\t"); printf("\n\t\t\t");
printf("\n\t\t	to THE QUIZ");
printf("\n\t\t		");
printf("\n\t\t > Press C to start the game"); printf("\n\t\t > Press B to view the highest score ");
printf("\n\t\t > press I for help   ");
printf("\n\t\t > press T to quit	");

printf("\n\t\t		\n\n");
choice=toupper(getch()); if (choice=='B')		
{
show_record();
 
goto mainhome;
}
else if (choice=='I')
{
help();getch(); goto mainhome;
}
else if (choice=='T') exit(1);
else if(choice=='C')
{
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:"); gets(playername);

system("cls");
printf("\n	Welcome %s to C Program Quiz Game",playername);
printf("\n\n Here are some tips you might wanna know before playing:"); printf("\n 	");
printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
printf("\n >> In warmup round you will be asked a total of 6 questions to test your"); printf("\n	knowledge. You are eligible to play the game if you give atleast 4");
printf("\n	right answers, otherwise you can't proceed further to the Challenge Round."); printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked
a");
printf("\n	total of 10 questions. Each right answer will be awarded 100 points!"); printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the"); printf("\n	right option.");
printf("\n >> You will be asked questions continuously, till right answers are given"); printf("\n >> No negative marking for wrong answers!");
printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
printf("\n\n\n Press Y to start the game!\n");
printf("\n Press any other key to return to the main menu!"); if (toupper(getch())=='Y')
{
 

}
else
 
goto home;


{
 
goto mainhome; system("cls");
}

home: system("cls"); count=0;
printf("select paper set"); printf("\n");
printf("1.set A \t 2.set B \t"); scanf("%d",&m); for(i=1;i<=6;i++)
{
system("cls"); r1=i; if(m==1)
{
switch(r1)
{
case 1:
printf("\n\n What is the built in library function to compare two strings?"); printf("\n\nA.-string_cmp()\t\tB.-equals()\n\nC. -strcmp()\t\tD.-str_compare()"); if (toupper(getch())=='C')
{
 



}
else
{
 
printf("\n\nCorrect!!!");count++; getch();
break;



printf("\n\nWrong!!! The correct answer is C"); getch();
 
break;
}

case 2:
printf("\n\n\n C programming : If you want to store dissimilar data together,
then which type you will use?");
printf("\n\nA.array\t\tB.stack\n\nC.structure\t\tD.None of the above"); if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");count++; getch();
 

else
 
break;}

{printf("\n\nWrong!!! The correct answer is C"); getch();
break;}
 

 
case 3: statement?");
 
printf("\n\n\n Which of the following cannot be checked in a switch-case printf("\n\nA.Character\t\tB.Float\n\nC.Integer\t\tD.enum");
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");count++; getch();
break;}
 
else
 

{printf("\n\nWrong!!! The correct answer is B"); getch();
break;}
 

 
case 4:
 

printf("\n\n\nThe function that calls itself for its processing is known as."); printf("\n\nA.Inline Function\t\tB.Recursive Function\n\nC.Nested
 
Function\t\tD.Overloaded Function");
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");count++; getch();
break;}
else
{printf("\n\nWrong!!! The correct answer is B"); getch();
break;}

case 5:
printf("\n\n\nWhat is the purpose of fflush() function?");
printf("\n\nA.flushes only specified stream\t\tB.flushes all streams and specified streams.\n\nC.flushes input/output buffer\t\tD.flushes file buffer");
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");count++; getch();
break;}
else
{printf("\n\nWrong!!! The correct answer is B");
 
getch(); break;}

case 6:
printf("\n\n\n C programming: What function should be used to free the
memory allocated by calloc() ?");
printf("\n\nA.dealloc();\t\tB.malloc(variable_name, 0)\n\nC.memalloc(variable_name, 0)\t\tD.free();");
if (toupper(getch())=='D' )
{printf("\n\nCorrect!!!");count++; getch();
break;}
 
else
 

{printf("\n\nWrong!!! The correct answer is D"); getch();
break;}}
 

}
else if(m==2)
{
switch(r1)
{
case 1:
printf("\n\nC programming: Which is not a storage class?"); printf("\n\nA.Auto\t\tB.Typedef\n\nC.Struct\t\tD.Static");
if (toupper(getch())=='C')
{
 



}
else
{
 
printf("\n\nCorrect!!!");count++; getch();
break;



printf("\n\nWrong!!! The correct answer is C"); getch();
 
break;
}

 
case 2:
 

printf("\n\n\nA C variable name can start with a"); printf("\n\nA.Number\t\tB.Plus Sign(+)\n\nC.Underscore\t\tD.Asterisk (*)"); if (toupper(getch())=='C')
 



else
 
{printf("\n\nCorrect!!!");count++; getch();
break;}

{printf("\n\nWrong!!! The correct answer is C"); getch();
break;}
 

 
case 3:
 

printf("\n\n\n A pointer in c which has not been initialized is known as"); printf("\n\nA.far pointer\t\tB.wild pointer\n\nC.void pointer\t\tD.null pointer"); if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");count++; getch();
break;}
 
else
 

{printf("\n\nWrong!!! The correct answer is B"); getch();
break;}
 

 
case 4:
 

printf("\n\n\nPrototype of a function means ");
printf("\n\nA.Name of Function\t\tB.Declaration of Function\n\nC.Output of
 
Function\t\tD.Input of a Function.");
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");count++; getch();
break;}
 




case 5:
 
else
 

{printf("\n\nWrong!!! The correct answer is B"); getch();
break;}
 
printf("\n\n\n What is size of void pointer?");
printf("\n\nA. 3\t\tB.Platform dependent value\n\nC. 9\t\tD.10"); if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");count++; getch();
break;}
 
else
 

{printf("\n\nWrong!!! The correct answer is B"); getch();
 
break;}

 
case 6:
 

printf("\n\n\nWhat is an Identifier in C Language.?"); printf("\n\nA.Name of a Function or Variable\t\tB.Name of a
 
Macros\n\nC.Name of Structure or Union\t\tD.All the above."); if (toupper(getch())=='D' )
{printf("\n\nCorrect!!!");count++; getch();
break;}
 
else
 

{printf("\n\nWrong!!! The correct answer is D"); getch();
break;}}
 

}
}

if(count>=4)
{goto test;} else
{
system("cls");
printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
getch();
goto mainhome;
}
test:
system("cls");
printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game
***",playername);
printf("\n\n\n\n\t!Press any key to Start the Game!"); if(toupper(getch())=='p')
{goto game;}
game:
countr=0; for(i=1;i<=10;i++)
{system("cls");
r=i; switch(r)
 
{
case 1:
printf("\n\nPrefix notation is alsow known as");
printf("\n\nA.Reverse Polish Notation\t\tB.Reverse Notation\n\nC.Polish Notation\t\tD. Polish Reverse Notation");
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");countr++;getch(); break;getch();}
else
{printf("\n\nWrong!!! The correct answer is C");getch(); goto score;
break;}

 


graph?");
 
case 2:
printf("\n\n\n What data structure is used for breadth first traversal of a

printf("\n\nA.queue\t\tB.stack\n\nC. list\t\tD. none of the above"); if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++;getch(); break;}
 
else
{printf("\n\nWrong!!! The correct answer is A");getch();
goto score; break;
}

case 3:
printf("\n\n\nWhich of the below given sorting techniques has highest
best-case runtime complexity - ");
printf("\n\nA.quick sort\t\tB.insertion sort7\n\nC.selection sort\t\tD.bubble
 
sort");
 

if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");countr++;getch(); break;}
 
else
 

{printf("\n\nWrong!!! The correct answer is C");getch(); goto score;
break;}
 

case 4:
printf("\n\n\nAccess time of a binary search tree may go worse in terms of
time complexity upto");
 
printf("\n\nA.O(n)\t\tB.O(1)\n\nC.O(n log n)\t\tD.O(n2)"); if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++;getch();
break;}
else
{
printf("\n\nWrong!!! The correct answer is A");getch(); goto score;
break;
}

 
case 5:
 

printf("\n\n\nThe postfix form of the expression (A+ B)*(C*D- E)*F / G is?"); printf("\n\nA.AB+ CD*E - FG /**\t\tB.AB + CD* E - *F *G /\n\nC.AB + CD* E -
 
F **G /\t\tD.AB + CDE * - * F *G /");
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");countr++;getch(); break;}
else
{
printf("\n\nWrong!!! The correct answer is B");
getch(); goto score; break;
}

 


notation?");
 
case 6:
printf("\n\n\nWhich data structure is needed to convert infix notation to postfix

printf("\n\nA.Queue\t\tB.Stack\n\nC.Tree\t\tD.Branch"); if (toupper(getch())=='B' )
{printf("\n\nCorrect!!!");countr++;getch(); break;}
 
else
 

{printf("\n\nWrong!!! The correct answer is B");goto score; getch();
break;}
 

case 7:
printf("\n\n\n A data structure in which elements can be inserted or deleted
at/from both the ends but not in the middle is?");
printf("\n\nA.Queue\t\tB.Circular queue\n\nC.Priority queue\t\tD.Dequeue"); if (toupper(getch())=='D')
 


else
 
{printf("\n\nCorrect!!!");countr++;getch(); break;}

{printf("\n\nWrong!!! The correct answer is D");getch(); goto score;
break;}
 

case 8:
printf("\n\n\n Which of the following data structures can be used for
parentheses matching?");
printf("\n\nA.n-ary tree\t\tB.stack\n\nC.queue\t\tD.priority queue"); if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");countr++;getch(); break;}
else
{printf("\n\nWrong!!! The correct answer is B");getch(); goto score;
break;}

 
case 9:
 

printf("\n\n\nIn linked list there are no NULL links in?"); printf("\n\nA.Circular linked list\t\tB.single linked list\n\nC.doubly linked
 
list\t\tD.none");
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; getch(); break;}
 
else
 

{printf("\n\nWrong!!! The correct answer is A");getch(); goto score;
break;}
 

case 10:
printf("\n\n\nIn a balanced binary tree the height of two sub trees of every
node can not differ by more than?");
printf("\n\nA.1\t\tB.2\n\nC.3\t\tD.4"); if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++;getch(); break;}
else
{printf("\n\nWrong!!! The correct answer is A.");getch();break;goto score;}

}}
score:
system("cls");
 
score=(float)countr*100; if(score>0.00 && score<1000000)
{
printf("\n\n\t\t**************** CONGRATULATION *****************"); printf("\n\t You won $%.2f",score);goto go;}

else if(score==1000)
{
printf("\n\n\n \t\t**************** CONGRATULATION ****************"); printf("\n\t\t You won $%.2f",score);
printf("\t\t Thank You!!");
}
else
{
printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********"); printf("\n\t\t Thanks for your participation");
printf("\n\t\t TRY AGAIN");goto go;}

go:
puts("\n\n Press Y if you want to play next game"); puts(" Press any key if you want to go main menu"); if (toupper(getch())=='Y')
goto home;
else
{
edit_score(score,playername); goto mainhome;}}}

void show_record()
{system("cls");
char name[20]; float scr;
FILE *f;
f=fopen("score.txt","r"); fscanf(f,"%s%f",&name,&scr);
printf("\n\n\t\t*************************************************************");
printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr); printf("\n\n\t\t*************************************************************"); fclose(f);
getch();} void reset_score()
 
{system("cls"); float sc;
char nm[20];
FILE *f;
f=fopen("score.txt","r+");
fscanf(f,"%s%f",&nm,&sc); sc=0; fprintf(f,"%s,%.2f",nm,sc);
fclose(f);}


void help()
{system("cls");
printf("\n\n	HELP");
printf("\n 		"); printf("\n ......................... C program Quiz Game	");
printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
printf("\n	knowledge. You will be eligible to play the game if you can give atleast 2");
printf("\n	right answers otherwise you can't play the Game	");
printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
printf("\n	total 10 questions each right answer will be awarded $100,000.");
printf("\n	By this way you can win upto ONE MILLION cash prize in USD	");
printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the"); printf("\n	right option");
printf("\n >> You will be asked questions continuously if you keep giving the right
answers.");
printf("\n >> No negative marking for wrong answers");

printf("\n\n\t*********************BEST OF LUCK*********************************"); printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C
TEAM********");}

void edit_score(float score, char plnm[20])
{system("cls"); float sc;
char nm[20]; FILE *f;
f=fopen("score.txt","r");
 
fscanf(f,"%s%f",&nm,&sc); if (score>=sc)
{ sc=score;
fclose(f); f=fopen("score.txt","w"); fprintf(f,"%s\n%.2f",plnm,sc); fclose(f);}}

