
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
 if(argc > 1)
 {
  FILE *sf;
  unsigned char ch;
  if((sf = fopen(argv[1], "r")) == NULL)
  {
   printf("Error openning file \"%s\"!\n", argv[1]);
   exit(1);
  }
  ch = getc(sf);
  while(feof(sf) == 0)
  {
   switch(ch)
   {
    case 224: //à
     putchar(97); //a
     ch = getc(sf);
     break;
    case 225: //á
     putchar(98); //b
     ch = getc(sf);
     break;
    case 226: //â
     putchar(118); //v
     ch = getc(sf);
     break;
    case 227: //ã
     putchar(103); //g
     ch = getc(sf);
     break;
    case 228: //ä
     putchar(100); //d
     ch = getc(sf);
     break;
    case 229: //å
     putchar(101); //e
     ch = getc(sf);
     break;
    case 184: //¸
     putchar(106); //j
     putchar(111); //o
     ch = getc(sf);
     break;
    case 230: //æ
     putchar(122); //z
     putchar(104); //h
     ch = getc(sf);
     break;
    case 231: //ç
     putchar(122); //z
     ch = getc(sf);
     break;
    case 232: //è
     putchar(105); //i
     ch = getc(sf);
     break;
    case 233: //é
     putchar(106); //j
     putchar(106); //j
     ch = getc(sf);
     break;
    case 234: //ê
     putchar(107); //k
     ch = getc(sf);
     break;
    case 235: //ë
     putchar(108); //l
     ch = getc(sf);
     break;
    case 236: //ì
     putchar(109); //m
     ch = getc(sf);
     break;
    case 237: //í
     putchar(110); //n
     ch = getc(sf);
     break;
    case 238: //î
     putchar(111); //o
     ch = getc(sf);
     break;
    case 239: //ï
     putchar(112); //p
     ch = getc(sf);
     break;
    case 240: //ð
     putchar(114); //r
     ch = getc(sf);
     break;
    case 241: //ñ
     putchar(115); //s
     ch = getc(sf);
     break;
    case 242: //ò
     putchar(116); //t
     ch = getc(sf);
     break;
    case 243: //ó
     putchar(117); //u
     ch = getc(sf);
     break;
    case 244: //ô
     putchar(102); //f
     ch = getc(sf);
     break;
    case 245: //õ
     putchar(107); //k
     putchar(104); //h
     ch = getc(sf);
     break;
    case 246: //ö
     putchar(99); //c
     ch = getc(sf);
     break;
    case 247: //÷
     putchar(99); //c
     putchar(104); //h
     ch = getc(sf);
     break;
    case 248: //ø
     putchar(115); //s
     putchar(104); //h
     ch = getc(sf);
     break;
    case 249: //ù
     putchar(115); //s
     putchar(104); //h
     putchar(104); //h
     ch = getc(sf);
     break;
    case 250: //ú
     putchar(34); //"
     ch = getc(sf);
     break;
    case 251: //û
     putchar(121); //y
     ch = getc(sf);
     break;
    case 252: //ü
     putchar(39); //'
     ch = getc(sf);
     break;
    case 253: //ý
     putchar(101); //e
     putchar(104); //h
     ch = getc(sf);
     break;
    case 254: //þ
     putchar(106); //j
     putchar(117); //u
     ch = getc(sf);
     break;
    case 255: //ÿ
     putchar(106); //j
     putchar(97); //a
     ch = getc(sf);
     break;
    case 192: //À
     putchar(65); //A
     ch = getc(sf);
     break;
    case 193: //Á
     putchar(66); //B
     ch = getc(sf);
     break;
    case 194: //Â
     putchar(86); //V
     ch = getc(sf);
     break;
    case 195: //Ã
     putchar(71); //G
     ch = getc(sf);
     break;
    case 196: //Ä
     putchar(68); //D
     ch = getc(sf);
     break;
    case 197: //Å
     putchar(69); //E
     ch = getc(sf);
     break;
    case 168: //¨
     putchar(74); //J
     putchar(111); //o
     ch = getc(sf);
     break;
    case 198: //Æ
     putchar(90); //Z
     putchar(104); //h
     ch = getc(sf);
     break;
    case 199: //Ç
     putchar(90); //Z
     ch = getc(sf);
     break;
    case 200: //È
     putchar(73); //I
     ch = getc(sf);
     break;
    case 201: //É
     putchar(74); //J
     putchar(106); //j
     ch = getc(sf);
     break;
    case 202: //Ê
     putchar(75); //K
     ch = getc(sf);
     break;
    case 203: //Ë
     putchar(76); //L
     ch = getc(sf);
     break;
    case 204: //Ì
     putchar(77); //M
     ch = getc(sf);
     break;
    case 205: //Í
     putchar(78); //N
     ch = getc(sf);
     break;
    case 206: //Î
     putchar(79); //O
     ch = getc(sf);
     break;
    case 207: //Ï
     putchar(80); //P
     ch = getc(sf);
     break;
    case 208: //Ð
     putchar(82); //R
     ch = getc(sf);
     break;
    case 209: //Ñ
     putchar(83); //S
     ch = getc(sf);
     break;
    case 210: //Ò
     putchar(84); //T
     ch = getc(sf);
     break;
    case 211: //Ó
     putchar(85); //U
     ch = getc(sf);
     break;
    case 212: //Ô
     putchar(70); //F
     ch = getc(sf);
     break;
    case 213: //Õ
     putchar(75); //K
     putchar(104); //h
     ch = getc(sf);
     break;
    case 214: //Ö
     putchar(67); //C
     ch = getc(sf);
     break;
    case 215: //×
     putchar(67); //C
     putchar(104); //h
     ch = getc(sf);
     break;
    case 216: //Ø
     putchar(83); //S
     putchar(104); //h
     ch = getc(sf);
     break;
    case 217: //Ù
     putchar(83); //S
     putchar(104); //h
     putchar(104); //h
     ch = getc(sf);
     break;
    case 218: //Ú
     putchar(34); //"
     ch = getc(sf);
     break;
    case 219: //Û
     putchar(89); //Y
     ch = getc(sf);
     break;
    case 220: //Ü
     putchar(39); //'
     ch = getc(sf);
     break;
    case 221: //Ý
     putchar(69); //E
     putchar(104); //h
     ch = getc(sf);
     break;
    case 222: //Þ
     putchar(74); //J
     putchar(117); //u
     ch = getc(sf);
     break;
    case 223: //ß
     putchar(74); //J
     putchar(97); //a
     ch = getc(sf);
     break;
    case 97: //a
     putchar(224); //à
     ch = getc(sf);
     break;
    case 98: //b
     putchar(225); //á
     ch = getc(sf);
     break;
    case 99: //c
     ch = getc(sf);
     if(ch == 104) //h
     {
      putchar(247); //÷
      ch = getc(sf);
     }
     else
     {
      putchar(246); //ö
     }
     break;
    case 100: //d
     putchar(228); //ä
     ch = getc(sf);
     break;
    case 101: //e
     ch = getc(sf);
     if(ch == 104) //h
     {
      putchar(253); //ý
      ch = getc(sf);
     }
     else
     {
      putchar(229); //å
     }
     break;
    case 102: //f
     putchar(244); //ô
     ch = getc(sf);
     break;
    case 103: //g
     putchar(227); //ã
     ch = getc(sf);
     break;
    case 105: //i
     putchar(232); //è
     ch = getc(sf);
     break;
    case 106: //j
     ch = getc(sf);
     if(ch == 97) //a
     {
      putchar(255); //ÿ
      ch = getc(sf);
     }
     else if(ch == 106) //j
     {
      putchar(233); //é
      ch = getc(sf);
     }
     else if(ch == 111) //o
     {
      putchar(184); //¸
      ch = getc(sf);
     }
     else if(ch == 117) //u
     {
      putchar(254); //þ
      ch = getc(sf);
     }
     else
     {
      putchar(ch); //
     }
     break;
    case 107: //k
     ch = getc(sf);
     if(ch == 104) //h
     {
      putchar(245); //õ
      ch = getc(sf);
     }
     else
     {
      putchar(234); //ê
     }
     break;
    case 108: //l
     putchar(235); //ë
     ch = getc(sf);
     break;
    case 109: //m
     putchar(236); //ì
     ch = getc(sf);
     break;
    case 110: //n
     putchar(237); //í
     ch = getc(sf);
     break;
    case 111: //o
     putchar(238); //î
     ch = getc(sf);
     break;
    case 112: //p
     putchar(239); //ï
     ch = getc(sf);
     break;
    case 114: //r
     putchar(240); //ð
     ch = getc(sf);
     break;
    case 115: //s
     ch = getc(sf);
     if(ch == 104) //h
     {
      ch = getc(sf);
      if(ch == 104) //h
      {
       putchar(249); //ù
       ch = getc(sf);
      }
      else
      {
       putchar(248); //ø
      }
     }
     else
     {
      putchar(241); //ñ
     }
     break;
    case 116: //t
     putchar(242); //ò
     ch = getc(sf);
     break;
    case 117: //u
     putchar(243); //ó
     ch = getc(sf);
     break;
    case 118: //v
     putchar(226); //â
     ch = getc(sf);
     break;
    case 121: //y
     putchar(251); //û
     ch = getc(sf);
     break;
    case 122: //z
     ch = getc(sf);
     if(ch == 104) //h
     {
      putchar(230); //æ
      ch = getc(sf);
     }
     else
     {
      putchar(231); //ç
     }
     break;
    case 34: //"
     putchar(250); //ú
     ch = getc(sf);
     break;
    case 39: //'
     putchar(252); //ü
     ch = getc(sf);
     break;
    case 65: //A
     putchar(192); //À
     ch = getc(sf);
     break;
    case 66: //B
     putchar(193); //Á
     ch = getc(sf);
     break;
    case 67: //C
     ch = getc(sf);
     if(ch == 104) //h
     {
      putchar(215); //×
      ch = getc(sf);
     }
     else
     {
      putchar(214); //Ö
     }
     break;
    case 68: //D
     putchar(196); //Ä
     ch = getc(sf);
     break;
    case 69: //E
     ch = getc(sf);
     if(ch == 104) //h
     {
      putchar(221); //Ý
      ch = getc(sf);
     }
     else
     {
      putchar(197); //Å
     }
     break;
    case 70: //F
     putchar(212); //Ô
     ch = getc(sf);
     break;
    case 71: //G
     putchar(195); //Ã
     ch = getc(sf);
     break;
    case 73: //I
     putchar(200); //È
     ch = getc(sf);
     break;
    case 74: //J
     ch = getc(sf);
     if(ch == 97) //a
     {
      putchar(223); //ß
      ch = getc(sf);
     }
     else if(ch == 106) //j
     {
      putchar(201); //É
      ch = getc(sf);
     }
     else if(ch == 111) //o
     {
      putchar(168); //¨
      ch = getc(sf);
     }
     else if(ch == 117) //u
     {
      putchar(222); //Þ
      ch = getc(sf);
     }
     else
     {
      putchar(ch); //
     }
     break;
    case 75: //K
     ch = getc(sf);
     if(ch == 104) //h
     {
      putchar(213); //Õ
      ch = getc(sf);
     }
     else
     {
      putchar(202); //Ê
     }
     break;
    case 76: //L
     putchar(203); //Ë
     ch = getc(sf);
     break;
    case 77: //M
     putchar(204); //Ì
     ch = getc(sf);
     break;
    case 78: //N
     putchar(205); //Í
     ch = getc(sf);
     break;
    case 79: //O
     putchar(206); //Î
     ch = getc(sf);
     break;
    case 80: //P
     putchar(207); //Ï
     ch = getc(sf);
     break;
    case 82: //R
     putchar(208); //Ð
     ch = getc(sf);
     break;
    case 83: //S
     ch = getc(sf);
     if(ch == 104) //h
     {
      ch = getc(sf);
      if(ch == 104) //h
      {
       putchar(217); //Ù
       ch = getc(sf);
      }
      else
      {
       putchar(216); //Ø
      }
     }
     else
     {
      putchar(209); //Ñ
     }
     break;
    case 84: //T
     putchar(210); //Ò
     ch = getc(sf);
     break;
    case 85: //U
     putchar(211); //Ó
     ch = getc(sf);
     break;
    case 86: //V
     putchar(194); //Â
     ch = getc(sf);
     break;
    case 89: //Y
     putchar(219); //Û
     ch = getc(sf);
     break;
    case 90: //Z
     ch = getc(sf);
     if(ch == 104) //h
     {
      putchar(198); //Æ
      ch = getc(sf);
     }
     else
     {
      putchar(199); //Ç
     }
     break;
    default:
     putchar(ch);
     ch = getc(sf);
     break;
   }
  }
  fclose(sf);
  printf("\n");
 }
 else
 {
  printf("The source file is not specified!\n");
  exit(1);
 }
 return 0;
}
