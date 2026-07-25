from PySide6.QtWidgets import QWidget, QVBoxLayout, QLabel, QListWidget

class Hierarchy(QWidget):
    def __init__(self):
        super().__init__()

        layout = QVBoxLayout(self)

        layout.addWidget(QLabel("Hierarchy"))

        self.list = QListWidget()
        self.list.addItems([
            "Main Camera",
            "Directional Light"
        ])

        layout.addWidget(self.list)
