import remora

while 1:
    text = input('remora > ')
    result, error = remora.run('<stdin>', text)

    if error: print(error.as_string())
    else: print(result)
