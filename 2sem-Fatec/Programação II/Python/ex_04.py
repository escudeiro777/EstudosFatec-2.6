# login com verificação de tentativas

loginnok = "afteste"
senhanok="@123"
#
vlogin = input("Login: ")
vsenha = input ("Senha: ")
if (vlogin == loginnok and vsenha == senhanok):
    print("Acesso permitido")
else:
    print("Credenciais incorretas")
quit()
