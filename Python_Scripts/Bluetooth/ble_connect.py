import pygatt

adapter = pygatt.GATTToolBackend()

try:
    adapter.start()
    device = adapter.connect('B4:52:A9:1A:A7:E0')
    print("connected? Device: ")
    print(device)
    value = device.char_write_handle(0x0012,bytearray([32,73,43,74,10]))
    print(value)
    input("shut down?")
    
finally:
    adapter.stop()