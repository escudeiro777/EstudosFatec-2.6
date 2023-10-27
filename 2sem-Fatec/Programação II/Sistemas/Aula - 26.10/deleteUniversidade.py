import sqlite3
conn = sqlite3.connect("universidade.db")

vcodigo = input("Insira o código do curso: ")
cursor = conn.cursor()
cursor.execute("SELECT count(*), cursos, mensalidade FROM cursos WHERE codigo = " + vcodigo )
resultadoSelect = cursor.fetchone()

if resultadoSelect[1] != None: 
    print(f"O curso com o código {vcodigo} é {resultadoSelect[1]} e seu preço é {resultadoSelect[2]}")
    vconfirma = input("Confirma a exclusão deste curso? (Sim/Não)" )
    if vconfirma.lower() == "sim":
        conn.execute("DELETE FROM cursos WHERE codigo = " + vcodigo)
        print("Curso excluído com sucesso")
        conn.commit() 

else: 
        print("O código informado não existe")

conn.close()