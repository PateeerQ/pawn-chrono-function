# Pawn Chrono Function

Use this before using this: https://github.com/Southclaws/pawn-chrono

## Function

```pawn
// Function
IsDayIsToday(Timestamp:timestamp)
TimestampToDate(Timestamp:timestamp, &year = 0, &month = 0, &day = 0, &hour = 0, &minute = 0, &second = 0)
```

## Example How to use

IsDayIsToday

```pawn
#include <chrono.inc>
#include <pawn-chrono-function.inc>

main ()
{
    new
      Timestamp:time = Timestamp:Now();

    printf("%d", IsDayIsToday(time)); // Expected to return '1'
}
````

TimestampToDate

```pawn
#include <chrono.inc>
#include <pawn-chrono-function.inc>

main ()
{
        new 
  		days,
  		months,
  		years
  	;
  
  	getdate(years, months, days); // Native Pawn getdate function
  
  	new 
  		year, 
  		month, 
  		day, 
  		hour, 
  		minute, 
  		second
  	;
  	
  	TimestampToDate(Timestamp:Now(), year, month, day, hour, minute, second);
  
  	printf("%d = %d, %d = %d, %d = %d", years, year, months, month, days, day); // Expected to return same date
}
````
