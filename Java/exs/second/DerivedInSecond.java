package second;
import first.Base;

public class DerivedInSecond extends Base{
	System.out.println("\nDerivedInSecond");
	//System.out.println(a); // Error: a is not visible
	//System.out.println(b); // Error: b is private
	System.out.println(c);
	System.out.println(d);
}