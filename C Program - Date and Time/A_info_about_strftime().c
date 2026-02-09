/*

    The time.h header defines four variable types-
    1.size_t: This is the unsigned integral type and is the result of the sizeof keyword.
    2.clock_t: This is a type suitable for storing the processor time.
    3.time_t: This is a type suitable for storing the calendar time.
    4.struct tm: This is a structure used to hold the time and date.


    
    The syntax of strftime() is as shown below;
    size_t strftime(char *s,size_t max,const char *format,const struct tm *tm);

    Some format specifiers for strftime() are shown as follows:
    %x = Preferred date representation
    %I = Hour as a decimal number ( 12-hour clock).
    %M = Minutes in decimal ranging from 00 for the 59.
    %p = Either "AM" or "PM" according to the given time value, etc.
    %a = Abbreviated weekday name
    %^a = Abbreviated weekday name in capital letters.
    %A = Full weekday name
    %b = Abbreviated month name.
    %^b = Abbreviated month name in capital letters.
    %B = Full month name March.
    %c = Date and Time representation.
    %d = Day of the month (01-31).
    %H = Hour in 24h format(00-23).
    %I = Hour in 12h format(00-12).
    %j = Day of the year (001-366).
    %m = Month as a decimal number (01-12).
    %M = Minute (00-59).
*/