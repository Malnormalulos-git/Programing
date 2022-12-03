package filippenkov;

class Adam{
	void heSaid(){
		System.out.println("Madam I’m Adam");
		System.out.println("it is palindrome : madamimadam");
	}
}

class Eva{
	void sheAnswered(){
		System.out.println("Hello!");
	}
}

public class DemoAdamAndEva{
	public static void main(String args []){
		Adam adam = new Adam();
		Eva eva = new Eva();
		adam.heSaid();
		eva.sheAnswered();
	}
}