#include <string>
void test(std::string input, std::string expect);
void testloader(){ //insert test cases here
/*0*/ test( "16d9d4fbd", "ethanol:30" )
/*1*/ test( "df", "e:5" )
/*2*/ test( "ad7", "c:10" )
/*3*/ test( "870dcb", "t:6" )
/*4*/ test( "880f63d", "test:15" )
/*5*/ test( "a57cbe56", "cat:17" )
/*6*/ test( "36abef2", "roll:23" )
/*7*/ test( "ad576cd8", "chant:25" )
/*8*/ test( "3e2a3db4fb9", "rails:25" )
/*9*/ test( "51aa3b4c2", "eeeteee:18" )
/*10*/ test( "ad5f1a07affe", "charset:31" )
/*11*/ test( "4ab8a86d7afb0f", "slideshare:42" )
/*12*/ test( "ac4b0b9faef", "doctor:30" )
/*13*/ test( "cafebabe", "nlh:17" )
/*14*/ test( "43e7", "sra:15" )
/*15*/ test( "53e7", "eera:15" )
/*16*/ test( "86cf", "tera:16" )
/*17*/ test( "b6cf", "hon:15" )
/*18*/ test( "0", "*invalid*" )
/*19*/ test( "c", "*invalid*" )
/*20*/ test( "d", "*invalid*" )
/*21*/ test( "e", "*invalid*" )
/*22*/ test( "babecafe", "*invalid*" )
/*23*/ test( "8d", "*invalid*" )
/*24*/ test( "ad", "*invalid*" )
/*25*/ test( "af", "*invalid*" )
/*26*/ test( "ab6e0", "*invalid*" )
/*27*/ test( "a4371", "*invalid*" )
/*28*/ test( "a4371", "*invalid*" )
/*29*/ test( "96e3", "*invalid*" )
/*30*/ test( "0dc71", "*invalid*" )
/*31*/ test( "2a9f51", "*invalid*" )
/*32*/ test( "a43fb2", "*invalid*" )
/*33*/ test( "ab6e75", "*invalid*" )
/*34*/ test( "a5dcfa", "*invalid*" )
/*35*/ test( "ca97", "*invalid*" )
/*36*/ test( "6822dcb", "*invalid*" )
}