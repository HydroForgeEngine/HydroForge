from PySide6.QtGui import QAction

def create_toolbar(window):
    toolbar = window.addToolBar("Main")

    toolbar.addAction(QAction("Play", window))
    toolbar.addAction(QAction("Pause", window))
    toolbar.addAction(QAction("Stop", window))
