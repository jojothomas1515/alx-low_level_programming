#ifndef INC_0X0F_FUNCTION_POINTERS_0X0F_FUNCTION_POINTERS_3_CALC_H_
#define INC_0X0F_FUNCTION_POINTERS_0X0F_FUNCTION_POINTERS_3_CALC_H_
/*
 * Created by jojo on 11/22/22.
*/
#include <stdio.h>
#include <stdlib.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* INC_0X0F_FUNCTION_POINTERS_0X0F_FUNCTION_POINTERS_3_CALC_H_ */
