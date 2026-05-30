class Solution:
    def finalPositionOfSnake(self, n: int, commands: List[str]) -> int:
        x = 0
        y = 0
        for item in commands:
            if item == "RIGHT": y += 1
            elif item == "LEFT": y -= 1
            elif item == "UP": x -= 1
            else: x += 1

        return x*n + y