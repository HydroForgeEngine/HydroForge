from PySide6.QtWidgets import QMessageBox

def show_about(window):
    QMessageBox.about(
        window,
        "About HydroForge",
        "HydroForge Engine\nVersion 0.1 Alpha\n\nOpen-source Game Engine."
    )
