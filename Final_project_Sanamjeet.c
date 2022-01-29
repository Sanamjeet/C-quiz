#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

void programmers_block(void);
int main_menu();
int Instructions(num);
void Enter_quiz();



int main()
{
	int num;

	programmers_block();
	main_menu();

	_getch();
	return 0;

}

void programmers_block(void)
{
	printf("program: Final_project.c\n");
	printf("programmer : Sanamjeet Singh\n");
	printf("date : July 31, 2021\n");
	printf("purpose : Creating a quiz\n");

	_getch();
	system("cls");

	return;
}

int main_menu()
{
	int choice;
	printf("\n\n\n\n\n\n\t\t\t\t\t=================================\n");
	printf("\n\t\t\t\t\tEnter 1 to start the Quiz\n");
	printf("\t\t\t\t\tEnter 2 for Instructions\n");
	printf("\t\t\t\t\tEnter 3 to Quit");
	printf("\n\n\t\t\t\t\t=================================\n");
	scanf("%d", &choice);
	system("cls");

	switch (choice)
	{
	case 1:
		Enter_quiz();
	case 2:
		Instructions();
	case 3:
		exit(0);		
	}

	return 0;
}


int Instructions(num)
{
	int x;
	printf("\n\n\n\n\n\n\n\t\t\t\t================= WELCOME TO PRG QUIZ ==============\n");
	printf("\n\t\t\t\tplease answer all 4 questions\n");
	printf("\t\t\t\tYou can't skip any questions\n");
	printf("\t\t\t\tGood luck!!\n");
	printf("\n\t\t\t\t====================================================\n");
	printf("\n\n\n\t\t\t\tPress 1 to go back to main menu\n");
	scanf("%d", &x);
	
	do {
		if (x != 1) {

			printf("Not valid!\n");
			printf("\n\n\n\t\t\t\tPress 1 to go back to main menu\n");
			scanf("%d", &x);
		}

		if (x == 1)
		{
			system("cls");
			main_menu();
			break;
		}

	} while (x != 1);
	system("cls");

	return 0;
}

void Enter_quiz()
{
	int score = 0, ans = 0;

	printf("Question 1:\n");
	printf("If a = 5 and b = 10, the expression:\n");
	printf("if (( b <= 12) && (a % 2 == o))\n");
	printf("will produce a \n");
	
	printf("Press 1 for TRUE or 0 for FALSE\n");
	scanf("%d", &ans);
	do {
		if (ans < 0 || ans > 1) {

			printf("Not valid!\n");
			printf("Press 1 for TRUE or 0 for FALSE\n");
			scanf("%d", &ans);
		}

		if (ans == 0 || ans == 1)
		{
			if (ans == 0)
			{
				score = score + 1;
				break;
			}
			break;
		}
	} while (ans < 0 || ans > 1);
	system("cls");



	printf("Question 2:\n");
	printf("If float a = 5, printf ( \" % f\", a) ; will produce 5.00\n");
	printf("Press 1 for TRUE or 0 for FALSE\n");
	scanf("%d", &ans);
	do {
		if (ans < 0 || ans > 1) {

			printf("Not valid!\n");
			printf("Press 1 for TRUE or 0 for FALSE\n");
			scanf("%d", &ans);
		}

		if (ans == 0 || ans == 1)
		{
			if (ans == 0)
			{
				score = score + 1;
				break;
			}
			break;
		}

	} while (ans < 0 || ans > 1);
	system("cls");



	printf("Question 3:\n");
	printf("The expression y += x is equivalent to y = x+1\n");	
	printf("Press 1 for TRUE or 0 for FALSE\n");
	scanf("%d", &ans);
	do {
		if (ans < 0 || ans > 1) {

			printf("Not valid!\n");
			printf("Press 1 for TRUE or 0 for FALSE\n");
			scanf("%d", &ans);
		}
		if (ans == 0 || ans == 1)
		{
			if (ans == 0)
			{
				score = score + 1;
				break;
			}
			break;
		}

	} while (ans < 0 || ans > 1);
	system("cls");



	printf("Question 4:\n");
	printf("What is the correct function prototype to the following function\n");
	printf("int addNum(int x, int y)\n");
	printf("{\n");
	printf("\tint addition = x + y;\n");
	printf("\treturn addition;\n");
	printf("}\n");
	printf("\n\nAnswer: int addNum(int x, int y); \n");
	printf("\nPress 1 for TRUE or 0 for FALSE\n");
	scanf("%d", &ans);
	do {
		if (ans < 0 || ans > 1) {

			printf("Not valid!\n");
			printf("Press 1 for TRUE or 0 for FALSE\n");
			scanf("%d", &ans);
		}

		if (ans == 0 || ans == 1)
		{
			if (ans == 1)
			{
				score = score + 1;
				break;
			}
			break;
		}

	} while (ans < 0 || ans > 1);
	system("cls");



	int x;
	printf("You have finished the Quiz!!\n");
	printf("You scored %d out of 4 \n", score);
	printf("\n\n\n\t\t\t\tPress 1 to go back to main menu\n");
	scanf("%d", &x);
	do {
		if (x != 1) {

			printf("Not valid!\n");
			printf("\n\n\n\t\t\t\tPress 1 to go back to main menu\n");
			scanf("%d", &x);
		}

		if (x == 1)
		{
			system("cls");
			main_menu();
			break;
		}

	} while (x != 1);
	system("cls");


}
