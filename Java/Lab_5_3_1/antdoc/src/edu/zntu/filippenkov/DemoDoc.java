package edu.zntu.filippenkov;
/**
 * This is a program for laboratory work in discipline
 * Modern Methods of Programming. The DemoDoc program
 * implements an application that calculates Euler ’s number
 * as limit of expression <em>(1 + 1/n)^n </em>. The results
 * of calculation depending on values <em>n </em> are written
 * to a file, then are read from the file and output
 * to a console.
 * @author Filippenkov K.
 * @version 1.1
 * @since 2022-12-15
 */
public class DemoDoc{
 /**
 * This is main() method which creates objects of classes
 * Exponent and InOutFile. It calls the method of calculation
 * Euler’s number , and the methods for writing and reading
 * results to/from file.
 * @param args unused
 * @see edu.zntu.filippenkov.Exponent
 * @see edu.zntu.filippenkov.InOutFile
 */
	public static void main(String [] args){
		String str = "exponent.txt";
		InOutFile iof = new InOutFile(str);
		Exponent exp = new Exponent();
		iof.writer(exp.calcExponent());
		System.out.print(iof.reader());
	}
}