#include <stdio.h>
struct Time
{
	int sec;
	int min;
	int hour;
} s;
void input_time(struct Time *s1)
{
	int t = 0;
	printf("enter hours, minutes and seconds ");
	scanf("%d %d %d", &s1->hour, &s1->min, &s1->sec);
	while (s1->sec >= 60)
	{
		s1->sec = s1->sec - 60;
		t++;
	}
	s1->min = s1->min + t;
	t = 0;
	while (s1->min >= 60)
	{
		s1->min = s1->min - 60;
		t++;
	}
	s1->hour = s1->hour + t;
}
void increase_time(struct Time *s1)
{
	s.sec++;
	if (s.sec == 60)
	{
		s.sec = 0;
		s.min++;
	}
	if (s.min == 60)
	{
		s.min = 0;
		s.hour++;
	}
}
void display(struct Time *s1)
{
	printf("hours:%d minutes:%d seconds:%d\n", s1->hour, s1->min, s1->sec);
}
void main()
{
	int a, n = 0;
	while (n != 1)
	{
		printf("enter 1 for inputting new time, 2 for updating time, 3 for displsying time and four to end the programme ");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			input_time(&s);
			break;

		case 2:
			increase_time(&s);
			break;

		case 3:
			display(&s);
			break;

		case 4:
			n = 1;
			break;
		default:
			printf("Invalid Input\n");
		}
	}
}