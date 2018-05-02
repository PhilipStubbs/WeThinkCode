#ifndef _ft_list.h
#define _ft_list.h

typedef struct    s_list
{
   struct s_list *next;
   void          *data;
}                 t_list;

#endif