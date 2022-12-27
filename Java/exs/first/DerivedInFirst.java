package first;

public class DerivedInFirst extends Base{
	public void print(){
		System.out.println("\nDerivedInFirst");
		System.out.println(a);
		//System.out.println(b); // Error: b is private
		System.out.println(c);
		System.out.println(d);
	}
}