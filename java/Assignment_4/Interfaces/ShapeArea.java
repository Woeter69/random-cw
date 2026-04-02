public class ShapeArea {
  public static interface Shape {
    public double calculateArea();
  }

  public static class Circle implements Shape {
    private double radius;

    public Circle(double radius) {
      this.radius = radius;
    }

    @Override
    public double calculateArea() {
      return Math.PI * radius * radius;
    }
  }

  public static class Rectangle implements Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
      this.length = length;
      this.width = width;
    }

    @Override
    public double calculateArea() {
      return width * length;
    }
  }

  public static class Triangle implements Shape {
    private double base;
    private double height;

    public Triangle(double base, double height) {
      this.base = base;
      this.base = height;
    }

    public double calculateArea() {
      return (0.5 * base * height);
    }
  }

  public static void main(String[] args) {
    Shape shape;
    
    shape = new Circle(10.0);
    System.out.println(shape.calculateArea());

    shape = new Rectangle(10.0, 20.0);
    System.out.println(shape.calculateArea());

    shape = new Triangle(20.0, 15.0);
    System.out.println(shape.calculateArea());
  }
}
