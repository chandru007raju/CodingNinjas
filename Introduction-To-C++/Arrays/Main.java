public class Main {
//     public static void change(int input[]){
//     input[0] = 11;
//     }

//     public static void main(String args[]){
//         int arr[] = new int[5];
//         change(arr);
//         System.out.println(arr[0]);
//     }
// }  // Extra to execute
public static void mul(int [] arr)
{
    for(int i=0;i<5;i++)
    arr[i]*=i;

}
public static void main (String[] args) {
    int arr[]={1,2,3,4,5};
    mul(arr);
    for(int i=0;i<5;i++)
    {
        System.out.print(arr[i]);
    }
}
}  // Extra to execute

// new Problem --> -->


// public class Main {
//     public static void change(int input[]){
//     input = new int[5]; //make this comment and see wat happens 
//     input[0] = 15;
//     }

//     public static void main(String args[]){
//         int arr[] = new int[5];
//         change(arr);
//         System.out.println(arr[0]);
//     }
// }

// the function change makes a new copy array and anames it as input so the value is changed in the input array and not in the array in the main function

// new Problem --> -->

// public class Main {
//     public static int[] change(int input[]){
//         input = new int[5];
//         input[0] = 15;
//         return input;
//         }
        
//         public static void main(String args[]){
//             int arr[] = new int[5];
//             System.out.println(arr);
//             arr=change(arr);
//             System.out.println(arr);
//             System.out.println(arr[0]);
//         }
// }