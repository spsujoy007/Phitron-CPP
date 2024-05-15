class CPU:
    def __init__(self, corse) -> None:
        self.corse = corse
        pass
class RAM: 
    def __init__(self, size) -> None:
        self.size = size
        pass
class HardDrive:
    def __init__(self, capacity) -> None:
        self.capacity = capacity
        pass

class Computer:
    def __init__(self, corse, ram_size, hd_capacity) -> None:
        self.cpu = CPU(corse)
        self.ram = RAM(ram_size)
        self.hard_disc = HardDrive(hd_capacity)
        pass

mac = Computer(8,16,512)
print(mac)