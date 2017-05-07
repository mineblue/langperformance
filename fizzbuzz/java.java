class java {
  public static void main(String[] args) {
    final int MAX = 1000000;
    for (int i = 0; i < MAX; i++) {
      if (i % 15 == 0) {
        System.out.println("fizzbuzz");
      } else if (i % 3 == 0) {
        System.out.println("fizz");
      } else if (i % 5 == 0) {
        System.out.println("buzz");
      } else {
        System.out.println(i);
      }
    }
  }
}
