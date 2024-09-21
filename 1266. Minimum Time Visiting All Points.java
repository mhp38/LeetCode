class Solution {
    public int minTimeToVisitAllPoints(int[][] points) {
        int steps = 0;
        int Xdif,Ydif;
        for(int i=1;i<points.length;i++){
            Xdif = Math.abs(points[i][0] - points[i-1][0]);
            Ydif = Math.abs(points[i][1] - points[i-1][1]);

            steps+=Math.max(Xdif,Ydif);
        }

        return steps;
    }
}
