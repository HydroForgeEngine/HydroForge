from PySide6.QtWidgets import QSplashScreen
from PySide6.QtGui import QPixmap

class SplashScreen(QSplashScreen):
    def __init__(self):
        super().__init__(QPixmap())
        self.showMessage("Loading HydroForge...")
