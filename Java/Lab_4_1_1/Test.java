public class Test{
	public static void main(String[] args){
		System.out.println("My name is "+ args[0]);
		System.out.println("My group is "+ args[1]);
		System.out.println("Number of words in comandline is: "+ args.length);
		System.out.println("size of matrix = "+ args[2]);
		int n = Integer.parseInt(args[2]);
		Matrix m1 = new Matrix(n);
		Matrix m2 = new Matrix(n);
		Matrix m3 = new Matrix(n);
		Calculation c1 = new Calculation();
		m1.fillMatrix();
		m1.printMatrix();
		m2.fillMatrix(1);
		m2.printMatrix();
		m3 = c1.multiMatrix(m1,m2, n);
		m3.printMatrix();
	}
}