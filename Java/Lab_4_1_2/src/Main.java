public class Main {
    public static void main(String[] args) {
        int size = 25;
        int counterL = 0;//lesser
        int counterB = 0;//bigger
        double [] arr = new double[size];
        for(int i = 0; i < size; i++){
            arr[i] = Math.random();
            if(i != 0 && i != 1){
                if(arr[i] < arr[1])
                    counterL++;
                else if(arr[i] > arr[1])
                    counterB++;
            }
        }
        if(arr[0] < arr[1])
            counterL++;
        else if(arr[0] > arr[1])
            counterB++;
        double [] arrL = new double[counterL];
        double [] arrB = new double[counterB];
        counterL = 0;
        counterB = 0;
        for(int i = 0; i < size; i++){
            if(arr[i] < arr[1]){
                arrL[counterL] = arr[i];
                counterL++;
            }
            else if(arr[i] > arr[1]){
                arrB[counterB] = arr[i];
                counterB++;
            }
        }
        int i = 0;
        System.out.println(" N  Array\t\t\t\t\tLesser\t\t\t\t\tBigger");
        while(i < size){
            System.out.printf("%2d. ", i + 1);
            if(i < counterL && i < counterB)
                System.out.printf("%20.18f\t%20.18f\t%20.18f\n", arr[i], arrL[i], arrB[i]);
            else if(i < counterL)
                System.out.printf("%20.18f\t%20.18f\n", arr[i], arrL[i]);
            else if(i < counterB)
                System.out.printf("%20.18f\t\t\t\t\t\t\t%20.18f\n", arr[i], arrB[i]);
            else
                System.out.println(arr[i]);
            i++;
        }
    }
}