package main;
import first.*;
import second.*;

public class Main{
	public static void main (String[] args){
		SingleInFirst sf = new SingleInFirst();
		sf.print();
		SingleInSecond ss = new SingleInSecond();
		ss.print();
		DerivedInFirst df = new DerivedInFirst();
		df.print();
		DeriveInSecond ds = new DeriveInSecond();
		ds.print();
	}
}