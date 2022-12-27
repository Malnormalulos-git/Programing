package first;

public class SingleInFirst{
	public void print(){
		Base base = new Base();
		System.out.println("\nSingleInFirst: ");
		System.out.println(base.a);
		//System.out.println(base.b); //Error: b is private
		System.out.println(base.c);
		System.out.println(base.d);
	}
}