print("olá, Bom dia")
op=0
Valor_bruto= float(input("Qual o valor bruto do seu salário?"))
Valor_liquido= 0

op = int(input("escolha um dos reajustes\n" "1- 3,43%\n" "2- 2,07%\n" "3- 6,58%\n" "4- 11,28%\n"))

if op == 1:
    Valor_liquido= Valor_bruto+(Valor_bruto*0.0343)
    print("O valor liquido a receber é R$", Valor_liquido)
if op == 2:
    Valor_liquido= Valor_bruto+(Valor_bruto*0.0207)
    print("O valor liquido a receber é R$", Valor_liquido)
if op == 3:
    Valor_liquido= Valor_bruto+(Valor_bruto*0.0658)
    print("O valor liquido a receber é R$", Valor_liquido)
if op == 4:
    Valor_liquido= Valor_bruto+(Valor_bruto*0.1128)
    print("O valor liquido a receber é R$", Valor_liquido)