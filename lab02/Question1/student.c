
// Question1/Student.c
// ------------------------------------------------------------
// CS Lab - Valid Parentheses (STACK PRACTICE)
//
// Task:
// Implement `isValid(const char *s)`.
// Given a string s containing only: () {} []
// return true if it is a valid parentheses string, else false.
//
// Valid rules:
// 1) Open brackets must be closed by the same type of brackets.
// 2) Open brackets must be closed in the correct order.
// 3) Every close bracket has a corresponding open bracket.
//
// Examples:
//   s = "()"        -> true
//   s = "()[]{}"    -> true
//   s = "(]"        -> false
//   s = "([)]"      -> false
//   s = "{[]}"      -> true
//   s = ""          -> true   (empty string is valid)
//
// How to run tests (from the folder containing the Makefile):
//   make run1
// ------------------------------------------------------------

#include "Student.h"
#include <stdbool.h>
#include <stddef.h>  // size_t
#include <string.h>  // strlen

#define StackSize 100

typedef struct {
        char arr[StackSize];
        int top;
        } Stack;

void initialize(Stack *stack){
        stack->top = -1;}

void push(Stack *stack, char value) {stack->arr[++stack->top] = value;}

char pop(Stack *stack) {char popped = stack->arr[stack->top]; stack->top--; return popped;}

bool isEmpty(Stack *stack) {return stack->top == -1;}

char peek(Stack *stack) {return stack->arr[stack->top];}

bool isValid(const char *s) {
    // TODO: Implement using a stack.
    //
    // Recommended approach:
    // - Use a char array as a stack to store opening brackets.
    // - Scan the string from left to right:
    //   - If you see an opening bracket, push it.
    //   - If you see a closing bracket:
    //       * stack must not be empty
    //       * top of stack must match the closing bracket type
    //       * then pop
    // - At the end, stack must be empty.
    //
    // Helpful matching pairs:
    //   ')' matches '('
    //   ']' matches '['
    //   '}' matches '{'void push(Stack *stack, char '('){return;}
    //
    // Corner cases:
    // - s == NULL -> return false
    // - odd length strings can’t be valid 
    //
    // Note:
    // - Input contains only bracket characters, per the prompt.
	int Size = strlen(s);
	int a=0;
	Stack stack;
	initialize(&stack);
	if(s == NULL) {return false;}
	for(a = 0; a < Size; a++)
	{
		if(s[a] == '(')
		{
			push(&stack, '(');
		}
		if(s[a] == '[')
                {
                        push(&stack, '[');
                }
		if(s[a] == '{')
                {
                        push(&stack, '{');
                }
		if(s[a] == ')')
                {
                        if(isEmpty(&stack)) {return false;}
			else if(peek(&stack) != '(') {return false;}
			else {pop(&stack);}
                }
		if(s[a] == '}')
                {
                        if(isEmpty(&stack)) {return false;}
                        else if(peek(&stack) != '{') {return false;}
                        else {pop(&stack);}
                }
		if(s[a] == ']')
                {
                        if(isEmpty(&stack)) {return false;}
                        else if(peek(&stack) != '[') {return false;}
                        else {pop(&stack);}
                }
	}
	if(!isEmpty(&stack)) {return false;}
    return true; // placeholder
}
