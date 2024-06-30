public class MthdOverloading {
    public static void diwaliBonus(String name, int bonus) {
        System.out.println("Happy Diwali " + name + ", you got bonus of Rs. " + bonus);
    }

    public static void diwaliBonus(String name, String bonus) {
        System.out.println("Happy Diwali " + name + ", you got bonus of " + bonus);
    }

    public static void diwaliBonus(String name, float bonus, String msg) {
        System.out.println("Happy Diwali " + name + ", you got bonus of $" + bonus + " and " + msg);
    }

    public static void diwaliBonus(String name, String msg, float bonus) {
        System.out.println("Happy Diwali " + name + ", you got bonus of Rs. " + bonus + " and " + msg);
    }


    public static void main(String[] args) {
        diwaliBonus("Dhruv", 500000);
        diwaliBonus("Nand", "WeddingCard");
        diwaliBonus("Mithilesh", 10000.9f, "Promotion to US HeadQuarters");
        diwaliBonus("Meet", "GANTHIYA", 100.9f);
    }
}

/*
Overloading: If multiple methods have the same name but different parameters (either in number, type, or both), this is known as method overloading.

1. Area Calculation:
   Write a class `Shape` with overloaded methods `area()` to calculate the area of a circle (using radius), a rectangle (using length and breadth), and a triangle (using base and height).

2. Volume Calculation:
   Create a class `Volume` with overloaded methods `calculate()` to compute the volume of a cube (using side length), a cylinder (using radius and height), and a rectangular prism (using length, width, and height).

3. Simple Interest Calculation:
   Develop a class `InterestCalculator` with overloaded methods `calculateInterest()` to determine the simple interest using principal, rate, and time provided in different formats (e.g., years, months, days).

4. Temperature Conversion:
   Implement a class `TemperatureConverter` with overloaded methods `convert()` to convert temperatures from Celsius to Fahrenheit, Fahrenheit to Celsius, and Celsius to Kelvin.

5. String Concatenation:
   Write a class `Concatenator` with overloaded methods `concatenate()` to concatenate two strings, three strings, and four strings.

6. Distance Calculation:
   Create a class `DistanceCalculator` with overloaded methods `distance()` to calculate the distance between two points in a 2D plane (using two points), three points in a 3D space (using three points), and between two points on a number line.

7. Max Value Finder:
   Develop a class `MaxFinder` with overloaded methods `max()` to find the maximum value among two integers, three integers, and four integers.

8. GCD Calculation:
   Write a class `GCD` with overloaded methods `calculateGCD()` to compute the greatest common divisor of two integers and three integers.

9. String Repetition:
   Implement a class `Repeater` with overloaded methods `repeat()` to repeat a string a specified number of times, concatenate the repeated string, and print it.

10. Geometry Perimeter Calculation:
   Create a class `Perimeter` with overloaded methods `calculate()` to find the perimeter of a square (using side length), a rectangle (using length and breadth), and a triangle (using the lengths of its three sides).
    
*/

