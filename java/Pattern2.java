import java.util.Scanner;

class Pattern2 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter number of rows: ");
    int rows = scanner.nextInt();
    for (int i = rows; i > 0; i--) {
      for (int j = 1; j <= i; j++) {
        System.out.print("* ");
      }
      System.out.println();
    }
  }
}
