#pragma once


quiz umumi1() {
	int say1 = 10;
	string* s1_c = new string[4]{ "  Baki","  Xizi","  Gence","  Sumqayit" };
	string* s2_c = new string[4]{ "  Ankara","  Istanbul","  Izmir","  Adana" };
	string* s3_c = new string[4]{ "  Moskva","  Sankt-Peterburq","  Yakaterinburq","  Samara" };
	string* s4_c = new string[4]{ "  Tbilisi","  Batumi","  Kutaisi","  Qori" };
	string* s5_c = new string[4]{ "  Tehran","  Qum","  Kirmansah","  Tebriz" };
	string* s6_c = new string[4]{ "  Berlin","  Hamburq","  Munhen","  Koln" };
	string* s7_c = new string[4]{ "  Lissabon","  Porto","  Viseu","  Braqa" };
	string* s8_c = new string[4]{ "  Oslo","  Berqen","  Tronxeym","  Dramen" };
	string* s9_c = new string[4]{ "  Paris","  Marsel","  Lyon","  Borda" };
	string* s10_c = new string[4]{ "  Tokio","  Matsuyama","  Fukuyama","  Hirosima" };

	string s1_d = "  Baki";
	string s2_d = "  Ankara";
	string s3_d = "  Moskva";
	string s4_d = "  Tbilisi";
	string s5_d = "  Tehran";
	string s6_d = "  Berlin";
	string s7_d = "  Lissabon";
	string s8_d = "  Oslo";
	string s9_d = "  Paris";
	string s10_d = "  Tokio";

	Sual s1("Azerbaycanin paytaxti haradir?", s1_c, s1_d);
	Sual s2("Turkiyenin paytaxti haradir?", s2_c, s2_d);
	Sual s3("Rusiyanin paytaxti haradir?", s3_c, s3_d);
	Sual s4("Gurcustanin paytaxti haradir?", s4_c, s4_d);
	Sual s5("Iranin paytaxti haradir?", s5_c, s5_d);
	Sual s6("Almaniyanin paytaxti haradir?", s6_c, s6_d);
	Sual s7("Portuqaliyanin paytaxti haradir?", s7_c, s7_d);
	Sual s8("Norvecin paytaxti haradir?", s8_c, s8_d);
	Sual s9("Fransanin paytaxti haradir?", s9_c, s9_d);
	Sual s10("Yaponiyanin paytaxti haradir?", s10_c, s10_d);


	Sual* suallar = new Sual[say1]{ s1,s2 ,s3,s4,s5,s6,s7,s8,s9,s10 };

	quiz q1("  Paytaxt", suallar, say1);


	return q1;

}

	//----------------------------------------------------------------------------------


quiz umumi2() {


	int say2 = 10;
	string s21_d = "  1991";
	string s22_d = "  1983";
	string s23_d = "  1995";
	string s24_d = "  2001";
	string s25_d = "  1995";
	string s26_d = "  2014";
	string s27_d = "  1972";
	string s28_d = "  1995";
	string s29_d = "  1996";
	string s20_d = "  2009";


	string* s21_c = new string[4]{ "  1991","  1992","  1993","  1994" };
	string* s22_c = new string[4]{ "  1983","  1984","  1985","  1986" };
	string* s23_c = new string[4]{ "  1995","  1996","  1997","  1998" };
	string* s24_c = new string[4]{ "  2001","  2002","  2003","  2004" };
	string* s25_c = new string[4]{ "  1995","  1996","  1997","  1998" };
	string* s26_c = new string[4]{ "  2014","  2015","  2016","  2017" };
	string* s27_c = new string[4]{ "  1972","  1973","  1974","  1975" };
	string* s28_c = new string[4]{ "  1995","  1996","  1997","  1998" };
	string* s29_c = new string[4]{ "  1996","  1997","  1998","  1999" };
	string* s20_c = new string[4]{ "  2009","  2010","  2011","  2012" };




	Sual s21("Python dili necenci ilde yaradilmisdir?", s21_c, s21_d);
	Sual s22("C++ dili necenci ilde yaradilmisdir?", s22_c, s22_d);
	Sual s23("Java dili necenci ilde yaradilmisdir?", s23_c, s23_d);
	Sual s24("C# dili necenci ilde yaradilmisdir?", s24_c, s24_d);
	Sual s25("Php dili necenci ilde yaradilmisdir?", s25_c, s25_d);
	Sual s26("Swift dili necenci ilde yaradilmisdir?", s26_c, s26_d);
	Sual s27("C dili necenci ilde yaradilmisdir?", s27_c, s27_d);
	Sual s28("Ruby dili necenci ilde yaradilmisdir?", s28_c, s28_d);
	Sual s29("Javascript dili necenci ilde yaradilmisdir?", s29_c, s29_d);
	Sual s20("Go dili necenci ilde yaradilmisdir?", s20_c, s20_d);



	Sual* suallar2 = new Sual[say2]{ s21,s22,s23,s24,s25,s26,s27,s28,s29,s20 };

	quiz q2("  Dil", suallar2, say2);

	return q2;
}




