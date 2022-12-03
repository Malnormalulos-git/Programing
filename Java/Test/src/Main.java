public class Main {
    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        C c = new C();
        A tmp = new B();
        tmp.method();
        a.method();
        b.method();
        c.method();
    }
}
class A {
    public static void method() {
        System.out.println("A");
    }
}
class B extends A {
    @Override
    public static void method() {
        System.out.println("B");
    }
}
class C extends B {
    public static void method() {
        System.out.println("C");
    }
}
