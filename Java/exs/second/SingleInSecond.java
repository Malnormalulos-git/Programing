package second;
import first.base

public class SingleInSecond{
	public void print(){
		Base base = new Base();
		System.out.println("\nSingleInSecond: ");
		//System.out.println(base.a); //Error: a is private
		//System.out.println(base.b); //Error: b is private
		//System.out.println(base.c); //Error: c is protected
		System.out.println(base.d);
	}
}