//--------------------------------------------------------------------------------------------




quiz umumi3() {


	int say3 = 10;
	string s31_d = "  manat";
	string s32_d = "  lire";
	string s33_d = "  rubl";
	string s34_d = "  lari";
	string s35_d = "  rial";
	string s36_d = "  avro";
	string s37_d = "  avro";
	string s38_d = "  kron";
	string s39_d = "  avro";
	string s30_d = "  yen";


	string* s31_c = new string[4]{ "  manat","  lire","  yen","  avro" };
	string* s32_c = new string[4]{ "  lire","  kron","  avro","  rial" };
	string* s33_c = new string[4]{ "  rubl","  lire","  avro","  manat" };
	string* s34_c = new string[4]{ "  lari","  avro","  yen","  rubl" };
	string* s35_c = new string[4]{ "  rial","  manat","  lire","  avro" };
	string* s36_c = new string[4]{ "  avro","  rial","  rubl","  yen" };
	string* s37_c = new string[4]{ "  avro","  kron","  manat","  lire" };
	string* s38_c = new string[4]{ "  kron","  yen","  rial","  rubl" };
	string* s39_c = new string[4]{ "  avro","  manat","  rubl","  lire" };
	string* s30_c = new string[4]{ "  yen","  lire","  rial","  kron" };




	Sual s31("Azerbaycanin pul vahidi hansidir?", s31_c, s31_d);
	Sual s32("Turkiyenin pul vahidi hansidir?", s32_c, s32_d);
	Sual s33("Rusiyanin pul vahidi hansidir?", s33_c, s33_d);
	Sual s34("Gurcustanin pul vahidi hansidir?", s34_c, s34_d);
	Sual s35("Iranin pul vahidi hansidir?", s35_c, s35_d);
	Sual s36("Almaniyanin pul vahidi hansidir?", s36_c, s36_d);
	Sual s37("Portuqaliyanin pul vahidi hansidir?", s37_c, s37_d);
	Sual s38("Norvecin pul vahidi hansidir?", s38_c, s38_d);
	Sual s39("Fransanin pul vahidi hansidir?", s39_c, s39_d);
	Sual s30("Yaponiyanin pul vahidi hansidir?", s30_c, s30_d);


	Sual* suallar3 = new Sual[say3]{ s31,s32,s33,s34,s35,s36,s37,s38,s39,s30 };
	quiz q3("  Pul", suallar3, say3);

	return q3;
}





	//------------------------------------------------------------------------------------------

