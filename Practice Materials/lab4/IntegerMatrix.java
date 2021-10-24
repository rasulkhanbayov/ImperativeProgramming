public class IntegerMatrix {
    private int rowNum,colNum;
    private int [][] data;

    public IntegerMatrix(int rowNum, int colNum, int[] linearData){
        if(rowNum*colNum != linearData.length){
            throw new IllegalArgumentException();
        }
        this.rowNum = rowNum;
        this.colNum = colNum;
        data = new int[rowNum][colNum];
        for(int i =0;i<linearData.length;i++){
            int row =(int) Math.floor(i/colNum);
            int col = i % colNum;
            data[row][col] =linearData[i];
        }
    }
    public String toString(){
        // return toString1();   // BAJ: It is hard to read, and the terms and conditions are ineffective, and the value is faster.

        // return toString2(); // BAJ: The String immutable, every time a concatenation is a new instance, and must always be logged in.

// O(n^3)

        return toString3();
    }

    public String toString1(){
        
        String s = "";

        // first line
        if(data.length < 1) return s;

        // first line first item
        s += data[0].length < 1 ? "" : data[0][0]; 

        // first line more items
        for(int j=1; j<data[0].length; j++){
            s += "," + data[0][j]; 
        }

        // other lines
        for(int i=1; i<data.length; i++){
            s += ";";

            // i-th row first element
            s += data[i].length < 1 ? "" : data[i][0]; 
            // i-th row of other elements
            for(int j=1; j<data[i].length; j++){
                s += "," + data[i][j]; 
            }
        }

        return s;
    }

    public String toString2(){
        String s = "";
        String rowDelim = "";
        String colDelim = "";

        for(int[] row : data){
            s += rowDelim;
            rowDelim = ";";
            for(int elem :row){
                s += colDelim;
                colDelim = ",";
                s += elem;
            }
            colDelim = "";
        }
        return s;
    }

    public String toString3(){
        StringBuilder sb = new StringBuilder();
        String rowDelim = "";
        String colDelim = "";

        for(int[] row : data){
            sb.append(rowDelim);
            rowDelim = ";";
            for(int elem : row){
                sb.append(colDelim);
                colDelim = ",";
                sb.append(elem);
            }
            colDelim = "";
        }

        return sb.toString();
    }
}
