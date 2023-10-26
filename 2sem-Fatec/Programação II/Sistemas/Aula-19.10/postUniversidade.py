import sqlite3

conn = sqlite3.connect("universidade.db")

while True:
    vcodigo = input("Insira o código do curso: ")
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
                break  # Sai do loop interno se a mensalidade for válida
        except ValueError:
            print("Entrada inválida. Insira um valor numérico para a mensalidade.")

    vcondicao = input("Deseja inserir mais dados (digite 'sim' para continuar ou 'não' para sair): ")

    if vcondicao.lower() != 'sim':
        break

conn.close()
