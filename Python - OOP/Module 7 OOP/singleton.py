class Singleton:
    _instance = None
    def __init__(self) -> None:
        if(Singleton._instance) is None:
            Singleton._instance = self
        else:
            raise Exception('This is singleton. Already have an instance, use that one by calling get_instance method.')
    @staticmethod
    def get_instance():
        if Singleton._instance is None:
            Singleton()
        return Singleton._instance
    
first = Singleton.get_instance()
second = Singleton.get_instance()
third = Singleton.get_instance()
print(first)
print(second)
print(third)