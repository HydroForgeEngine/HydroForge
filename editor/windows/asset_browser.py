from PySide6.QtWidgets import QWidget, QVBoxLayout, QLabel, QListWidget

class AssetBrowser(QWidget):
    def __init__(self):
        super().__init__()

        layout = QVBoxLayout(self)

        layout.addWidget(QLabel("Assets"))

        self.assets = QListWidget()
        self.assets.addItems([
            "player.png",
            "enemy.png",
            "terrain.obj",
            "theme.ogg"
        ])

        layout.addWidget(self.assets)
