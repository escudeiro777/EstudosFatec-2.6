import sqlite3
conn = sqlite3.connect("universidade.db")

while True: 
    vcodigo = input("Insira o código do curso: ")
    try: 
        cursor = conn.cursor()
        cursor.execute("SELECT count(*), cursos, mensalidade FROM cursos WHERE codigo = " + vcodigo )
        resultadoSelect = cursor.fetchone()

        if resultadoSelect[1] != None: 
            print(f"Código já cadastrado. O curso com o código {vcodigo} é {resultadoSelect[1]} e seu preço é {resultadoSelect[2]}")
        else:
            break
    except sqlite3.Error as e:
        print("Erro ao executar a consulta:", e)