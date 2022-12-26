#include "main.h"
void noArg();

int main (int argc, char *argv[]){
    noArg();
    const char* short_options = "eivclnhsfo";

    const struct option long_options[] = {
            { "regexp", no_argument, NULL, 'e' },
            { "ignore-case", no_argument, NULL, 'i' },
            { "invert-match", no_argument, NULL, 'v' },
            { "count", no_argument, NULL, 'c' },
            { "files-with-matches", no_argument, NULL, 'l' },
            { "line-number", no_argument, NULL, 'n' },
            { "no-filename", no_argument, NULL, 'h' },
            { "no-messages", no_argument, NULL, 's' },
            { "file", no_argument, NULL, 'f' },
            { "only-matching", no_argument, NULL, 'o' },
            { NULL, 0, NULL, 0 }
    };

    int rez;
    int option_index;

    while ((rez=getopt_long(argc,argv,short_options,
                            long_options,&option_index))!=-1)
    {
        switch(rez)
        {
            case 'e': {
                printf("Шаблон\n");
                break;
            };
            case 'i': {
                printf("Игнорирует различия регистра.\n");
                break;
            };

            case 'v': {
                printf("Инвертирует смысл поиска соответствий.\n");
                break;
            };
            case 'c': {
                printf("Выводит только количество совпадающих строк.\n");
                break;
            };
            case 'l': {
                printf("Выводит только совпадающие файлы.\n");
                break;
            };
            case 'n': {
                printf("Предваряет каждую строку вывода номером строки из файла ввода. \n");
                break;
            };
            case 'h': {
                printf("Выводит совпадающие строки, не предваряя их именами файлов.\n");
                break;
            };
            case 's': {
                printf("Подавляет сообщения об ошибках о несуществующих или нечитаемых файлах.\n");
                break;
            };
            case 'f': {
                printf("Получает регулярные выражения из файла.\n");
                break;
            };
            case 'o': {
                printf("Печатает только совпадающие (непустые) части совпавшей строки. \n");
                break;
            };
            case '?': default: {
                printf("found unknown option\n");
                break;
            };
        };
    };
    return 0;
};

