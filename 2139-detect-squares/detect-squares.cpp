class DetectSquares {
public:
    unordered_map<int, unordered_map<int, int>> pointCount;

    DetectSquares() {
    }
    
    void add(vector<int> point) {
        pointCount[point[0]][point[1]]++;
    }
    
    int count(vector<int> point) {
        int x = point[0], y = point[1];
        int result = 0;

        // Iterate through all points with the same x-coordinate
        for (auto &[colY, colCount] : pointCount[x]) {
            int sideLength = abs(colY - y);
            if (sideLength == 0) continue;  // Skip the same point

            // Check points forming the square with the same y-coordinates
            result += pointCount[x][colY] * pointCount[x + sideLength][y] * pointCount[x + sideLength][colY];
            result += pointCount[x][colY] * pointCount[x - sideLength][y] * pointCount[x - sideLength][colY];
        }

        return result;
    }
};
