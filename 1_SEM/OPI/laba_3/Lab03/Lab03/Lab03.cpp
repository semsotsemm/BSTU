#include <iostream> 

/*
							   Windows-1251
		AntipovAlexei2006                    41 6e 74 69 70 6f 76 41 6c 65 78 65 69 32 30 30 36 00
		АнтиповАлексейРоманович2006          c0 ed f2 e8 ef ee e2 c0 eb e5 ea f1 e5 e9 d0 ee ec e0 ed ee e2 e8 f7 32 30 30 36 00
		Антипов2006Alexei                    c0 ed f2 e8 ef ee e2 20 32 30 30 36 41 6c 65 78 65 69 00
	*/

	/*
								   UTF-8
		AntipovAlexei2006                       41 6E 74 69 70 6F 76 41 6C 65 78 65 69 32 30 30 36
		АнтиповАлексейРоманович2006             D0 90 D0 BD D1 82 D0 B8 D0 BF D0 BE D0 B2 D0 90 D0 BB D0 B5 D0 BA D1 81 D0 B5 D0 B9 D0 A0 D0 BE D0 BC D0 B0 D0 BD D0 BE D0 B2 D0 B8 32 30 30 36
		Антипов2006Alexei                       D0 90 D0 BD D1 82 D0 B8 D0 BF D0 BE D0 B2 32 30 30 36 41 6C 65 78 65 69
	*/

	/*
								   UTF-16
		AntipovAlexei2006                       41 00 6E 00 74 00 69 00 70 00 6F 00 76 00 41 00 6C 00 65 00 78 00 65 00 69 00 32 00 30 00 30 00 36 00 00 00
		АнтиповАлексейРоманович2006             10 04 3D 04 42 04 38 04 3F 04 3E 04 32 04 10 04 3B 04 35 04 3A 04 41 04 43 04 35 04 39 04 20 04 3E 04 3C 04 30 04 3D 04 3E 04 32 04 38 00 32 00 30 00 30 00 36 00 00 00
		Антипов2006Alexei                       10 04 3D 04 42 04 38 04 3F 04 3E 04 32 00 32 00 30 00 30 00 36 00 41 00 6C 00 65 00 78 00 65 00 69 00 00 00
	*/

int main()

{
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "AntipovAlexei2006";
	char rfie[] = "АнтиповАлексейРоманович2006";
	char lr[] = "Антипов2006Alexei";

	wchar_t Lfie[] = L"AntipovAlexei2006";
	wchar_t Rfie[] = L"АнтиповАлексейРоманович2006";
	wchar_t LR[] = L"Антипов2006Alexei";

	std::cout << hello << lfie << std::endl;
	return 0;
}

