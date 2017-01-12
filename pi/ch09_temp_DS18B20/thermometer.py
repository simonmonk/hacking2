from Tkinter import *    
from DS18B20 import *
import time

class App:

    # this function gets called when the app is created
    def __init__(self, master):
        self.master = master
        # A frame holds the various GUI controls
        frame = Frame(master)
        frame.pack()
        label = Label(frame, text='Temp F', font=("Helvetica", 32))
        label.grid(row=0)
        self.reading_label = Label(frame, text='12.34', font=("Helvetica", 200))
        self.reading_label.grid(row=1)
        self.update_reading()

    # Update the temperature reading
    def update_reading(self):
        temp = read_temp_f()
        reading_str = "{:.2f}".format(temp)
        self.reading_label.configure(text=reading_str)
        self.master.after(500, self.update_reading) # schedule yourself to be called after 0.5 seconds

# Set the GUI running, give the window a title, size and position
root = Tk()
root.wm_title('Thermometer')
app = App(root)
root.geometry("800x450+0+0")
root.mainloop()

