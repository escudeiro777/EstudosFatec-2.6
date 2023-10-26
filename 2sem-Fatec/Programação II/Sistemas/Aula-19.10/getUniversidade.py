import sqlite3

conn = sqlite3.connect("universidade.db")

vcodigo = input("Insira o código do curso a ser consultado: ")
try:
    # Crie um cursor para executar consultas SQL
    cursor = conn.cursor()

    # Execute a consulta usando um parâmetro de substituição para o código
    cursor.execute("SELECT cursos FROM cursos WHERE codigo = ?", (vcodigo,))

    # Recupere o resultado da consulta
    resultado = cursor.fetchone()

    if resultado:
        print(f"O curso com o código {vcodigo} é: {resultado[0]}")
    else:
        print(f"Não foi encontrado um curso com o código {vcodigo}")

except sqlite3.Error as e:
    print("Erro ao executar a consulta:", e)

finally:
    # Feche o cursor e a conexão com o banco de dados
    if cursor:
        cursor.close()
    conn.close()