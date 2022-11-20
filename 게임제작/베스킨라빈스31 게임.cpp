#include <cstdio>
#include "colortext.h"
int main()
{
	int mysu[50]={0,};
	int comsu,n=0;
	int i,j,max=0;
	int max2=0;
	char sun;
	color_init();
	printColoredText("Baskin Robbins 31!!!\n",CYAN);
	printf("\nPlayer VS Computer\n");
	printColoredText("					원하는 수까지 입력하고 0을 입력해 주세요! :  \n",RED);
	printColoredText("					시작 순서를 정해주세요 :  \n",YELLOW);
	printColoredText("					p입력 : player\n",DARK_YELLOW); 
	printColoredText("					c입력 : computer\n",DARK_YELLOW);
	printColoredText("					컴퓨터와 번갈아가며 숫자를 말합니다.\n",GREEN); 
	printColoredText("					먼저 31을 말하는 쪽이 지게 됩니다.\n",GREEN);
	printColoredText("				 	단, 숫자는 3개까지 말할 수 있습니다.\n",RED);
	printColoredText(" p 또는 c를 입력해 주세요!",PURPLE); 
	scanf("%c",&sun);
	if(sun=='c')
	{
		printColoredText("COMPUTER: 1 2\n",GREEN);
		do{		
			for(i=0;i<4;i++)
			{
				scanf("%d",&mysu[i]);
				if(mysu[i]!=0)
				{
					n++;
				}
				if(mysu[i]==31)
				{
					printColoredText("\nLOSE\n",RED);
					printColoredText("노력이필요합니다ㅋ",RED); 
					return 0;
				}
				if(mysu[i]==0)
				{
					break;
				}
				if(max < mysu[i])
				{
					max = mysu[i];
				}		
			}
			if(n==4)
			{
				printColoredText("규칙 위반",RED);
				return 0;
			}
			printColoredText("PLAYER: ",BLUE);
			for(i=0;i<4;i++)
			{
				if(mysu[i]!=-1 && mysu[i]!=0)
				{
					printf("%d ",mysu[i]);
				}
			}
			printColoredText("\nCOMPUTER: ",GREEN);
			if(max<6)
			{
				for(i=max+1;i<=6;i++)
				{
					printf("%d ",i);
				}
				printf("\n");
			}
			else if(max>6 && max<10)
			{
				for(i=max+1;i<=10;i++)
				{
					printf("%d ",i);
				}
				printf("\n");
			}
			else if(max>10 && max<14)
			{
				for(i=max+1;i<=14;i++)
				{
					printf("%d ",i);
				}
				printf("\n");
			}
			else if(max>14 && max<18)
			{
				for(i=max+1;i<=18;i++)
				{
					printf("%d ",i);
				}
				printf("\n");
			}
			else if(max>18 && max<22)
			{
				for(i=max+1;i<=22;i++)
				{
					printf("%d ",i);
				}
				printf("\n");
			}
			else if(max>22 && max<26)
			{
				for(i=max+1;i<=26;i++)
				{
					printf("%d ",i);
				}
				printf("\n");
			}
			else if(max>26)
			{
				for(i=max+1;i<=30;i++)
				{
					printf("%d ",i);
				}
				printf("\n");
			}
			for(i=0;i<5;i++)
			{
				mysu[i] = 0;
			}
			n=0;
		}while(1);
	}
	else if(sun=='p')
	{
		printColoredText("시작하세요!\n",GREEN); 
		for(i=0;i<4;i++)
		{
			scanf("%d",&mysu[i]);
			if(mysu[i]!=0)
			{
				n++;
			}
			if(mysu[i]==31)
			{
				printColoredText("\nLOSE\n",RED);
				printColoredText("노력이필요합니다ㅋ",RED); 
				return 0;
			}
			if(mysu[i]==0)
			{
				break;
			}
			if(max2 < mysu[i])
			{
				max2 = mysu[i];
			}		
		}
		if(n==4)
		{
			printColoredText("규칙 위반",RED);
			return 0;
		}
		n=0;
		printColoredText("PLAYER: ",BLUE);
		for(i=0;i<4;i++)
		{
			if(mysu[i]!=0 && mysu[i]!=-1)
			{
				printf("%d ",mysu[i]);
			}
		}
		printf("\n");
		for(i=0;i<5;i++)
		{
			mysu[i] = 0;
		}
		n=0;
		do{		
			if(max2==1)
			{
				printColoredText("COMPUTER: 2\n",GREEN);
				do{		
					for(i=0;i<4;i++)
					{
						scanf("%d",&mysu[i]);
						if(mysu[i]!=0)
						{
							n++;
						}
						if(mysu[i]==31)
						{
							printColoredText("\nLOSE\n",RED);
							printColoredText("노력이필요합니다ㅋ",RED); 
							return 0;
						}
						if(mysu[i]==0)
						{
							break;
						}
						if(max < mysu[i])
						{
							max = mysu[i];
						}		
					}
					if(n==4)
					{
						printColoredText("규칙 위반",RED);
						return 0;
					}
					printColoredText("PLAYER: ",BLUE);
					for(i=0;i<4;i++)
					{
						if(mysu[i]!=-1 && mysu[i]!=0)
						{
							printf("%d ",mysu[i]);
						}
					}
					for(i=0;i<5;i++)
					{
						mysu[i] = 0;
					}
					n=0;
					printColoredText("\nCOMPUTER: ",GREEN);
					if(max<6)
					{
						for(i=max+1;i<=6;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>6 && max<10)
					{
						for(i=max+1;i<=10;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>10 && max<14)
					{
						for(i=max+1;i<=14;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>14 && max<18)
					{
						for(i=max+1;i<=18;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>18 && max<22)
					{
						for(i=max+1;i<=22;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>22 && max<26)
					{
						for(i=max+1;i<=26;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>26)
					{
						for(i=max+1;i<=30;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
				}while(1);
			}
			else if(max2==3)
			{
				printColoredText("COMPUTER: 4 5 6\n",GREEN);
				do{		
					for(i=0;i<4;i++)
					{
						scanf("%d",&mysu[i]);
						if(mysu[i]!=0)
						{
							n++;
						}
						if(mysu[i]==31)
						{
							printColoredText("\nLOSE\n",RED);
							printColoredText("노력이필요합니다ㅋ",RED); 
							return 0;
						}
						if(mysu[i]==0)
						{
							break;
						}
						if(max < mysu[i])
						{
							max = mysu[i];
						}		
					}
					if(n==4)
					{
						printColoredText("규칙 위반",RED);
						return 0;
					}
					printColoredText("PLAYER: ",BLUE);
					for(i=0;i<4;i++)
					{
						if(mysu[i]!=-1 && mysu[i]!=0)
						{
							printf("%d ",mysu[i]);
						}
					}
					for(i=0;i<5;i++)
					{
						mysu[i] = 0;
					}
					n=0;
					printColoredText("\nCOMPUTER: ",GREEN);
					if(max>6 && max<10)
					{
						for(i=max+1;i<=10;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>10 && max<14)
					{
						for(i=max+1;i<=14;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>14 && max<18)
					{
						for(i=max+1;i<=18;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>18 && max<22)
					{
						for(i=max+1;i<=22;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>22 && max<26)
					{
						for(i=max+1;i<=26;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
					else if(max>26)
					{
						for(i=max+1;i<=30;i++)
						{
							printf("%d ",i);
						}
						printf("\n");
					}
				
				}while(1);
			}
			else if(max2==2)
			{
			//	max = max2;
				printColoredText("COMPUTER: ",GREEN);
				printf("3\n");
				do{	
					for(i=0;i<4;i++)
					{
						scanf("%d",&mysu[i]);
						if(mysu[i]!=0)
						{
							n++;
						}
						if(mysu[i]==31)
						{
							printColoredText("\nLOSE\n",RED);
							printColoredText("노력이필요합니다ㅋ",RED); 
							return 0;
						}
						if(mysu[i]==0)
						{
							break;
						}
						if(max < mysu[i])
						{
							max = mysu[i];
						}		
					}
					if(n==4)
					{
						printColoredText("규칙 위반",RED);
						return 0;
					}
					printColoredText("PLAYER: ",BLUE);
					for(i=0;i<4;i++)
					{
						if(mysu[i]!=-1 && mysu[i]!=0)
						{
							printf("%d ",mysu[i]);
						}
					}
					printf("\n");
					for(i=0;i<5;i++)
					{
						mysu[i] = 0;
					}
					n=0;
		
					
					printColoredText("COMPUTER: ",GREEN);
					if(max==2 || max==6 || max==10 || max==14 || max==18 || max==22 || max==26 || max==30)
					{
						for(i=max+1;i<=max+1;i++)
						{
							printf("%d ",i);
							if(i==31)
							{
								printColoredText("\nWIN!!\n",YELLOW);
								printColoredText("♧ 축하합니다!!! ♧",RED);
								return 0;
							}
								 
						}
						printf("\n");
					}
					else
					{
						if(max<6)
						{
							for(i=max+1;i<=6;i++)
							{
								printf("%d ",i);
							}
							printf("\n");
						}
						else if(max>6 && max<10)
						{
							for(i=max+1;i<=10;i++)
							{
								printf("%d ",i);
							}
							printf("\n");
						}
						else if(max>10 && max<14)
						{
							for(i=max+1;i<=14;i++)
							{
								printf("%d ",i);
							}
							printf("\n");
						}
						else if(max>14 && max<18)
						{
							for(i=max+1;i<=18;i++)
							{
								printf("%d ",i);
							}
							printf("\n");
						}
						else if(max>18 && max<22)
						{
							for(i=max+1;i<=22;i++)
							{
								printf("%d ",i);
							}
							printf("\n");
						}
						else if(max>22 && max<26)
						{
							for(i=max+1;i<=26;i++)
							{
								printf("%d ",i);
							}
							printf("\n");
						}
						else if(max>26)
						{
							for(i=max+1;i<=30;i++)
							{
								printf("%d ",i);
							}
							printf("\n");
						}
					}
		
				}while(1);
			}		
		}while(1);
	}
	return 0;
}
