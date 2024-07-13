#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int intans;
    int sentakusi; // システムの情報を表示するプログラム
    char answer[1024]; // コマンドを選ぶ選択肢 char配列なのは数字以外の文字が入力されてもバグを起こさないようにするため
    char yesno[1024]; // こちらは最後にもう一度選ぶかどうかをyかnで答える
    do {
        do {
            printf("#######  #######  #     #  #######     #     ##    #  #######  #######\n");
            printf("#        #        #     #  #     #     #     # #   #  #        #     #\n");
            printf("#######  #        #######  #     #     #     #  #  #  #######  #     #\n");
            printf("#        #        #     #  #     #     #     #   # #  #        #     #\n");
            printf("#######  #######  #     #  #######     #     #    ##  #        #######\n");
            sentakusi = 0;
            // 選択肢を表示
            fputs("\n\n\n",stdout);
            printf("1:dmesg as superuser\n2:lsb_release -a\n3:lspci\n4:uname -a\n5:neofetch");
            fputs("\n",stdout);
            //プロンプトを表示
            printf("選んでください> ");
            fflush(stdout); // 場合によって表示されないため fflush()を使用
    
            scanf("%1023s%*[^\n]%*c",answer); // 安全第一
    
            if (strcmp(answer,"1") == 0 || strcmp(answer,"2") == 0 || strcmp(answer,"3") == 0 || strcmp(answer,"4") == 0 || strcmp(answer,"5") ==0) {
                ; // Do nothing
            } else {
                printf("1~5以外を指定しています\n");
                sentakusi = 1;
            }
            } while(sentakusi != 0);
        intans = atoi(answer);

        switch(intans) {
            case 1:
                system("sudo dmesg");
                break;
            case 2:
                system("lsb_release -a");
                break;
            case 3:
                system("lspci");
                break;
            case 4:
                system("uname -a");
                break;
            case 5:
                system("neofetch");
                break;
            default:
                fputs("Unknown error!! \n",stderr);
                break;
        }

        printf("\n\nもう一度選びますか?(Y or n)> ");
        scanf("%1023s%*[^\n]%*c",yesno);
        fputs("\n",stdout);
    } while(strcmp(yesno,"n"));

    return 0;
}
