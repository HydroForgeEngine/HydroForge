from PySide6.QtGui import QAction

def create_menu(window):
    menu = window.menuBar()

    file_menu = menu.addMenu("File")
    edit_menu = menu.addMenu("Edit")
    project_menu = menu.addMenu("Project")
    help_menu = menu.addMenu("Help")

    file_menu.addAction(QAction("New Project", window))
    file_menu.addAction(QAction("Open Project", window))
    file_menu.addAction(QAction("Save", window))
    file_menu.addSeparator()
    file_menu.addAction(QAction("Exit", window))
