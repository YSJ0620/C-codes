#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <Windows.h>

#pragma warning (disable : 6031)

int main(void)
{
	int main = 0;

	char suinput_id[100];
	char suinput_ps[100];

	char input_id[100];
	char input_ps[100];

	while (1)
	{
		printf("Login or Sign up\n\n");
		printf("1. Login\n");
		printf("2. Sign up\n\n");

		scanf("%d", &main);

		switch (main)
		{
		case 1:
			printf("\n\n\n");

			printf("Login\n\n");
			printf("ID : ");
			scanf("%s", input_id);
			printf("Password : ");
			scanf("%s", input_ps);
			printf("\n\n");

			if (strcmp(input_id, suinput_id) == 0)
			{
				if (strcmp(input_ps, suinput_ps) == 0)
				{
					MessageBox(NULL, TEXT("Login Successfully"), TEXT("Login"), MB_ICONINFORMATION | MB_OKCANCEL);
					return 0;
				}
			}

			else
			{
				MessageBox(NULL, TEXT("Login Failed. Try Again"), TEXT("Login"), MB_ICONERROR | MB_OKCANCEL);
				break;
			}
			break;

		case 2:
			printf("\n\n\n");

			printf("Sign up\n\n");
			printf("ID : ");
			scanf("%s", suinput_id);
			printf("Password : ");
			scanf("%s", suinput_ps);
			printf("\n\n");

			MessageBox(NULL, TEXT("Sign up Successfully"), TEXT("Sign up"), MB_ICONINFORMATION | MB_OKCANCEL);

			for (int i = 5; i > 0; i--)
			{
				printf("%d   ", i);
				Sleep(1000);
			}

			system("cls");

			break;
		}
	}
}