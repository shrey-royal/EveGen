import java.util.Scanner;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class Time_Travelling {
    public static void main(String[] args) {
        // Get the current date and time
        LocalDateTime now = LocalDateTime.now();
        greetBasedOnTime(now);

        // Create a scanner object to read user input
        Scanner scanner = new Scanner(System.in);

        // Ask the user to enter a date
        System.out.println("Enter a date in the format yyyy-MM-dd:");
        String inputDate = scanner.nextLine();

        // Parse the input date
        LocalDate userDate = LocalDate.parse(inputDate, DateTimeFormatter.ofPattern("yyyy-MM-dd"));

        // Get the current date
        LocalDate today = LocalDate.now();

        // Compare the user date with today's date
        if (userDate.equals(today)) {
            System.out.println("Today's " + today.getDayOfWeek());
        } else if (userDate.equals(today.minusDays(1))) {
            System.out.println("Yesterday was " + userDate.getDayOfWeek());
        } else if (userDate.equals(today.plusDays(1))) {
            System.out.println("Tomorrow will be " + userDate.getDayOfWeek());
        } else if (userDate.isBefore(today)) {
            System.out.println(userDate + " was " + userDate.getDayOfWeek());
        } else {
            System.out.println(userDate + " will be " + userDate.getDayOfWeek());
        }

        // Close the scanner
        scanner.close();
    }

    public static void greetBasedOnTime(LocalDateTime now) {
        int hour = now.getHour();

        if (hour < 12) {
            System.out.println("Good Morning!");
        } else if (hour < 17) {
            System.out.println("Good Afternoon!");
        } else if (hour < 21) {
            System.out.println("Good Evening!");
        } else {
            System.out.println("Good Night!");
        }
    }
}