quiz umumi4() {


	int say4 = 10;
	string* s41_c = new string[4]{ "  Portuqaliya","  Misir","  Braziliya","  Almaniya" };
	string* s42_c = new string[4]{ "  Ingiltere","  Turkiye","  Hollandiya","  Portuqaliya" };
	string* s43_c = new string[4]{ "  Fransa","  Sotlandiya","  Misir","  Belcika" };
	string* s44_c = new string[4]{ "  Misir","  Turkiye","  Almaniya","  Argentina" };
	string* s45_c = new string[4]{ "  Niderland","  Gana","  Polsa","  Italiya" };
	string* s46_c = new string[4]{ "  Almaniya","  Azerbaycan","  Ispaniya","  Serbiya" };
	string* s47_c = new string[4]{ "  Belcika","  Isvecre","  Danimarka","  Merakes" };
	string* s48_c = new string[4]{ "  Sotlandiya","  Kolumbiya","  Norvec","  Xorvatiya" };
	string* s49_c = new string[4]{ "  Portuqaliya","  Uruqvay","  Seneqal","  Abs" };
	string* s40_c = new string[4]{ "  Turkiye","  Avstriya","  Merakes","  Niderland" };

	string s41_d = "  Portuqaliya";
	string s42_d = "  Ingiltere";
	string s43_d = "  Fransa";
	string s44_d = "  Misir";
	string s45_d = "  Niderland";
	string s46_d = "  Almaniya";
	string s47_d = "  Belcika";
	string s48_d = "  Sotlandiya";
	string s49_d = "  Portuqaliya";
	string s40_d = "  Turkiye";

	Sual s41("C.Ronaldo nun oynadigi milli komanda hansidir?", s41_c, s41_d);
	Sual s42("B.Saka nin oynadigi milli komanda hansidir?", s42_c, s42_d);
	Sual s43("O.Dembele nin oynadigi milli komanda hansidir?", s43_c, s43_d);
	Sual s44("M.Salah in oynadigi milli komanda hansidir?", s44_c, s44_d);
	Sual s45("D.Ligt in oynadigi milli komanda hansidir?", s45_c, s45_d);
	Sual s46("J.Kimmich in oynadigi milli komanda hansidir?", s46_c, s46_d);
	Sual s47("K.D.Bruyne in oynadigi milli komanda hansidir?", s47_c, s47_d);
	Sual s48("A.Robertson un oynadigi milli komanda hansidir?", s48_c, s48_d);
	Sual s49("R.leao nun oynadigi milli komanda hansidir?", s49_c, s49_d);
	Sual s40("F.Kadioglu nun oynadigi milli komanda hansidir?", s40_c, s40_d);


	Sual* suallar4 = new Sual[say4]{ s41,s42,s43,s44,s45,s46,s47,s48,s49,s40 };
	quiz q4("  Futbol", suallar4, say4);

	return q4;
}
	


	//---------------------------------------------------------------------------------------------------

quiz umumi5() {

	int say5 = 10;
	string* s51_c = new string[4]{ "  Berlin","  Hamburq","  Munhen","  Koln" };
	string* s52_c = new string[4]{ "  Tokio","  Matsuyama","  Fukuyama","  Hirosima" };
	string* s53_c = new string[4]{ "  Tbilisi","  Batumi","  Kutaisi","  Qori" };
	string* s54_c = new string[4]{ "  2001","  2002","  2003","  2004" };
	string* s55_c = new string[4]{ "  1996","  1997","  1998","  1999" };
	string* s56_c = new string[4]{ "  1983","  1984","  1985","  1986" };
	string* s57_c = new string[4]{ "  Portuqaliya","  Misir","  Braziliya","  Almaniya" };
	string* s58_c = new string[4]{ "  Turkiye","  Avstriya","  Merakes","  Niderland" };
	string* s59_c = new string[4]{ "  avro","  kron","  manat","  lire" };
	string* s50_c = new string[4]{ "  kron","  yen","  rial","  rubl" };

	string s51_d = "  Berlin";
	string s52_d = "  Tokio";
	string s53_d = "  Tbilisi";
	string s54_d = "  2001";
	string s55_d = "  1996";
	string s56_d = "  1983";
	string s57_d = "  Portuqaliya";
	string s58_d = "  Turkiye";
	string s59_d = "  avro";
	string s50_d = "  kron";

	Sual s51("Almaniyanin paytaxti haradir?", s51_c, s51_d);
	Sual s52("Yaponiyanin paytaxti haradir?", s52_c, s52_d);
	Sual s53("Gurcustanin paytaxti haradir?", s53_c, s53_d);
	Sual s54("C# dili necenci ilde yaradilmisdir?", s54_c, s54_d);
	Sual s55("Javascript dili necenci ilde yaradilmisdir?", s55_c, s55_d);
	Sual s56("C++ dili necenci ilde yaradilmisdir?", s56_c, s56_d);
	Sual s57("C.Ronaldo nun oynadigi milli komanda hansidir?", s57_c, s57_d);
	Sual s58("F.Kadioglu nun oynadigi milli komanda hansidir?", s58_c, s58_d);
	Sual s59("Portuqaliyanin pul vahidi hansidir?", s59_c, s59_d);
	Sual s50("Norvecin pul vahidi hansidir?", s50_c, s50_d);


	Sual* suallar5 = new Sual[say5]{ s51,s52,s53,s54,s55,s56,s57,s58,s59,s50 };



	quiz q5("  Umumi", suallar5, say5);


	return q5;

}




