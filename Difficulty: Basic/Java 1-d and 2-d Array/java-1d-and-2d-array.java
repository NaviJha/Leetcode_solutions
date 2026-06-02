class Complete {
    public static ArrayList<Integer> array(int a[][], int b[], int n) {
        // Complete the function
         ArrayList<Integer> fruits = new ArrayList<>();
        int sum = 0;
        for(int i = 0; i<a.length; i++){
            sum += a[i][i];
        }
        fruits.add(sum);
        //System.out.print(sum);
        //System.out.print(" ");
        int max = b[0];
        for(int i = 1; i<b.length; i++){
            if(b[i] > max){
                max = b[i];
            }
        }
        fruits.add(max);
        //System.out.print(max);
        return fruits;
    }
}
