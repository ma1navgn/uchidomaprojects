#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int ch;
    printf("Приветствую вас в игре, АБСОЛЮТНО ТОЧНО не имеющей ничего общего с реальной жизнью!\n");
    printf("Все совпадения случайны, а персонажи вымышлены.\nПриятной игры!\n.\n.\n.\n");
    printf("Выберите персонажа:\n1 - Алексей Овальный, телефонный аферист \n2 - Максим Бабац, блогер-неудачник\n");
    scanf("%d", &ch);
    if (ch == 1) {
        system("cls");
        printf("Ваш персонаж - Алексей Овальный\n");
        printf("Утро. Вы можете похвалить себя, вы только что пережили отравление.\nУхх, эта ночка была жаркой. Возможно, то буррито было лишним?\n");
        printf("Но все же, вам нужно хоть что-то сделать за сегодня...\n");
        printf("1 - придется пойти на работу\n2 - я останусь дома, вчерашняя ночь выбила меня из сил\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Вы приехали в офис ФБК(Фонд Букмекерских Контор), но вот неудача!\nТам вас ожидал наряд ФСБ(Фонд Содружеств Банков), и вас вежливо попросили пройти с ними!\nПлохая концовка");
                break;
            case 2:
                system("cls");
                printf("Вы написали начальнику, что взяли больничный.\nНо потом резко вспомнили, что выйти все-таки придется: вам нужны продукты.\n");
                printf("В вашем холодильнике осталось только протухшее молоко...\nЧто будете делать?\n");
                printf("1 - схожу в магазин\n2 - пойду к своему другу\n3 - буду довольствоваться тем, что имею\n");
                scanf("%d", &ch);
                switch (ch) {
                    case 1:
                        system("cls");
                        printf("Вы решили сходить в магазин, браво! Когда вы пришли к своему любимому магазину\nто увидели, что его закрыли.\n");
                        printf("Немного пообщавшись с очевидцами, вы узнали, что его закрыли, потому что все продавцы-мужчины куда-то пропали.\nСтранно, не правда ли?\n");
                        printf("Куда пойдем? Ближайший магазин в двух километрах отсюда.\n1 - придется идти туда...\n2 - закажу доставку из ресторана\n");
                        scanf("%d", &ch);
                        switch (ch) {
                            case 1:
                                system("cls");
                                printf("Вы все-таки дошли до шестерочки! Но, к сожалению, выбились из сил и упали замертво.\nНикто не вызвал скорую, так как подумали, что вы бомж.\n");
                                printf("Плохая концовка!");
                                break;
                            case 2:
                                system("cls");
                                printf("Вы вернулись домой, прокляли все, что могли и заказали доставку\nиз своего любимого ресторана 'Невкусно, но ешьте'.\n");
                                printf("Наконец-то, вы поели! Теперь можно и на боковую, несмотря на то, что сейчас полдень.\n Вы хорошо поработали сегодня!\n");
                                printf("Хорошая концовка!");
                                break;
                        }
                    case 2:
                        system("cls");
                        printf("Вы позвонили своему другу Яше Ильину, но он отказался с вами встречаться.\nСо злости, вы кинули телефон в окно, но, вспомнив, что вы купили его в кредит,\nпрыгнули за ним.\n");
                        printf("Плохая концовка!");
                        break;
                    case 3:
                        system("cls");
                        printf("Вы решили выпить молоко из холодильника, поверив, что два года просрочки ничего не изменят.\nПравильно, все изменят два дня просрОчки, но через букву а.\n");
                        printf("Плохая концовка!");
                        break;
                }
                break;
        }
    }
    else if (ch == 2) {
        system("cls");
        printf("Ваш персонаж - Максим Бабац\n");
        printf("Сегодня вы записали новый ролик 'Случай в казино: Кто прав, а кто дифичент?'.\nМне кажется, вы неплохо поработали. Что будете делать сейчас?\n");
        printf("1 - выйду на улицу \n2 - лягу на кровать и позалипаю в телефоне\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                system("cls");
                printf("Вы решили выйти на улицу впервые за несколько лет. Впечатляюще!\n(Но мне кажется, стоило хотя бы помыться)\n");
                printf("Куда вы хотите пойти?\n1 - думаю, прогуляюсь по набережной\n2 - хочу на болотную площадь\n3 - я уеду жить в лондооон");
                scanf("%d", &ch);
                switch (ch) {
                    case 1:
                        system("cls");
                        printf("Вы замечательно прошлись! Когда вы пришли домой,\nвы увидели, что ваше видео набрало необъяснимое для вас кол-во просмотров - 115!\n");
                        printf("Теперь вы звезда, поздравляю!\nХорошая концовка!");
                        break;
                    case 2:
                        system("cls");
                        printf("Какой ужас! На площади было много народу, и какие-то непонятные люди в форме\n");
                        printf("запихали вас в машину и куда-то увезли!\nПлохая концовка!");
                        break;
                    case 3:
                        system("cls");
                        printf("Вы твердо решили, что уедете жить в Лондон,\nно потом поскользнулись на банановой шкуре, упали и ударились головой.\n");
                        printf("Вы остались слабоумным на всю жизнь!\nПлохая концовка!");
                        break;
                }
                break;
            case 2:
                system("cls");
                printf("Упс! Вы не меняли провод 5 лет, и он достаточно износился.\nК сожалению, произошло короткое замыкание, и вас ударило током.\n");
                printf("Ваш бойфренд Илья Своламов не успел вас спасти. Вы скончались.\nПлохая концовка!");
                break;
        }
    }
    else {
        printf("Нужно ввести 1 или 2.\n Начните игру заново.");
    }
    return 0;
}   
