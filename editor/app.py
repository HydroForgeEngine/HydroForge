from build_manager import BuildManager


class HydroForgeApp:

    def __init__(self):
        self.build_manager = BuildManager(
            "Build/hydrobuild.exe"
        )

    def build_project(
        self,
        target,
        project_path,
        output_path
    ):
        result = self.build_manager.build(
            target,
            project_path,
            output_path
        )

        print(result["output"])

        if not result["success"]:
            print(result["error"])

        return result
