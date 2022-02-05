import java.io.*;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        boolean[] vis = new boolean[100050];
        Queue<Pair> q = new LinkedList<Pair>();
        int[] tmp = Arrays.stream(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                .mapToInt(Integer::parseInt).toArray();
        int m = tmp[0], n = tmp[1];
        int ans = (int)1e9;
        q.add(new Pair(m, 0));
        while(!q.isEmpty()){
            Pair cur = q.peek();
            q.remove();
            if(cur.first == n) {
                ans = Math.min(ans, cur.second);
            }
            if(cur.second > 10) continue;
            for(int i=0; i<=9;i++) {
                if(i != 1 && i*cur.first <= 99999 && i*cur.first >= 0){
                    if(!vis[i*cur.first]) {
                        q.add(new Pair(i*cur.first, cur.second + 1));
                        vis[(cur.first * i)] = true;
                    }
                }
                if(i != 0 && i+cur.first <= 99999 && i*cur.first >= 0){
                    if(!vis[i+cur.first]) {
                        q.add(new Pair(i+cur.first, cur.second + 1));
                        vis[(cur.first + i)] = true;
                    }
                }
                if(i != 0 && cur.first-i <= 99999 && cur.first-i >= 0) {
                    if (!vis[cur.first - i]) {
                        q.add(new Pair(cur.first - i, cur.second + 1));
                        vis[(cur.first - i)] = true;
                    }
                }
                if(i >= 2 && cur.first/i <= 99999 && cur.first/i >= 0){
                    if(!vis[cur.first/i]) {
                        q.add(new Pair(cur.first/i, cur.second + 1));
                        vis[(cur.first / i)] = true;
                    }
                }
            }
        }
        bufferedWriter.write(String.valueOf(ans));
        bufferedWriter.close();
        bufferedReader.close();
    }

    static class Pair {
        public int first, second;
        public Pair(int f, int s) {
            this.first = f;
            this.second = s;
        }
    }
}

    
