import os

class ProjectManager:

    @staticmethod
    def create_project(path, name):
        project = os.path.join(path, name)

        os.makedirs(os.path.join(project, "Assets"), exist_ok=True)
        os.makedirs(os.path.join(project, "Scenes"), exist_ok=True)
        os.makedirs(os.path.join(project, "Scripts"), exist_ok=True)

        return project
