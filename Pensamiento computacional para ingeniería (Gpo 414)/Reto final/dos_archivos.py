import subprocess

# Iterable con las rutas de los scripts
scripts_paths = ("quiz.py", "Reto_Final.py")

# Creamos cada proceso    
procesos = [subprocess.Popen(["python", script]) for script in scripts_paths]

# Esperamos a que todos los subprocesos terminen.
for proceso in procesos:
    proceso.wait()