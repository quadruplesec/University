from math import sqrt
def closest_pair(points: list):
    euc_distance = lambda x,y: sqrt((x[0]+y[0])**2 + (x[1]+y[1])**2)

    sorted_points = sorted(points, key=lambda x: x[0])
    mid = len(sorted_points) // 2
    left = sorted_points[:mid]
    right = sorted_points[mid:]

    pass #to be finished





print(closest_pair([(2498, 7397), (2168, 8117), (2168, 6677), (1496, 1976), (8893, 9240), (288, 9467), (7465, 8080), (4588, 1774), (4178, 8118), (3459, 7224)]))