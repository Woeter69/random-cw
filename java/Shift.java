public class Shift {
  public static void main(String[] args) {
    int a = 5;
    int b = 6;
    int c = -4;

    int d = a << 2; // d = 20
    int e = b << 3; // e = 48
    int f = a >> 4; // f = 0
    int g = b >> 2; // g = 1
    int h = c << 5; // h = -128
    int i = c >> 6; // i = -1 
    
    byte j = (byte) h; // j = -128 
    int k = h >>> 2; // k = 0011 1111 1111 1111 1110 0000
    
    int l = 0x0A >> 2; // l = 2
    int m = 0xF1 >> 3; // m = 30
    int n = 0xA4 << 2; // n = 656
    System.out.println(a);
    System.out.println(b);
    System.out.println(c);
    System.out.println(d);
    System.out.println(e);
    System.out.println(f);
    System.out.println(g);
    System.out.println(h);
    System.out.println(i);
    System.out.println(j);
    System.out.println(k);
    System.out.println(l);
    System.out.println(m);
    System.out.println(n);
  } 
}
