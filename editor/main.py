import sys
from PySide6.QtWidgets import QApplication
from app import HydroForgeEditor

app = QApplication(sys.argv)

window = HydroForgeEditor()
window.show()

sys.exit(app.exec())
