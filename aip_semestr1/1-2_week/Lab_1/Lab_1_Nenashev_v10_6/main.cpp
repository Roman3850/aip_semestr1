#include <iostream>

/*Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость: а) одной
покупки из 300 г конфет и 400 г печенья; б) трех покупок, каждая из 2 кг печенья и
1 кг 800 г конфет.*/

int main()
{
   //Задание (а)
    float x,y;
   std::cin>>x>>y;
   std::cout<<x/1000*300+y/1000*400<<" task a"<<std::endl;
  //Задание(б)
std::cout<<3*(x*2+y/1000*1800)<<" task b"<<std::endl;;


}
