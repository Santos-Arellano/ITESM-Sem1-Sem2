
#import todo de tkinter
from tkinter import *
 
# tambien importar messagebox y mb de tkinter
from tkinter import messagebox as mb
 
#importar json para usar el archivo con los datos
import json
 
#para definir los componentes de la interfaz gráfica de usuario
class Quiz:
    # Este es el primer método que se llama cuando se inicializa un nuevo objeto de la clase. 
    # Este método establece la cuenta de preguntas a 0. e inicializa todos los demás métodos
    # para mostrar el contenido y hacer que todas las funcionalidades disponibles
    def __init__(self):
         
        # poner el numero de la pregunta a 0
        self.q_no=0
         
        # asigna ques a la función display_question para actualizarla posteriormente.
        self.display_title()
        self.display_question()
         
        #  opt_selected contiene un valor entero que se utiliza para la opción 
        # seleccionada en una pregunta.
        
        self.opt_selected=IntVar()
         
        # mostrar el botón de radio para la pregunta actual y
        # se utiliza para mostrar las opciones de la pregunta actua
        self.opts=self.radio_buttons()
         
        # mostrar las opciones de la pregunta actual
        self.display_options()
         
        # muestra el botón de siguiente y salida.
        self.buttons()
         
        # número de preguntas
        self.data_size=len(question)
         
        # mantener un contador de respuestas correctas
        self.correct=0
 
 
    # Este método se utiliza para mostrar el resultado Cuenta el número
    # de respuestas correctas y erróneas y luego las muestra al final 
    # como una caja de mensajes
    def display_result(self):
         
        # calcula el recuento erróneo
        wrong_count = self.data_size - self.correct
        correct = f"respuestas correctas: {self.correct}"
        wrong = f"Respuestas erroneas : {wrong_count}"
         
        # calcula el porcentaje de respuestas correctas
        score = int(self.correct / self.data_size * 100)
        result = f"Calificacion: {score}%"
         
        # Muestra un cuadro de mensaje para mostrar el resultado
        mb.showinfo("Resultados", f"{result}\n{correct}\n{wrong}")
    
 
 
    # este método comprueba la Respuesta después de que hagamos clic en Siguiente.
    def check_ans(self, q_no):
         
        # comprueba si la opción seleccionada es correcta
        if self.opt_selected.get() == answer[q_no]:
            # si la opción es correcta devuelve true
            return True
 
    # Este método se utiliza para comprobar la respuesta de la pregunta actual
    # llamando a check_ans y al número de la pregunta. Si la pregunta es correcta,
    # incrementa la cuenta en 1 y luego incrementa el número de la pregunta en 1. 
    # Si es la última pregunta, entonces llama a mostrar el resultado para mostrar el c
    # uadro de mensaje.  Si no, muestra la siguiente pregunta.
    def next_btn(self):
         
        # Revisa si la respuesta es correcta
        if self.check_ans(self.q_no):
             
            # si la respuesta es correcta incrementa el correcto en 1
            self.correct += 1
         
        # Pasa a la siguiente pregunta incrementando el contador q_no
        self.q_no += 1
         
        # comprueba si el tamaño de q_no es igual al tamaño de los datos
        if self.q_no==self.data_size:
             
            # si es correcto entonces muestra la puntuación
            self.display_result()
             
            # destruye la interfaz gráfica de usuario
            gui.destroy()
        else:
            # muestra la siguiente pregunta
            self.display_question()
            self.display_options()
 
 
    # Este método muestra los dos botones en la pantalla. El primero es el next_button que se
    # mueve a la siguiente pregunta Tiene propiedades como el texto que muestra la 
    # funcionalidad, el tamaño, el color y la propiedad del texto que se muestra en el
    # botón. Luego menciona donde colocar el botón en la pantalla.
    # El segundo botón es el botón de salida que se utiliza para cerrar la GUI sin
    # completar el cuestionario.
    def buttons(self):
         
        # El primer botón es el botón Siguiente para pasar a la
        # siguiente pregunta
        next_button = Button(gui, text="Siguiente",command=self.next_btn,
        width=10,bg="blue",fg="green",font=("ariel",16,"bold"))
         
        # palpando el botón en la pantalla
        next_button.place(x=350,y=380)
         
        # Este es el segundo botón que se utiliza para salir de la GUI
        quit_button = Button(gui, text="Salir", command=gui.destroy,
        width=5,bg="black", fg="red",font=("ariel",16," bold"))
         
        # colocando el botón Quit en la pantalla
        quit_button.place(x=700,y=50)
 
 
    # Este método deselecciona el botón de radio en la pantalla Luego se 
    # utiliza para mostrar las opciones disponibles para la pregunta actual que 
    # obtenemos a través del número de pregunta y Actualiza  cada una de las opciones
    # para la pregunta actual del botón de radio.
    def display_options(self):
        val=0
         
        # desmarcando las opciones
        self.opt_selected.set(0)
         
        # bucle sobre las opciones a mostrar para el texto de los botones de radio.
        for option in options[self.q_no]:
            self.opts[val]['text']=option
            val+=1
 
 
    # Este método muestra la Pregunta actual en la pantalla
    def display_question(self):
         
        # configuración de las propiedades de la Pregunta
        q_no = Label(gui, text=question[self.q_no], width=60,
        font=( 'ariel' ,16, 'bold' ), anchor= 'w' )
         
        #colocar la opción en la pantalla
        q_no.place(x=70, y=100)
 
 
    # Este método se utiliza para mostrar el título
    def display_title(self):
         
        # El título a mostrar
        title = Label(gui, text=" Quiz de Ecuaciones \n Recuerda comprobarlo con la calculadora (:",
        width=50, bg="blue",fg="white", font=("ariel", 20, "bold"))
         
        # lugar del título
        title.place(x=0, y=2)
 
 
    # Este método muestra los botones de radio para seleccionar la Pregunta en 
    # la pantalla en la posición especificada. También devuelve un lsit de botones 
    # de radio que luego se utilizan para añadir las opciones a ellos.
    def radio_buttons(self):
         
        # inicializar la lista con una lista vacía de opciones
        q_list = []
         
        # posición de la primera opción
        y_pos = 150
         
        # añadir las opciones a la lista
        while len(q_list) < 4:
             
            # configuración de las propiedades de los botones de radio
            radio_btn = Radiobutton(gui,text=" ",variable=self.opt_selected,
            value = len(q_list)+1,font = ("ariel",14))
             
            # añadir el botón a la lista
            q_list.append(radio_btn)
             
            # colocación del botón
            radio_btn.place(x = 100, y = y_pos)
             
            # incrementando la posición del eje y en un 40
            y_pos += 40
         
        # devolver los botones de radio
        return q_list
 
# Crear una ventana GUI
gui = Tk()
 
# sestablecer el tamaño de la ventana de la interfaz gráfica de usuario
gui.geometry("800x450")
 
# establecer el título de la Ventana
gui.title("Eres genial por querer mejorar tus conocimientos")
 
# obtener los datos del archivo json
with open('data.json') as f:
    data = json.load(f)
 
# establecer la pregunta, las opciones y la respuesta
question = (data['question'])
options = (data['options'])
answer = (data[ 'answer'])
 
# crear un objeto de la clase Quiz.
quiz = Quiz()
 
# Iniciar la GUI
gui.mainloop()
 
# END DEL PROGRAMA
