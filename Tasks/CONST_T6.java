class Time {
    private int hour, minute;

    private Time(int hour, int minute) {
        this.hour = hour;
        this.minute = minute;
    }

    public static Time of(int hour, int minute) {
        if(hour < 0 || hour > 23 || minute < 0 || minute > 59) {
            System.out.println("Invalid time. Setting default time to 00:00.");
            return new Time(00, 00);
        } else {
            return new Time(hour, minute);
        }
    }

    public void getTimeDetails() {
        System.out.println(String.format("Time: %02d:%02d", hour, minute));
        // System.out.printf("Time: %02d:%02d", hour, minute);
    }
}


public class CONST_T6 {
    public static void main(String[] args) {
        Time t1 = Time.of(16, 34);
        t1.getTimeDetails();

        Time t2 = Time.of(45, 123);
        t2.getTimeDetails();
    }
}
