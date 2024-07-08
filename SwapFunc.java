// SwapFunc.java: Demonstration file to show that Java has the same
// properties of C - attempting to swap in a function has no affect on
// the local variables of another function.
//
// >> javac SwapFunc.java 
// >> java SwapFunc
// 42 31

public class SwapFunc{
  public static void main(String args[]){
    int x = 42;                   
    int y = 31;                   
    swap(x, y);
    System.out.printf("%d %d\n",x,y);
    return;
  }

  public static void swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
    return;
  }
}
