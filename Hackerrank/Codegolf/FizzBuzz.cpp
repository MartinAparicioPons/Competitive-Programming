#define q printf
main(i){for(i=1;i<=100;i++){(i%3)?i:q("Fizz");(i%5)?((i%3)?q("%d",i):i):q("Buzz");q("\n");}}
