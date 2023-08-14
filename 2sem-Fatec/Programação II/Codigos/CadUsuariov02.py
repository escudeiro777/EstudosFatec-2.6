from hashlib import sha256    #Para obter o hash equivalente a senha
from datetime import datetime #Para obter a data hora do sistema
import sqlite3
# Conexão com SGDB
conn = sqlite3.connect("dbempresa.db")
cursor = conn.cursor()
#=============================================================================
print("==============================")
print("#       Cadastramento        #")
print("="*30)
#vcpf = input("CPF: ")
vcpf = ""
while not vcpf.isdigit() or len(vcpf) != 11:
    vcpf = input("CPF: ")
    if not vcpf.isdigit() or len(vcpf) != 11:
        print("CPF deve conter apenas números,\ntotal 11 digitos,\nInserir novamente")
    else:
      cursor.execute("SELECT COUNT(*) FROM usuario WHERE cpf=?", (vcpf,))
      rs=cursor.fetchone()
      if rs [0] > 0:
         print("CPF já cadastrado. Por favor, tente novamente.")
         vcpf = ""
        
vnome = input("Nome: ")
vlogin = input("Login: ")
vsenha = input("Senha: ")
vstatus = input("Status (1-Ativo 2-Bloqueado: ")
continua = input("Confirma a inclusão deste usuário? (S/N): ")
# Obtém hash equivalente a senha informada
senha_hash = sha256(vsenha.encode()).hexdigest()
# obtem data/hora do sistema
data_hora = datetime.now().strftime('%y-%m-%d %H:%M:%S')
## preparar instrução SQL
isql =  " insert into usuario values ("
isql = isql + vcpf
isql = isql + ", " + "'" + vnome + "'"
isql = isql + ", " + "'" + vlogin + "'"
isql = isql + ", " + "'" + senha_hash + "'"
isql = isql + ", " + "'" + data_hora + "'"
isql = isql + ", " + vstatus
isql = isql + ");"
cursor.execute(isql)
conn.commit()
conn.close
quit()












