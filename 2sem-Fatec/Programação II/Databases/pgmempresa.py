import mysql.connector
from hashlib import sha256    #Para obter o hash equivalente a senha
import sqlite3
# Conexão com SGDB
conn = sqlite3.connect("dbempresa.db")
cursor = conn.cursor()
# Obtém cpf para pesquisar e prepara instrução SQL
vlogin = input("Login: ")
vsenha = input("Senha: ")
# Obtém hash equivalente a senha informada
senha_hash = sha256(vsenha.encode()).hexdigest()

#prepara instrução sql
isql =        "  Select count(*) from usuario"
isql = isql + "  where login = " + "'" + vlogin + "'" 
isql = isql + "    and senha = " + "'" + senha_hash + "'" 

#envia instrução sql para ser executada
cursor.execute(isql)

#  recebe retorno do sgdb
rs = cursor.fetchone()
# trata os dados recebidos
if rs[0] > 0:
    print("Acesso permitido!")
else:
    print("Login ou senha incorretos!")
input("Pressione <enter> para continuar")
conn.close
quit()
