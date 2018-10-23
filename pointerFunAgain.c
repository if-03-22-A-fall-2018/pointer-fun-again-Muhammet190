#include <stdio.h>
#define  LENGTH 64

struct PlayStruct
{
int int_value;
double double_value;
char a_string [LENGTH];
};

void print_struct(struct PlayStruct ps,struct PlayStruct* pps);
void change_struct(struct PlayStruct ps, struct PlayStruct* pps);

int main(int argc, char const *argv[]) {

  struct PlayStruct play_struct = {17, 15.12, "Adim Azrail"};
  struct PlayStruct* play_struct_pointer = &play_struct;

  print_struct(play_struct,play_struct_pointer);
  change_struct(play_struct,play_struct_pointer);
  print_struct(play_struct,play_struct_pointer);


}
void change_struct(struct PlayStruct ps, struct PlayStruct* pps)
{

     ps.int_value = 18;
     ps.double_value = 16.12;
     ps.a_string = "Adim Berkcan";
    *pps = ps;
}

void print_struct(struct PlayStruct ps,struct PlayStruct* pps)
{
  printf("Values of struct ps: %d, %lf, %s  \n",ps.int_value,ps.double_value,ps.a_string);

  printf("Values of struct ps: %d, %lf, %s  \n",pps->int_value,pps->double_value,pps->a_string);
}
