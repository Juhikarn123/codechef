/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Bookshelves
{
    public static void main (String[] args) throws java.lang.Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int line[] = getIntArr(br);
        int N=line[0],K=line[1];
        List<Pair> list1 = new ArrayList<>();
        List<Pair> list2 = new ArrayList<>();
        for(int i=2;i<N+2;i++){
            list1.add(new Pair(line[i],true));
            list2.add(new Pair(line[i],true));
        }
        for(int i=N+2;i<N*2+2;i++){
            list1.add(new Pair(line[i],false));
            list2.add(new Pair(line[i],false));
        }
        int ans1= getAns(list1,false,K,N);
        int ans2 = getAns(list2,true,K,N);
        System.out.println(Math.min(ans1,ans2));

    }

    public static int getAns(List<Pair> list,boolean flag,int K,int N){
        Collections.sort(list,Collections.reverseOrder());
        int i=1;
        int lt = 0 , rf = 2*N-1;
        while(i<=K && lt<N && rf>=0){
            if(list.get(lt).isFirstArr==flag) {
                lt++;continue;
            }
            if(list.get(rf).isFirstArr!=flag) {
                rf--;continue;
            }
            list.get(lt).isFirstArr = flag;
            list.get(rf).isFirstArr = !flag;
            rf--;
            lt++;
            i++;
        }
        int max1 = 0,max2=0;
        for(Pair p: list){
            if(p.isFirstArr==flag)
                max1=Math.max(max1,p.val);
            else
                max2=Math.max(max2,p.val);
        }

        return max1+max2;
    }
    public static int[] getIntArr(BufferedReader br)
            throws Exception {
        String strarr[] = br.readLine().trim().split(" ");
        int arr[]= new int[strarr.length];
        for(int i=0;i<arr.length;i++){
            arr[i]=Integer.parseInt(strarr[i]);
        }
        return arr;
    }
}


class Pair implements Comparable<Pair>{
    int val;
    boolean isFirstArr;
    Pair(int v,boolean b){
        this.val=v;
        this.isFirstArr=b;
    }

    @Override
    public int compareTo(Pair o) {
        int c = Integer.compare(this.val,o.val);
        if(c!=0)
            return c;
        if(isFirstArr)
            return -1;
        else
            return 1;
    }

    @Override
    public String toString() {
        return "(" +
                 val +
                "," + (isFirstArr ? "f": "l")  +
                ')';
    }
}