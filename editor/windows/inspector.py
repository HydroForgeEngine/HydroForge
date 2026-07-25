from PySide6.QtWidgets import QWidget, QVBoxLayout, QLabel, QFormLayout, QLineEdit

class Inspector(QWidget):
    def __init__(self):
        super().__init__()

        layout = QVBoxLayout(self)
        layout.addWidget(QLabel("Inspector"))

        form = QFormLayout()

        self.name = QLineEdit("Main Camera")
        self.position = QLineEdit("0, 0, 0")
        self.rotation = QLineEdit("0, 0, 0")
        self.scale = QLineEdit("1, 1, 1")

        form.addRow("Name:", self.name)
        form.addRow("Position:", self.position)
        form.addRow("Rotation:", self.rotation)
        form.addRow("Scale:", self.scale)

        layout.addLayout(form)
