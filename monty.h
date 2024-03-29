#define _POSIX_C_SOURCE 200809L

#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
        char *arg;
        FILE *file;
        char *content;
        int lifi;
}  bus_t;
extern bus_t bus;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
int x_exe(char *content, stack_t **fore, unsigned int marker, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int counter);
void m_swap_(stack_t **fore, unsigned int marker);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void s_sub_(stack_t **fore, unsigned int marker);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void aka_rotl_(stack_t **fore, unsigned int marker);
void ak_rotr_(stack_t **fore, __attribute__((unused)) unsigned int marker);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void st_stack_(stack_t **fore, unsigned int marker);

void aka_push_(stack_t **fore, unsigned int marker);
void lp_pall_(stack_t **fore, unsigned int marker);
void aka_pint_(stack_t **fore, unsigned int marker);
int x_exe(char *content, stack_t **fore, unsigned int marker, FILE *file);


void aka_pop_(stack_t **fore, unsigned int marker);
void m_swap_(stack_t **fore, unsigned int marker);
void f_add(stack_t **head, unsigned int counter);
void kil_nop_(stack_t **fore, unsigned int marker);
void s_sub_(stack_t **fore, unsigned int marker);
void wit_div_(stack_t **fore, unsigned int marker);
void str_mul_(stack_t **fore, unsigned int marker);
void mk_mod_(stack_t **fore, unsigned int marker);
void st_pchar_(stack_t **fore, unsigned int marker);
void aka_pstr_(stack_t **fore, unsigned int marker);
void aka_rotl_(stack_t **fore, unsigned int marker);
void ak_rotr_(stack_t **fore, __attribute__((unused)) unsigned int marker);
void _ad_nod(stack_t **fore, int ok);
void the_queue_(stack_t **fore, int edd);
void aka_queue_(stack_t **fore, unsigned int marker);
void st_stack_(stack_t **fore, unsigned int marker);

#endif	/*functions end*/

