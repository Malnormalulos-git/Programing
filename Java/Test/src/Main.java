interface Sale{
    void sale(int money);
}
class ShopA implements Sale{
    int Money;
    public void sale(int money){
        Money += money;
        System.out.println("sailing goods A " + money + " grn");
    }
}
class ShopB implements Sale{
    int Money;
    public void sale(int money){
        Money += money;
        System.out.println("sailing goods B " + money + " grn");
    }
}
public class Main{
    public static void main(String[] args){
        Sale pointer = new ShopA();
        pointer.sale(50);
        pointer = new ShopB();
        pointer.sale(100);
    }
} 