#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius;
    
    printf("Fahrenheit\tCelsius\n");
    printf("———————————————————\n");
    
    // Cycle from -100°F to +100°F, with increments of 1°F.
  
    for(fahrenheit = -100; fahrenheit <= 100; fahrenheit++) 
		{
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        
      
          // Print two columns: Fahrenheit temperature and corresponding Celsius temperature
      
      printf("%10d\t%8.2f\n", fahrenheit, celsius);
    }
    
    return 0;
}
