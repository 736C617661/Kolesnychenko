#include <stdio.h>

int main() {
int episode_number;
char *title;
char *premiere_date;

while (1) {
printf("Введіть номер серії серіала «El Candidato»: ");
scanf("%d", &episode_number);

switch (episode_number) {
case 0:
title = "Trailer";
premiere_date = "03-07-2020";
break;
case 1:
title = "Серія 1";
premiere_date = "17-07-2020";
break;
case 2:
title = "Серія 2";
premiere_date = "17-07-2020";
break;
case 3:
title = "Серія 3";
premiere_date = "17-07-2020";
break;
case 4:
title = "Серія 4";
premiere_date = "17-07-2020";
break;
case 5:
title = "Серія 5";
premiere_date = "17-07-2020";
break;
case 6:
title = "Серія 6";
premiere_date = "17-07-2020";
break;
case 7:
title = "Серія 7";
premiere_date = "17-07-2020";
break;
case 8:
title = "Серія 8";
premiere_date = "17-07-2020";
break;
case 9:
title = "Серія 9";
premiere_date = "17-07-2020";
break;
case 10:
title = "Серія 10";
premiere_date = "17-07-2020";
break;

default:
printf("Серію з номером %d не знайдено в даних, спробуйте ще.\n", episode_number);
continue;
}

printf("%d: %s (Дата прем'єри: %s)\n", episode_number, title, premiere_date);
}

return 0;
}

    printf("%d: %s (Дата прем'єри: %s)\n", episode_number, title, premiere_date);

    return 0;
}
