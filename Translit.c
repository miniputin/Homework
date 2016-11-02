int main (int argc, char *argv[]) 
{ 
FILE *file; 
int c; 
int i; 
setlocale(LC_ALL, "Russian"); 
 
 
if(argc < 2) 
{ 
printf("Укажите имя файла.\n"); 
getch(); 
return 0; 
} 
 
file = fopen(argv[1], "r"); 
if(file == 0) 
{ 
printf("Файл %s не найден.\n", argv[1]); 
getch(); 
return 0; 
} 
 
while(true) 
{ 
c = fgetc(file); 
if(c == -1) 
break; 
switch(c) 
{ 
case 'A': printf("A"); 
break; 
case 'а': printf("а"); 
break; 
case 'Б': printf("B"); 
break; 
case 'б': printf("b"); 
break; 
case 'В': printf("V"); 
break; 
case 'в': printf("v"); 
break; 
case 'Г': printf("G"); 
break; 
case 'г': printf("g"); 
break; 
case 'Д': printf("D"); 
break; 
case 'д': printf("d"); 
break; 
case 'Е': printf("E"); 
break; 
case 'е': printf("e"); 
break; 
case 'Ё': printf("Jo"); 
break; 
case 'ё': printf("jo"); 
break; 
case 'Ж': printf("Zh"); 
break; 
case 'ж': printf("zh"); 
break; 
case 'З': printf("Z"); 
break; 
case 'з': printf("z"); 
break; 
case 'И': printf("I"); 
break; 
case 'и': printf("i"); 
break; 
case 'Й': printf("Jj"); 
break; 
case 'й': printf("jj"); 
break; 
case 'К': printf("K"); 
break; 
case 'к': printf("k"); 
break; 
case 'Л': printf("L"); 
break; 
case 'л': printf("l"); 
break; 
case 'М': printf("M"); 
break; 
case 'м': printf("m"); 
break; 
case 'Н': printf("N"); 
break; 
case 'н': printf("n"); 
break; 
case 'О': printf("O"); 
break; 
case 'о': printf("o"); 
break; 
case 'П': printf("P"); 
break; 
case 'п': printf("p"); 
break; 
case 'Р': printf("R"); 
break; 
case 'р': printf("r"); 
break; 
case 'С': printf("S"); 
break; 
case 'с': printf("s"); 
break; 
case 'Т': printf("T"); 
break; 
case 'т': printf("t"); 
break; 
case 'У': printf("U"); 
break; 
case 'у': printf("u"); 
break; 
case 'Ф': printf("F"); 
break; 
case 'ф': printf("f"); 
break; 
case 'Х': printf("Kh"); 
break; 
case 'х': printf("kh"); 
break; 
case 'Ц': printf("C"); 
break; 
case 'ц': printf("c"); 
break; 
case 'Ч': printf("Ch"); 
break; 
case 'ч': printf("ch"); 
break; 
case 'Ш': printf("Sh"); 
break; 
case 'ш': printf("sh"); 
break; 
case 'Щ': printf("Shh"); 
break; 
case 'щ': printf("shh"); 
break; 
case 'ъ': printf("''"); 
break; 
case 'ы': printf("y"); 
break; 
case 'ь': printf("'"); 
break; 
case 'Э': printf("Eh"); 
break; 
case 'э': printf("eh"); 
break; 
case 'Ю': printf("Ju"); 
break; 
case 'ю': printf("ju"); 
break; 
case 'Я': printf("Ja"); 
break; 
case 'я': printf("ja"); 
break; 
 
 
 
case 'A': printf("А"); 
break; 
case 'a': printf("а"); 
break; 
case 'B': printf("Б"); 
break; 
case 'b': printf("б"); 
break; 
case 'C': printf("С"); 
break; 
case 'c': printf("с"); 
break; 
case 'D': printf("Д"); 
break; 
case 'd': printf("д"); 
break; 
case 'E': printf("Е"); 
break; 
case 'e': printf("е"); 
break; 
case 'F': printf("Ф"); 
break; 
case 'f': printf("ф"); 
break; 
case 'G': printf("Г"); 
break; 
case 'g': printf("г"); 
break; 
case 'H': printf("Х"); 
break; 
case 'h': printf("х"); 
break; 
case 'I': printf("И"); 
break; 
case 'i': printf("и"); 
break; 
case 'J': printf("Ж"); 
break; 
case 'j': printf("ж"); 
break; 
case 'K': printf("К"); 
break; 
case 'k': printf("к"); 
break; 
case 'L': printf("Л"); 
break; 
case 'l': printf("л"); 
break; 
case 'M': printf("М"); 
break; 
case 'm': printf("м"); 
break; 
case 'N': printf("Н"); 
break; 
case 'n': printf("н"); 
break; 
case 'O': printf("О"); 
break; 
case 'o': printf("о"); 
break; 
case 'P': printf("П"); 
break; 
case 'p': printf("п"); 
break; 
case 'Q': printf("Кв"); 
break; 
case 'q': printf("кв"); 
break; 
case 'R': printf("Р"); 
break; 
case 'r': printf("р"); 
break; 
case 'S': printf("C"); 
break; 
case 's': printf("c"); 
break; 
case 'T': printf("Т"); 
break; 
case 't': printf("т"); 
break; 
case 'U': printf("У"); 
break; 
case 'u': printf("у"); 
break; 
case 'V': printf("В"); 
break; 
case 'v': printf("в"); 
break; 
case 'W': printf("В"); 
break; 
case 'w': printf("в"); 
break; 
case 'X': printf("Экс"); 
break; 
case 'x': printf("экс"); 
break; 
case 'Y': printf("Й"); 
break;
case 'y': printf("й"); 
break; 
case 'Z': printf("З"); 
break; 
case 'z': printf("З"); 
break; 
 
default: 
printf("%c",c);
} 
} 
fclose(file); 
getch(); 
return 0; 
}
