package it.nanowar.ofsteel.helloworld;

public class HelloWorldMainLauncherClass {
  public HelloWorldMainLauncherClass(int foo) {
    super();
    this.foo = foo;
  }

  private Integer foo = 0;

  public void songRefrain() {
    for (int i = 0; i < foo; i++) System.out.println("Hello World!");

    int pippo = 0;
    while (pippo < foo) {
      System.out.println("Hello World!");
      pippo++;
    }
  }

  public static void main(String[] args) {
    System.out.println("HelloWorld programmer started");
    HelloWorldMainLauncherClass tizio = new HelloWorldMainLauncherClass(2);
    tizio.songRefrain();
    System.out.println("Program finished");
  }

  /*
   * If I may introduce a bug, the JVM will manage It for me
   * Ensuring both security and portability
   * Then I'll write my once and run it everywhere!
   * Static and strong typing will let my programs be type safe
   */

  // DON'T CALL THIS METHOD!
  public void falseMetalMethod() {
    boolean metal = false;

    if (metal == false) {
      String joeyDeCaio = null;
      joeyDeCaio.length();
    }
  }
}


