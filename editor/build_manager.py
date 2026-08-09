import os
import subprocess


class BuildManager:

    def __init__(self, build_tool):
        self.build_tool = build_tool

    def build(
        self,
        target,
        project_path,
        output_path
    ):
        if not os.path.exists(self.build_tool):
            raise FileNotFoundError(
                "HydroForge Build Tool not found."
            )

        command = [
            self.build_tool,
            target,
            project_path,
            output_path
        ]

        process = subprocess.run(
            command,
            capture_output=True,
            text=True
        )

        return {
            "success": process.returncode == 0,
            "output": process.stdout,
            "error": process.stderr
        }
