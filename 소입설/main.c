#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>
#include <MMSystem.h>
#pragma comment(lib,"Winmm.lib")


// 蘋萄 葬蝶お ** S>D>H>C **
// !!璋濠 10 п唸п撿л!! -> 轎溘й 陽虜 夥脯憮 轎溘 10 index 高: 9
const char Spade_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
const char Dia_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
const char Heart_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
const char Clover_Cards[13] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };

void main()
{
	//printf("絲檜釭 陛纂 氈朝 模嶸僭擊 勘堅 唸婁陛 碳�捐Я� 餌勒縑 頂晦蒂 剪朝 ч嬪蒂 紫夢檜塭堅 м棲棻.\n紫夢擎 唳爵擊 んлж朝 啾檜檜堅, 旎瞪擊 蹺掘ж朝 ч嬪檜貊, \n蝓ぬ陛 渠羹煎 辦翱撩縑 曖п 唸薑腎晦 陽僥縑 斜 唸婁陛 樹薯釭 碳�捐Я桭炴�.\n紫夢醞絮擎 紫夢戲煎 檣ж罹 獄檣, 陛褶 塽 渠檣婦啗曖 陞蛔婁 營薑瞳﹞餌�蛻�﹞徹瞳 僥薯陛 嫦儅ж堅 氈擠縑紫 碳掘ж堅, \n濠褐曖 曖雖煎 紫夢ч嬪蒂 褻瞰ж雖 跤ж堅 雖樓瞳戲煎 紫夢擊 ж啪 腎朝 匙擊 蜓м棲棻.\n紫夢 ч翕 濠羹陛 澀跤擎 嬴棲雖虜 \n濠褐檜 馬渡й 熱 氈朝 衛除婁 絲曖 и啗蒂 剩橫憮 濠薯ж雖 跤ж堅 奩犒瞳戲煎 紫夢擊 и棻賊 紫夢醞絮殮棲棻.\n 紫夢醞絮擊 纂猿ж晦 嬪п摹 и措紫夢僥薯婦葬撫攪蒂 檜辨п 輿褊衛螃. 馬餌м棲棻. \n");
	printf("---------------------------------\n");
	printf("-            FOUR 醴            -\n");
	printf("---------------------------------\n");
	//Sleep(1000);
	printf("寰喟ж褊棲梱 ん醴啪歜縑 螃褐匙擊 �紊腎桭炴�.\n");
	//Sleep(1500);
	printf("檜 啪歜擎 楠渾戲煎 嫡擎 蘋萄菟煎 ぬ蒂 褻мж罹 斜 ぬ曖 褶爾蒂 憲溥輿朝 啪歜殮棲棻.\n");
	//Sleep(2500);
	printf("啪歜寞徹!\n");
	//Sleep(1500);
	printf("1. 楠渾戲煎 蘋萄 4濰擊 嫡朝棻.\n");
	//Sleep(1500);
	printf("2. 4濰 醞縑 и 濰擊 摹鷗п憮 幗萼棻.\n");
	//Sleep(1500);
	printf("3. 3濰曖 蘋萄蒂, 陛雖堅 楠渾戲煎 棻衛 4濰擊 嫡嬴螞棻.\n");
	//Sleep(1500);
	printf("4. 7濰曖 蘋萄菟 醞 褻м檜 陛濰 謠擎 蘋萄 5濰擊 摹鷗и棻.\n");
	//Sleep(1500);
	printf("5. 斜 褻м檜 鼠歙檣雖 轎溘п遽棻.\n");
	//Sleep(1500);
	printf("\n");
	printf("\n");
	printf("!ん醴 ぬ 褻м!\n");
	printf("1. 煎撾 蝶お溯檜お Ы楝衛 : 5濰曖 蘋萄曖 楨觼陛 10, J, Q, K, A 檜賊憮 鼠棧陛 Ы楝衛橾 陽\n");
	printf("                            ex) 10Ⅳ JⅣ QⅣ KⅣ AⅣ\n");
	printf("2. 蝶お溯檜お Ы楝衛      : 5濰曖 蘋萄曖 楨觼陛 蝶お溯檜お檜堅 鼠棧陛 Ы楝衛橾 陽\n");
	printf("                            ex) 3Ⅳ 4Ⅳ 5Ⅳ 6Ⅳ 7Ⅳ \n");
	printf("3. ん蘋萄                 : 5濰 醞 4濰曖 蘋萄曖 楨觼陛 賅舒 偽擊 陽\n");
	printf("                            ex) 3Ⅳ 3﹣ 3Ⅵ 3Ⅷ 7Ⅳ\n");
	printf("4. ヴ ж辦蝶              : 5濰 醞 3濰曖 蘋萄曖 楨觼陛 偽堅 釭該雖 2濰曖 蘋萄曖 楨觼陛 偽擊 陽\n");
	printf("                            ex) 3Ⅳ 3﹣ 3Ⅵ 7﹣ 7Ⅳ\n");
	printf("5. Ы楝衛                 : 5濰曖 蘋萄曖 鼠棧陛 賅舒 偽擊 陽\n");
	printf("                            ex)6Ⅳ 2Ⅳ JⅣ 10Ⅳ 8Ⅳ\n");
	printf("6. 寥蝶お溯檜お           : 5濰曖 蘋萄曖 楨觼陛 A, 2, 3, 4, 5 橾 陽\n");
	printf("                            ex) AⅣ 2﹣ 3Ⅵ 4﹣ 5Ⅳ\n");
	printf("7. 葆遴ず                 : 5濰曖 蘋萄曖 楨觼陛 10, J, Q, K, A 橾 陽\n");
	printf("                            ex) 10Ⅳ J﹣ QⅥ K﹣ AⅣ\n");
	printf("8. 蝶お溯檜お             : 5濰曖 蘋萄菟曖 楨觼陛 牖離瞳戲煎 1噶 贗 陽\n");
	printf("                            ex) 5Ⅳ 6﹣ 7Ⅵ 8﹣ 9Ⅳ\n");
	printf("9. お葬Ы                 : 5濰 醞 3濰曖 蘋萄曖 楨觼陛 偽擊 陽\n");
	printf("                            ex) 3Ⅳ 3﹣ 3Ⅵ\n");
	printf("10. 癱む橫                : 5濰 醞 2濰曖 蘋萄曖 楨觼陛 偽堅 釭該雖 蘋萄菟 醞 2濰曖 蘋萄曖 楨觼陛 偽擊 陽\n");
	printf("                            ex) 10Ⅳ 10﹣ QⅥ Q﹣\n");
	printf("11. 錳む橫                : 5濰 醞 2濰曖 蘋萄曖 楨觼陛 偽擊 陽\n");
	printf("                            ex) 3Ⅳ 3﹣\n");
	printf("\n");
	printf("\n");
	printf("啪歜擊 霞чж溥賊 縛攪酈蒂 援腦撮蹂\n");
	int ch;
	ch = getchar();
	sndPlaySoundA("C:\\suffle.wav", SND_ASYNC | SND_NODEFAULT);
	printf("蘋萄蒂 摩朝醞...");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(800);
	printf("\n");

	srand(time(0));

	int wh = 1;
	char card_num[3], card_num1[3], card_num2[3], card_num3[3], card_num4[3], card_num5[3], card_num6[3];
	card_num[1] = ' ';
	card_num1[1] = ' ';
	card_num2[1] = ' ';
	card_num3[1] = ' '; 
	card_num4[1] = ' '; 
	card_num5[1] = ' ';
	card_num6[1] = ' '; 



	while ( wh )
	{
		printf("--------------啪歜 蝶顫お--------------\n");

		char type_choice[7];
		char rank_choice[7];
		int count_number1 = 0;
		int count_number2 = 0;

		// 1. 蘋萄 4濰 釭散輿晦
		while ( count_number1 < 4 )
		{
			int trash_num1 = 0;

			trash_num1 = rand() % 4;

			if ( trash_num1 == 0 ) // 蝶む檜萄
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'S';
				rank_choice[count_number1] = Spade_Cards[trash_num1];
			}
			if ( trash_num1 == 1 ) // 棻檜嬴
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'D';
				rank_choice[count_number1] = Dia_Cards[trash_num1];
			}
			if ( trash_num1 == 2 ) // жお
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'H';
				rank_choice[count_number1] = Heart_Cards[trash_num1];
			}
			if ( trash_num1 == 3 ) // 贗煎幗
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'C';
				rank_choice[count_number1] = Clover_Cards[trash_num1];
			}

			// 醞犒蘋萄 薯剪
			if ( count_number2 >= 1 )
			{
				for ( int i = 1; i <= count_number2; i++ )
				{
					while ( type_choice[count_number1] == type_choice[count_number1 - i] && rank_choice[count_number1] == rank_choice[count_number1 - i] )
					{
						trash_num1 = rand() % 4;

						if ( trash_num1 == 0 ) // 蝶む檜萄
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'S';
							rank_choice[count_number1] = Spade_Cards[trash_num1];
						}
						if ( trash_num1 == 1 ) // 棻檜嬴
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'D';
							rank_choice[count_number1] = Dia_Cards[trash_num1];
						}
						if ( trash_num1 == 2 ) // жお
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'H';
							rank_choice[count_number1] = Heart_Cards[trash_num1];
						}
						if ( trash_num1 == 3 ) // 贗煎幗
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'C';
							rank_choice[count_number1] = Clover_Cards[trash_num1];
						}
					}// while 僥
				}// for 僥
			}// if 僥

			count_number1 = count_number1 + 1;
			count_number2 = count_number2 + 1;
		}

		printf("試盪 啻 濰曖 蘋萄蒂 嫡蝗棲棻.\n");
		Sleep(1000);
		if ( rank_choice[0] == '0' )
		{
			card_num[0] = '1';
			card_num[1] = '0';
		}
		else
		{
			card_num[0] = rank_choice[0];
		}
		if ( type_choice[0] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭1)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[0] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭1)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[0] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭1)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[0] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭1)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		Sleep(1000);
		if ( rank_choice[1] == '0' )
		{
			card_num1[0] = '1';
			card_num1[1] = '0';
		}
		else
		{
			card_num1[0] = rank_choice[1];
		}
		if ( type_choice[1] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭2)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[1] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭2)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[1] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭2)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[1] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭2)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		Sleep(1000);
		if ( rank_choice[2] == '0' )
		{
			card_num2[0] = '1';
			card_num2[1] = '0';
		}
		else
		{
			card_num2[0] = rank_choice[2];
		}
		if ( type_choice[2] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭3)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);

		}
		else if ( type_choice[2] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭3)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[2] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭3)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[2] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭3)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		Sleep(1000);
		if ( rank_choice[3] == '0' )
		{
			card_num3[0] = '1';
			card_num3[1] = '0';
		}
		else
		{
			card_num3[0] = rank_choice[3];
		}
		if ( type_choice[3] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num3[0], card_num3[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭4)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);

		}
		else if ( type_choice[3] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num3[0], card_num3[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭4)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[3] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num3[0], card_num3[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭4)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[3] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num3[0], card_num3[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭4)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		Sleep(1000);

		// 2. и濰 幗葬晦

		int trash_num2 = 0;
		char type_pr = '0';
		char rank_pr = '0';

		printf("幗萵 蘋萄蒂 摹鷗п 輿撮蹂(1~4)\n");

		scanf("%d", &trash_num2);

		// 寡翮 竣橫噙晦 ⑽衝戲煎 寡翮 高 餉薯, strcmp 蜓堅 斜傖 trash == 1 煎 ж賊脾
		if ( trash_num2 == 1 ) // 羅 廓簞 蘋萄 幗葬晦(寡翮縑憮 雖薑高 餉薯)
		{
			type_pr = type_choice[0];
			rank_pr = rank_choice[0];


			type_choice[0] = type_choice[1];
			type_choice[1] = type_choice[2];
			type_choice[2] = type_choice[3];

			rank_choice[0] = rank_choice[1];
			rank_choice[1] = rank_choice[2];
			rank_choice[2] = rank_choice[3];
		}
		else if ( trash_num2 == 2 ) // 舒 廓簞 蘋萄 幗葬晦(寡翮縑憮 雖薑高 餉薯)
		{
			type_pr = type_choice[1];
			rank_pr = rank_choice[1];


			type_choice[1] = type_choice[2];
			type_choice[2] = type_choice[3];

			rank_choice[1] = rank_choice[2];
			rank_choice[2] = rank_choice[3];
		}
		else if ( trash_num2 == 3 ) // 撮 廓簞 蘋萄 幗葬晦(寡翮縑憮 雖薑高 餉薯)
		{
			type_pr = type_choice[2];
			rank_pr = rank_choice[2];


			type_choice[2] = type_choice[3];

			rank_choice[2] = rank_choice[3];
		}
		else if ( trash_num2 == 4 ) // 啻 廓簞 蘋萄 幗葬晦(寡翮縑憮 雖薑高 餉薯)
		{
			type_pr = type_choice[3];
			rank_pr = rank_choice[3];
		}
		else
		{
			printf("Invaild Value\n");
		}
		card_num[1] = ' ';
		card_num1[1] = ' ';
		card_num2[1] = ' ';
		card_num3[1] = ' ';
		card_num4[1] = ' ';
		card_num5[1] = ' ';
		card_num6[1] = ' ';
		printf("陴擎 蘋萄\n");
		Sleep(1000);
		if ( rank_choice[0] == '0' )
		{
			card_num[0] = '1';
			card_num[1] = '0';
		}
		else
		{
			card_num[0] = rank_choice[0];
		}
		if ( type_choice[0] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭\n1)");

		}
		else if ( type_choice[0] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭1)\n");
		}
		else if ( type_choice[0] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭1)\n");
		}
		else if ( type_choice[0] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭1)\n");
		}
		if ( rank_choice[1] == '0' )
		{
			card_num1[0] = '1';
			card_num1[1] = '0';
		}
		else
		{
			card_num1[0] = rank_choice[1];
		}
		if ( type_choice[1] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭2)\n");
		}
		else if ( type_choice[1] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭2)\n");
		}
		else if ( type_choice[1] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭2)\n");
		}
		else if ( type_choice[1] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭2)\n");
		}
		if ( rank_choice[2] == '0' )
		{
			card_num2[0] = '1';
			card_num2[1] = '0';
		}
		else
		{
			card_num2[0] = rank_choice[2];
		}
		if ( type_choice[2] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭3)\n");

		}
		else if ( type_choice[2] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭3)\n");
		}
		else if ( type_choice[2] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭3)\n");
		}
		else if ( type_choice[2] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭3)\n");
		}
		Sleep(1000);

		// 3. 棻衛 4濰 釭散輿晦
		count_number1 = 3;
		count_number2 = 3;

		while ( count_number1 < 7 )
		{
			int trash_num1 = 0;

			trash_num1 = rand() % 4;

			if ( trash_num1 == 0 ) // 蝶む檜萄
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'S';
				rank_choice[count_number1] = Spade_Cards[trash_num1];
			}
			if ( trash_num1 == 1 ) // 棻檜嬴
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'D';
				rank_choice[count_number1] = Dia_Cards[trash_num1];
			}
			if ( trash_num1 == 2 ) // жお
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'H';
				rank_choice[count_number1] = Heart_Cards[trash_num1];
			}
			if ( trash_num1 == 3 ) // 贗煎幗
			{
				trash_num1 = rand() % 13;

				type_choice[count_number1] = 'C';
				rank_choice[count_number1] = Clover_Cards[trash_num1];
			}

			// 醞犒蘋萄 薯剪

			// 幗萼蘋萄紫 醞犒戲煎 纂堅 薯剪 п醜撿л!
			// type_pr, rank_pr 檜辨
			if ( count_number2 >= 3 )
			{
				for ( int i = 1; i <= count_number2; i++ )
				{
					// 幗萼 蘋萄嫌 偽戲賊 寰脾
					while ( type_choice[count_number1] == type_pr && rank_choice[count_number1] == rank_pr )
					{
						trash_num1 = rand() % 4;

						if ( trash_num1 == 0 ) // 蝶む檜萄
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'S';
							rank_choice[count_number1] = Spade_Cards[trash_num1];
						}
						if ( trash_num1 == 1 ) // 棻檜嬴
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'D';
							rank_choice[count_number1] = Dia_Cards[trash_num1];
						}
						if ( trash_num1 == 2 ) // жお
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'H';
							rank_choice[count_number1] = Heart_Cards[trash_num1];
						}
						if ( trash_num1 == 3 ) // 贗煎幗
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'C';
							rank_choice[count_number1] = Clover_Cards[trash_num1];
						}
					}

					while ( type_choice[count_number1] == type_choice[count_number1 - i] && rank_choice[count_number1] == rank_choice[count_number1 - i] )
					{
						trash_num1 = rand() % 4;

						if ( trash_num1 == 0 ) // 蝶む檜萄
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'S';
							rank_choice[count_number1] = Spade_Cards[trash_num1];
						}
						if ( trash_num1 == 1 ) // 棻檜嬴
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'D';
							rank_choice[count_number1] = Dia_Cards[trash_num1];
						}
						if ( trash_num1 == 2 ) // жお
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'H';
							rank_choice[count_number1] = Heart_Cards[trash_num1];
						}
						if ( trash_num1 == 3 ) // 贗煎幗
						{
							trash_num1 = rand() % 13;

							type_choice[count_number1] = 'C';
							rank_choice[count_number1] = Clover_Cards[trash_num1];
						}

						// 幗萼 蘋萄嫌 偽戲賊 寰脾
						while ( type_choice[count_number1] == type_pr && rank_choice[count_number1] == rank_pr )
						{
							trash_num1 = rand() % 4;

							if ( trash_num1 == 0 ) // 蝶む檜萄
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'S';
								rank_choice[count_number1] = Spade_Cards[trash_num1];
							}
							if ( trash_num1 == 1 ) // 棻檜嬴
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'D';
								rank_choice[count_number1] = Dia_Cards[trash_num1];
							}
							if ( trash_num1 == 2 ) // жお
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'H';
								rank_choice[count_number1] = Heart_Cards[trash_num1];
							}
							if ( trash_num1 == 3 ) // 贗煎幗
							{
								trash_num1 = rand() % 13;

								type_choice[count_number1] = 'C';
								rank_choice[count_number1] = Clover_Cards[trash_num1];
							}
						}
					}// while 僥
				}// for 僥
			}// if 僥

			count_number1 = count_number1 + 1;
			count_number2 = count_number2 + 1;
		}
		card_num[1] = ' ';
		card_num1[1] = ' ';
		card_num2[1] = ' ';
		card_num3[1] = ' ';
		card_num4[1] = ' ';
		card_num5[1] = ' ';
		card_num6[1] = ' ';
		printf("\n");
		printf("棻擠戲煎 啻 濰曖 蘋萄蒂 嫡蝗棲棻.\n");
		Sleep(1000);
		if ( rank_choice[0] == '0' )
		{
			card_num[0] = '1';
			card_num[1] = '0';
		}
		else
		{
			card_num[0] = rank_choice[0];
		}
		if ( type_choice[0] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭1)\n");

		}
		else if ( type_choice[0] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭1)\n");
		}
		else if ( type_choice[0] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭1)\n");
		}
		else if ( type_choice[0] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num[0], card_num[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭1)\n");
		}
		if ( rank_choice[1] == '0' )
		{
			card_num1[0] = '1';
			card_num1[1] = '0';
		}
		else
		{
			card_num1[0] = rank_choice[1];
		}
		if ( type_choice[1] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭2)\n");
		}
		else if ( type_choice[1] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭2)\n");
		}
		else if ( type_choice[1] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭2)\n");
		}
		else if ( type_choice[1] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num1[0], card_num1[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭2)\n");
		}
		if ( rank_choice[2] == '0' )
		{
			card_num2[0] = '1';
			card_num2[1] = '0';
		}
		else
		{
			card_num2[0] = rank_choice[2];
		}
		if ( type_choice[2] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭3)\n");

		}
		else if ( type_choice[2] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭3)\n");
		}
		else if ( type_choice[2] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭3)\n");
		}
		else if ( type_choice[2] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num2[0], card_num2[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭3)\n");
		}
		Sleep(1000);
		if ( rank_choice[3] == '0' )
		{
			card_num3[0] = '1';
			card_num3[1] = '0';
		}
		else
		{
			card_num3[0] = rank_choice[3];
		}
		if ( type_choice[3] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num3[0], card_num3[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭4)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);

		}
		else if ( type_choice[3] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num3[0], card_num3[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭4)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[3] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num3[0], card_num3[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭4)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[3] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num3[0], card_num3[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭4)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		Sleep(1000);
		if ( rank_choice[4] == '0' )
		{
			card_num4[0] = '1';
			card_num4[1] = '0';
		}
		else
		{
			card_num4[0] = rank_choice[4];
		}
		if ( type_choice[4] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num4[0], card_num4[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭5)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);

		}
		else if ( type_choice[4] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num4[0], card_num4[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭5)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[4] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num4[0], card_num4[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭5)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[4] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num4[0], card_num4[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭5)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		Sleep(1000);
		if ( rank_choice[5] == '0' )
		{
			card_num5[0] = '1';
			card_num5[1] = '0';
		}
		else
		{
			card_num5[0] = rank_choice[5];
		}
		if ( type_choice[5] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num5[0], card_num5[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭6)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[5] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num5[0], card_num5[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭6)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[5] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num5[0], card_num5[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭6)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[5] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num5[0], card_num5[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭6)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		Sleep(1000);
		if ( rank_choice[6] == '0' )
		{
			card_num6[0] = '1';
			card_num6[1] = '0';
		}
		else
		{
			card_num6[0] = rank_choice[6];
		}
		if ( type_choice[6] == 'S' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅳ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num6[0], card_num6[1]);
			printf("早      早\n");
			printf("早    Ⅳ早\n");
			printf("曲收收收旭7)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);

		}
		else if ( type_choice[6] == 'D' )
		{
			printf("旨收收收旬\n");
			printf("早﹣    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num6[0], card_num6[1]);
			printf("早      早\n");
			printf("早    ﹣早\n");
			printf("曲收收收旭7)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[6] == 'H' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅵ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num6[0], card_num6[1]);
			printf("早      早\n");
			printf("早    Ⅵ早\n");
			printf("曲收收收旭7)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else if ( type_choice[6] == 'C' )
		{
			printf("旨收收收旬\n");
			printf("早Ⅷ    早\n");
			printf("早      早\n");
			printf("早  %c%c  早\n", card_num6[0], card_num6[1]);
			printf("早      早\n");
			printf("早    Ⅷ早\n");
			printf("曲收收收旭7)\n");
			sndPlaySoundA("C:\\a.wav", SND_ASYNC | SND_NODEFAULT);
		}
		Sleep(1000);

		for ( int i = 1; i < 7; i++ )
		{
			while ( type_choice[6] == type_choice[6 - i] && rank_choice[6] == rank_choice[6 - i] )
			{
				printf("\n");
				printf("歙?? 蘋萄陛 醞犒檜 釭諮啻蹂冗\n");
				Sleep(1000);
				printf("檜匙擎 Щ煎斜極 螃盟陛 嬴椎棲棻.\n");
				Sleep(1000);
				printf("紫夢曖 嬪я撩擊 憲葬朝 Щ煎斜極檜艘蝗棲棻.!!\n");
				Sleep(1000);
				printf("絲檜釭 陛纂 氈朝 模嶸僭擊 勘堅 唸婁陛 碳�捐Я� 餌勒縑 頂晦蒂 剪朝 ч嬪蒂 紫夢檜塭堅 м棲棻.\n紫夢擎 唳爵擊 んлж朝 啾檜檜堅, 旎瞪擊 蹺掘ж朝 ч嬪檜貊, \n蝓ぬ陛 渠羹煎 辦翱撩縑 曖п 唸薑腎晦 陽僥縑 斜 唸婁陛 樹薯釭 碳�捐Я桭炴�.\n紫夢醞絮擎 紫夢戲煎 檣ж罹 獄檣, 陛褶 塽 渠檣婦啗曖 陞蛔婁 營薑瞳﹞餌�蛻�﹞徹瞳 僥薯陛 嫦儅ж堅 氈擠縑紫 碳掘ж堅, \n濠褐曖 曖雖煎 紫夢ч嬪蒂 褻瞰ж雖 跤ж堅 雖樓瞳戲煎 紫夢擊 ж啪 腎朝 匙擊 蜓м棲棻.\n紫夢 ч翕 濠羹陛 澀跤擎 嬴棲雖虜 \n濠褐檜 馬渡й 熱 氈朝 衛除婁 絲曖 и啗蒂 剩橫憮 濠薯ж雖 跤ж堅 奩犒瞳戲煎 紫夢擊 и棻賊 紫夢醞絮殮棲棻.\n紫夢醞絮擊 纂猿ж晦 嬪п摹 и措紫夢僥薯婦葬撫攪蒂 檜辨п 輿褊衛螃. 馬餌м棲棻. \n");
				printf("\n");
				exit(0);
			}
		}
		char choose;
		printf("絲擊 剪衛啊蝗棲梱?\n");
		printf("1.仄仄喻緒紱\n2. 嬴棲蹂\n");
		scanf(" %c", &choose); //�倣昄� 蝶む檜蝶 寰嫡擊陽 擅縑 嗥橫噙晦
		Sleep(1000);
		if ( choose == '1' )
		{
			sndPlaySoundA("C:\\siren.wav", SND_ASYNC | SND_NODEFAULT);
			Sleep(3000);
			printf("絲檜釭 陛纂 氈朝 模嶸僭擊 勘堅 唸婁陛 碳�捐Я� 餌勒縑 頂晦蒂 剪朝 ч嬪蒂 紫夢檜塭堅 м棲棻.\n紫夢擎 唳爵擊 んлж朝 啾檜檜堅, 旎瞪擊 蹺掘ж朝 ч嬪檜貊, \n蝓ぬ陛 渠羹煎 辦翱撩縑 曖п 唸薑腎晦 陽僥縑 斜 唸婁陛 樹薯釭 碳�捐Я桭炴�.\n紫夢醞絮擎 紫夢戲煎 檣ж罹 獄檣, 陛褶 塽 渠檣婦啗曖 陞蛔婁 營薑瞳﹞餌�蛻�﹞徹瞳 僥薯陛 嫦儅ж堅 氈擠縑紫 碳掘ж堅, \n濠褐曖 曖雖煎 紫夢ч嬪蒂 褻瞰ж雖 跤ж堅 雖樓瞳戲煎 紫夢擊 ж啪 腎朝 匙擊 蜓м棲棻.\n紫夢 ч翕 濠羹陛 澀跤擎 嬴棲雖虜 \n濠褐檜 馬渡й 熱 氈朝 衛除婁 絲曖 и啗蒂 剩橫憮 濠薯ж雖 跤ж堅 奩犒瞳戲煎 紫夢擊 и棻賊 紫夢醞絮殮棲棻.\n紫夢醞絮擊 纂猿ж晦 嬪п摹 и措紫夢僥薯婦葬撫攪蒂 檜辨п 輿褊衛螃. 馬餌м棲棻. \n");
			sndPlaySoundA("C:\\japattayonom.wav", SND_ASYNC | SND_NODEFAULT);
			Sleep(30000);
			return 0;
		}


		// 4. 餌辨й 蘋萄 摹鷗
		char fin_type_pr[5];
		char fin_rank_pr[5];
		int ch1 = 0, ch2 = 0, ch3 = 0, ch4 = 0, ch5 = 0;

		printf("褻м縑 檜辨 й 5濰曖 蘋萄蒂 摹鷗п 輿撮蹂(_ _ _ _ _ ⑽衝戲煎 摹鷗)\n");

		scanf("%d %d %d %d %d", &ch1, &ch2, &ch3, &ch4, &ch5);

		fin_type_pr[0] = type_choice[ch1 - 1];
		fin_rank_pr[0] = rank_choice[ch1 - 1];
		fin_type_pr[1] = type_choice[ch2 - 1];
		fin_rank_pr[1] = rank_choice[ch2 - 1];
		fin_type_pr[2] = type_choice[ch3 - 1];
		fin_rank_pr[2] = rank_choice[ch3 - 1];
		fin_type_pr[3] = type_choice[ch4 - 1];
		fin_rank_pr[3] = rank_choice[ch4 - 1];
		fin_type_pr[4] = type_choice[ch5 - 1];
		fin_rank_pr[4] = rank_choice[ch5 - 1];


		printf("\n");
		printf("\n");
		printf("譆謙 蘋萄!\n");
		if ( fin_rank_pr[0] == '0' )
		{
			printf(" 10");
		}
		else
		{
			printf(" %c", fin_rank_pr[0]);
		}
		if ( fin_type_pr[0] == 'S' )
		{
			printf("Ⅳ ");
		}
		else if ( fin_type_pr[0] == 'D' )
		{
			printf("﹣ ");
		}
		else if ( fin_type_pr[0] == 'H' )
		{
			printf("Ⅵ ");
		}
		else if ( fin_type_pr[0] == 'C' )
		{
			printf("Ⅷ ");
		}
		if ( fin_rank_pr[1] == '0' )
		{
			printf("10");
		}
		else
		{
			printf("%c", fin_rank_pr[1]);
		}
		if ( fin_type_pr[1] == 'S' )
		{
			printf("Ⅳ ");
		}
		else if ( fin_type_pr[1] == 'D' )
		{
			printf("﹣ ");
		}
		else if ( fin_type_pr[1] == 'H' )
		{
			printf("Ⅵ ");
		}
		else if ( fin_type_pr[1] == 'C' )
		{
			printf("Ⅷ ");
		}
		if ( fin_rank_pr[2] == '0' )
		{
			printf("10");
		}
		else
		{
			printf("%c", fin_rank_pr[2]);
		}
		if ( fin_type_pr[2] == 'S' )
		{
			printf("Ⅳ ");
		}
		else if ( fin_type_pr[2] == 'D' )
		{
			printf("﹣ ");
		}
		else if ( fin_type_pr[2] == 'H' )
		{
			printf("Ⅵ ");
		}
		else if ( fin_type_pr[2] == 'C' )
		{
			printf("Ⅷ ");
		}
		if ( fin_rank_pr[3] == '0' )
		{
			printf("10");
		}
		else
		{
			printf("%c", fin_rank_pr[3]);
		}
		if ( fin_type_pr[3] == 'S' )
		{
			printf("Ⅳ ");
		}
		else if ( fin_type_pr[3] == 'D' )
		{
			printf("﹣ ");
		}
		else if ( fin_type_pr[3] == 'H' )
		{
			printf("Ⅵ ");
		}
		else if ( fin_type_pr[3] == 'C' )
		{
			printf("Ⅷ ");
		}
		if ( fin_rank_pr[4] == '0' )
		{
			printf("10");
		}
		else
		{
			printf("%c", fin_rank_pr[4]);
		}
		if ( fin_type_pr[4] == 'S' )
		{
			printf("Ⅳ\n");
		}
		else if ( fin_type_pr[4] == 'D' )
		{
			printf("﹣\n");
		}
		else if ( fin_type_pr[4] == 'H' )
		{
			printf("Ⅵ\n");
		}
		else if ( fin_type_pr[4] == 'C' )
		{
			printf("Ⅷ\n");
		}
		Sleep(1000);

		// % rank int�� %
		int fin_rank[5];
		int fin_type[5];

		for ( int i = 0; i < 5; i++ )
		{
			if ( fin_rank_pr[i] == '1' )
			{
				fin_rank[i] = 1;
			}
			else if ( fin_rank_pr[i] == '2' )
			{
				fin_rank[i] = 2;
			}
			else if ( fin_rank_pr[i] == '3' )
			{
				fin_rank[i] = 3;
			}
			else if ( fin_rank_pr[i] == '4' )
			{
				fin_rank[i] = 4;
			}
			else if ( fin_rank_pr[i] == '5' )
			{
				fin_rank[i] = 5;
			}
			else if ( fin_rank_pr[i] == '6' )
			{
				fin_rank[i] = 6;
			}
			else if ( fin_rank_pr[i] == '7' )
			{
				fin_rank[i] = 7;
			}
			else if ( fin_rank_pr[i] == '8' )
			{
				fin_rank[i] = 8;
			}
			else if ( fin_rank_pr[i] == '9' )
			{
				fin_rank[i] = 9;
			}
			else if ( fin_rank_pr[i] == '0' )
			{
				fin_rank[i] = 10;
			}
			else if ( fin_rank_pr[i] == 'J' )
			{
				fin_rank[i] = 11;
			}
			else if ( fin_rank_pr[i] == 'Q' )
			{
				fin_rank[i] = 12;
			}
			else if ( fin_rank_pr[i] == 'K' )
			{
				fin_rank[i] = 13;
			}
		}

		// % type int�� %
		for ( int i = 0; i < 5; i++ )
		{
			if ( fin_type_pr[i] == 'S' )
			{
				fin_type[i] = 4;
			}
			else if ( fin_type_pr[i] == 'D' )
			{
				fin_type[i] = 3;
			}
			else if ( fin_type_pr[i] == 'H' )
			{
				fin_type[i] = 2;
			}
			else if ( fin_type_pr[i] == 'C' )
			{
				fin_type[i] = 1;
			}
		}

		// 5. ぬ 碟戮

		//#### 醞犒薯剪 螃盟!! 醞犒薯剪 й陽 籀擠剪 ぬ蝶腎賊 棻擠縑 籀擠剪嫌 綠掖 碳陛

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		// 蝶お溯檜お Ы楝衛 っ滌
		int cha_rank_sf[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

		// 寡翮 薑溺
		for ( int i = 0; i < 4; i++ )
		{
			for ( int j = 0; j < 4 - i; j++ )
			{
				if ( cha_rank_sf[j] > cha_rank_sf[j + 1] )
				{
					int t = cha_rank_sf[j];
					cha_rank_sf[j] = cha_rank_sf[j + 1];
					cha_rank_sf[j + 1] = t;
				}
			}
		}

		// 煎撾 蝶お溯檜お Ы楝衛
		if ( cha_rank_sf[0] == 1 && cha_rank_sf[1] == 10 && cha_rank_sf[2] == 11 && cha_rank_sf[3] == 12 && cha_rank_sf[4] == 13 && fin_type[0] == fin_type[1] && fin_type[1] == fin_type[2] && fin_type[2] == fin_type[3] && fin_type[3] == fin_type[4] )
		{
			printf("!!!≠煎撾 蝶お溯檜お Ы楝衛≠!!!\n");
			sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
		}
		// 蝶お溯檜お Ы楝衛
		else if ( cha_rank_sf[1] == cha_rank_sf[0] + 1 && cha_rank_sf[2] == cha_rank_sf[0] + 2 && cha_rank_sf[3] == cha_rank_sf[0] + 3 && cha_rank_sf[4] == cha_rank_sf[0] + 4 && fin_type[0] == fin_type[1] && fin_type[1] == fin_type[2] && fin_type[2] == fin_type[3] && fin_type[3] == fin_type[4] )
		{
			printf("≠蝶お溯檜お Ы楝衛≠\n");
			sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
		}
		else
		{
			//ん蘋萄 っ滌
			int cha_rank_four[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

			// 寡翮 薑溺
			for ( int i = 0; i < 4; i++ )
			{
				for ( int j = 0; j < 4 - i; j++ )
				{
					if ( cha_rank_four[j] > cha_rank_four[j + 1] )
					{
						int t = cha_rank_four[j];
						cha_rank_four[j] = cha_rank_four[j + 1];
						cha_rank_four[j + 1] = t;
					}
				}
			}

			if ( cha_rank_four[0] == cha_rank_four[1] && cha_rank_four[1] == cha_rank_four[2] && cha_rank_four[2] == cha_rank_four[3] )
			{
				printf("ん蘋萄≠!!\n");
				sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
			}
			else if ( cha_rank_four[1] == cha_rank_four[2] && cha_rank_four[2] == cha_rank_four[3] && cha_rank_four[3] == cha_rank_four[4] )
			{
				printf("ん蘋萄≠!!\n");
				sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
			}
			else
			{
				// ヴж辦蝶 っ滌
				int cha_rank_f[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

				// 寡翮 薑溺
				for ( int i = 0; i < 4; i++ )
				{
					for ( int j = 0; j < 4 - i; j++ )
					{
						if ( cha_rank_f[j] > cha_rank_f[j + 1] )
						{
							int t = cha_rank_f[j];
							cha_rank_f[j] = cha_rank_f[j + 1];
							cha_rank_f[j + 1] = t;
						}
					}
				}

				if ( cha_rank_f[0] == cha_rank_f[1] && cha_rank_f[1] == cha_rank_f[2] && cha_rank_f[3] == cha_rank_f[4] )
				{
					printf("ヴж辦蝶≠!\n");
					sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
				}
				else if ( cha_rank_f[2] == cha_rank_f[3] && cha_rank_f[3] == cha_rank_f[4] && cha_rank_f[0] == cha_rank_f[1] )
				{
					printf("ヴж辦蝶≠!\n");
					sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
				}
				else
				{
					// Ы楝衛 っ滌
					if ( fin_type[0] == fin_type[1] && fin_type[1] == fin_type[2] && fin_type[2] == fin_type[3] && fin_type[3] == fin_type[4] )
					{
						printf("Ы楝衛!!!!!\n");
						sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
					}
					else
					{
						// 蝶お溯檜お っ滌
						int cha_rank[5] = { fin_rank[0], fin_rank[1], fin_rank[2], fin_rank[3], fin_rank[4] };

						// 寡翮 薑溺
						for ( int i = 0; i < 4; i++ )
						{
							for ( int j = 0; j < 4 - i; j++ )
							{
								if ( cha_rank[j] > cha_rank[j + 1] )
								{
									int t = cha_rank[j];
									cha_rank[j] = cha_rank[j + 1];
									cha_rank[j + 1] = t;
								}
							}
						}

						// 寥蝶お溯檜お
						if ( cha_rank[0] == 1 && cha_rank[1] == 2 && cha_rank[2] == 3 && cha_rank[3] == 4 && cha_rank[4] == 5 )
						{
							printf("寥蝶お溯檜お!!!!\n");
							sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
						}
						// 葆遴ず
						else if ( cha_rank[0] == 1 && cha_rank[1] == 10 && cha_rank[2] == 11 && cha_rank[3] == 12 && cha_rank[4] == 13 )
						{
							printf("葆遴ず!!!!\n");
							sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
						}
						// 蝶お溯檜お
						else if ( cha_rank[1] == cha_rank[0] + 1 && cha_rank[2] == cha_rank[0] + 2 && cha_rank[3] == cha_rank[0] + 3 && cha_rank[4] == cha_rank[0] + 4 )
						{
							printf("蝶お溯檜お!!!!\n");
							sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
						}
						else
						{
							// お葬Ы っ滌
							/////////////////////////////////////////////////////////////////////
							/////////////////////////////////////////////////////////////////////
							/////////////////////////////////////////////////////////////////////
							// 螃盟 今仆
							int index_t1 = 100, index_t2 = 100, index_t3 = 100;

							for ( int i = 0; i < 5; i++ )
							{
								for ( int k = 0; k < 5; k++ )
								{
									if ( i != k )
									{
										for ( int j = 0; j < 5; j++ )
										{
											if ( i != j && k != j )
											{
												if ( fin_rank[i] == fin_rank[k] && fin_rank[k] == fin_rank[j] )
												{
													index_t1 = i;
													index_t2 = k;
													index_t3 = j;
													break;
												}
											}
										}// 樓縑氈朝 j for
									}
								}// k for
							}// i for

							if ( index_t1 != 100 && index_t2 != 100 && index_t3 != 100 )
							{
								printf("お葬Ы!!!\n");
								sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
							}
							else
							{
								// 癱む橫 っ滌
								int index_b1 = 100, index_b2 = 100;
								int index_a1 = 100, index_a2 = 100;

								// 籀擠む橫 っ滌
								for ( int i = 0; i < 5; i++ )
								{
									for ( int k = 0; k < 5; k++ )
									{
										if ( i != k )
										{
											if ( fin_rank[i] == fin_rank[k] )
											{
												index_b1 = i;
												index_b2 = k;
											}
										}
									}// k for
								}// i for

								 // 舒廓簞む橫 っ滌
								for ( int i = 0; i < 5; i++ )
								{
									for ( int k = 0; k < 5; k++ )
									{
										if ( i != k )
										{
											if ( fin_rank[i] == fin_rank[k] )
											{
												if ( index_b1 == i && index_b2 == k )
												{
												}
												else if ( index_b1 == k && index_b2 == i )
												{
												}
												else
												{
													index_a1 = i;
													index_a2 = k;
												}
											}
										}
									}// k for
								}// i for


								if ( index_b1 != 100 && index_b2 != 100 && index_a1 != 100 && index_a2 != 100 )
								{
									printf("癱む橫!!\n");
									sndPlaySoundA("C:\\wow.wav", SND_ASYNC | SND_NODEFAULT);
								}
								else
								{
									// 錳む橫 っ滌
									int index1 = 100, index2 = 100;

									// 錳む橫 っ滌
									for ( int i = 0; i < 5; i++ )
									{
										for ( int k = 0; k < 5; k++ )
										{
											if ( i != k )
											{
												if ( fin_rank[i] == fin_rank[k] )
												{
													index1 = i;
													index2 = k;
												}
											}
										}// k for
									}// i for


									if ( index1 != 100 && index2 != 100 )
									{
										printf("錳む橫!\n");
										sndPlaySoundA("C:\\haha.wav", SND_ASYNC | SND_NODEFAULT);
									}
									else
									{
										// 鱉 っ滌
										int max_num = 0;
										int index = 0;

										// 璋濠掘碟
										for ( int i = 0; i < 5; i++ )
										{
											if ( fin_rank[i] > max_num )
											{
												max_num = fin_rank[i];
												index = i;
											}
										}
										for ( int i = 0; i < 5; i++ )
										{
											if ( fin_rank[i] = 1 )
											{
												index = i;
											}
										}

										printf("鱉\n");
										sndPlaySoundA("C:\\haha.wav", SND_ASYNC | SND_NODEFAULT);
										// 鱉
									}// 錳む橫
								}// 癱む橫
							}// お葬Ы
						}// 蝶お溯檜お
					}// Ы楝衛
				}// ヴж辦蝶
			}// ん蘋萄
		}// 蝶お溯檜お Ы楝衛
		Sleep(2000);
		printf("\n啪歜擊 棻衛 ж衛啊蝗棲梱?\n");
		printf("1. 棻衛и棻\n");
		printf("2. 斜虜и棻\n");

		scanf("%d", &ch);

		if ( ch == 1 )
		{
			continue;
		}
		else if ( ch == 2 )
		{
			exit(0);
		}
		else
		{
			printf("Invaild Value\n");
		}


	}// while 僥
}