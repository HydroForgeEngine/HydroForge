from PySide6.QtWidgets import QMainWindow

class HydroForgeEditor(QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("HydroForge Editor")
        self.resize(1280, 720)
