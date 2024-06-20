
public class DataType_T13 {
    public static void main(String[] args) {
        int x = 99;
        int y = 4;
        
        System.out.println();
        System.out.println("Floor division using '/' operator: " + (x / y));
        System.out.println("Floor division using floorDiv() method is: " + Math.floorDiv(x, y));
        
        System.out.println();
        System.out.println("Floor modulus using '%' operator: " + (x % y));
        System.out.println("Floor modulus using floorMod() method is: " + Math.floorMod(x, y));
    }
}
