
class Led:

    def __init__(self):
        self.r = 0
        self.g = 0
        self.b = 0

    def get_led_vals(self):
        return self.r, self.g, self.b

    def white(self):
        self.r = 255
        self.g = 255
        self.b = 255

    def red(self):
        self.r = 255
        self.g = 0
        self.b = 0

    def green(self):
        self.r = 0
        self.g = 255
        self.b = 0

    def blue(self):
        self.r = 0
        self.g = 0
        self.b = 255
