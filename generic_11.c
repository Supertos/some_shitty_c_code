// ==================================== \\
// Supertos Industries ( 2012 - 2023 )
// [---------------------------------]
// >Author: Supertos, 2023
// >Version: 1.0
// [---------------------------------]
// Variant 32, 11
// ==================================== \\

#include <stdio.h>
#include <stdbool.h>

#define MIN_IN_INT 17
#define MAX_IN_INT 77

#define INT_BUFFER_SIZE 2

// *main()
//  Entry point of generic_11.c
int main() {
    
    char int_buffer[ INT_BUFFER_SIZE ];
    bool invalid_int = false;
    char cur_char = '-';
    int buffer_cur_pos = 0;

    while( cur_char != '\0' ) {
        cur_char = getchar();

        if( cur_char == ' ' || cur_char == '\0' ) {
            if( invalid_int || atoi( int_buffer ) < MIN_IN_INT || atoi( int_buffer ) > MAX_IN_INT ) { // AVOID USING '!' AT ALL COSTS! TOO SLOW!!!!
                invalid_int = false;

                int_buffer[0] = "\0"; // For some reason either C or Linux terminal don't care about null termination.
                int_buffer[1] = "\0";
                buffer_cur_pos = 0;
            }else{
                if( int_buffer[0] == '1' ) { // 18 66 76 54 31 20 61 27 50 43
                    switch( int_buffer[1] ) {
                        case '7':
                            printf( "Семнадцать " );
                        break;
                        case '8':
                            printf( "Восемнадцать " );
                        break;
                        case '9':
                            printf( "Девятнадцать " );
                        break;
                    }
                }else{
                    switch (int_buffer[0]) {
                        case '2':
                            printf( "Двадцать " );
                        break;
                        case '3':
                            printf( "Тридцать " );
                        break;
                        case '4':
                            printf( "Сорок " );
                        break;
                        case '5':
                            printf( "Пятьдесят " );
                        break;
                        case '6':
                            printf( "Шестьдесят " );
                        break;
                        case '7':
                            printf( "Семьдесят " );
                        break;
                        default:
                        break;
                    }
                    switch (int_buffer[1])
                    {
                        case '1':
                            printf( "Один " );
                        break;
                        case '2':
                            printf( "Два " );
                        break;
                        case '3':
                            printf( "Три " );
                        break;
                        case '4':
                            printf( "Четыре  " );
                        break;
                        case '5':
                            printf( "Пять " );
                        break;
                        case '6':
                            printf( "Шесть " );
                        break;
                        case '7':
                            printf( "Семь " );
                        break;
                        case '8':
                            printf( "Восемь " );
                        break;
                        case '9':
                            printf( "Девять " );
                        break;
                    }
                
                }

                int_buffer[0] = "\0"; // For some reason either C or Linux terminal don't care about null termination.
                int_buffer[1] = "\0";
                buffer_cur_pos = 0;
            }
                
        }else if( !invalid_int ){ // ALAS, UNAVOIDABLE
            if( isdigit( cur_char ) && buffer_cur_pos < INT_BUFFER_SIZE ) {
                int_buffer[ buffer_cur_pos ] = cur_char;
                int_buffer[ buffer_cur_pos+1 ] = '\0';
                buffer_cur_pos++;
            }else{
                invalid_int = true;
            }
        }
    }

    return 1;
}