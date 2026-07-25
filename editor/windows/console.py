from PySide6.QtWidgets import QWidget, QVBoxLayout, QLabel, QTextEdit

class Console(QWidget):
    def __init__(self):
        super().__init__()

        layout = QVBoxLayout(self)

        layout.addWidget(QLabel("Console"))

        self.output = QTextEdit()
        self.output.setReadOnly(True)
        self.output.append("[HydroForge] Editor started.")

        layout.addWidget(self.output)
