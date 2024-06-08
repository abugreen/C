// #include<stdio.h>

// //聲明類型
// struct Peo
// {
//     char name[20];
//     char tele[12];
//     char sex[5];
//     int high;
// };

// struct St
// {
//     struct Peo p;
//     int num;
//     float f;
// };

// void print2(struct Peo* sp)
// {
//     printf("%s %s %s %d\n",sp->name,sp->tele,sp->sex,sp->high);
// }

// int main()
// {
//     struct Peo p3 = {"張三","1555555","男",181}; //建立局部結構體變量
//     struct St s ={{"lisi","1888888","女",166},100,3.14f};

//     printf("%s %s %s %d\n",p3.name,p3.tele,p3.sex,p3.high);
//     printf("%s %s %s %d %d %f\n",s.p.name,s.p.tele,s.p.sex,s.p.high,s.num,s.f);

//     print2(&p3);

//     return 0;
// }