def dfs_recursive(graph, start, visited=None):
    if visited is None:
        visited = set()  # Set for O(1) membership checks
    visited.add(start)
    print(start, end=" ")

    # Explore all unvisited neighbors
    for neighbor in graph.get(start, []):
        if neighbor not in visited:
            dfs_recursive(graph, neighbor, visited)
    return visited


# Example usage
if __name__ == "__main__":
    graph = {
        'A': ['B', 'C'],
        'B': ['D', 'E'],
        'C': ['F'],
        'D': [],
        'E': ['F'],
        'F': []
    }

    print("DFS (Recursive):")
    dfs_recursive(graph, 'A')
