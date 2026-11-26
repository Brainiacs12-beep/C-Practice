# C-Practice

Nourishing the roots  all from the depth

Rules for Naming Variables
-The first character must be an alphabet or underscore (_).
-Numbers are allowed, but not as the firstcharacter.
-Only underscores are allowed as specialcharacters.
-Variable names are case-sensitive.

## This enhances the readability of the program

Data types
int- usually 4 bytes(32 bits)
char- 1 byte
float - 4bytes

*keywords*
auto   double   int   struct
break  long  else   switch
case    return   enum   typedef
char     register   extern    union
const   short   float   unsigned
continue    signed     for     void
default     sizeof   goto     volatile
do      static       if     while

## Basic structure of C program

Every program starts execution from the main()
function.
02
Every statement must end with a semicolon.
03
C language instructions are case-sensitive.
04
Instructions execute in the same order in which
they are written

//Escape sequences in C are special character combinations that start with a backslash () and represent characters that are hard to type or can't be written directly in a string or character literal.

Here are the most common ones:

\n newline (moves to the next line)
\t horizontal tab
\\ a literal backslash
\' single quote
\" double quote
\0 null character (marks the end of a C string)
\r carriage return
\a alert (beep)
\b backspace
\f form feed
\v vertical tab
\? question mark (used to avoid trigraph issues in old code)

//Today i practice the C problem set

1. Area of rectangle
2. Volume of cylinder
3. Temperature conversion
4. Simple interest

//code snippet
A code snippet is a short piece of code, usually a few lines, that shows how to do one specific thing. People share snippets to illustrate an idea, answer a question, or reuse a common task without writing it from scratch.

//issue1:
I set up the Code Runner extension to compile and run your C programs in the terminal, using commands that work in PowerShell.

Found the cause: The Output panel was using a broken command that put a trailing \ in your folder path, so gcc never ran.
Changed the settings: In VS Code's user settings, I added a Code Runner rule for C that compiles the file and then runs the .exe.
Ran in the terminal: The runInTerminal setting lets the program wait for your typed input, which scanf needs.
this is done in json file of preferences with code runner code

//chapter2

learn the types of instructions

1. Type declare instruction-
 declare the variable
2. Arithmetic instruction- perform mathematical operations
3. Control instruction- determines the flow of control
