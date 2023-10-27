import sqlite3

conn = sqlite3.connect("universidade.db")

while True:

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

    vcursos = input("Insira o nome do curso: ")
    vmensalidade = float(input("Insira o valor da mensalidade: "))
    vconfirma = input("Deseja cadastrar? Digite 'Sim' ou 'Não': ")

    if vconfirma.lower() == "sim":
        conn.execute("INSERT INTO cursos (cursos, mensalidade, codigo) VALUES (?, ?, ?)", (vcursos, vmensalidade, vcodigo))
        conn.commit()

    while True:
        try:
            if vmensalidade <= 0:
                print("O valor da mensalidade é inválido. Por favor, insira um valor maior ou igual a 0.")
            else:
                break 
        except ValueError:
            print("Entrada inválida. Insira um valor numérico para a mensalidade.")

    vcondicao = input("Deseja inserir mais dados (digite 'sim' para continuar ou 'não' para sair): ")

    if vcondicao.lower() == 'não':
         print("\n\nCurso cadastrado com sucesso!")
    break
   
conn.close()
