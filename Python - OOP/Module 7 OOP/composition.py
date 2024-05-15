class Engine:
    def __init__(self) -> None:
        pass
    def star(self):
        return "Engine started"

class Driver:
    def __init__(self) -> None:
        pass

class Car:
    def __init__(self) -> None:
        self.engine = Engine()
        self.driver = Driver()