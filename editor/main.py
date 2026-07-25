import sys
from PySide6.QtWidgets import QApplication

from app import HydroForgeApp

def main():
    app = QApplication(sys.argv)

    editor = HydroForgeApp()
    editor.show()

    sys.exit(app.exec())

if __name__ == "__main__":
    main()
