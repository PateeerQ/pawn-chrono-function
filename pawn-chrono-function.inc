/*

    Pawn Chrono Function
    by PateeerQ

*/

#if !defined _chrono_included
    #error '#include <chrono.inc> first!'
#endif

stock IsDayIsToday(Timestamp:timestamp)
{
    new
        Timestamp:today = Timestamp:Now(),
        output[2][32]
    ;

    TimeFormat(timestamp, HUMAN_DATE, output[0]);
    TimeFormat(today, HUMAN_DATE, output[1]);

    printf("%s - %s", output[0], output[1]);

    if(!strcmp(output[0], output[1], true))
        return 1;

    return 0;
}

stock TimestampToDate(Timestamp:timestamp, &year = 0, &month = 0, &day = 0, &hour = 0, &minute = 0, &second = 0)
{
    new
        output[64]
    ;

    TimeFormat(timestamp, YEAR, output);
    year = strval(output);

    TimeFormat(timestamp, MONTH, output);
    month = output[0] == '0' ? strval(output[1]) : strval(output);

    TimeFormat(timestamp, DAY_OF_MONTH, output);
    day = output[0] == '0' ? strval(output[1]) : strval(output);

    TimeFormat(timestamp, HOUR_24, output);
    hour = output[0] == '0' ? strval(output[1]) : strval(output);

    TimeFormat(timestamp, MINUTE, output);
    minute = output[0] == '0' ? strval(output[1]) : strval(output);

    TimeFormat(timestamp, SECOND, output);
    second = output[0] == '0' ? strval(output[1]) : strval(output);
    return 1;
}