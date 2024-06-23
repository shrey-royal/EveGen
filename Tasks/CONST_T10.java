final class Point {
    private final int x;
    private final int y;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public void getPointDetails() {
        System.out.println("(" + x + ", " + y + ")");
    }
}

public class CONST_T10 {
    public static void main(String[] args) {
        Point p1 = new Point(3, 4);
        p1.getPointDetails();

        Point p2 = new Point(1, 1);
        p2.getPointDetails();
    }
}
