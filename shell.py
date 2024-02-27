import remora

while 1:
    text = input('remora 1.0 > ')
    if not len(text.strip()): continue
    result, error = remora.run('<stdin>', text)

    if error: print(error.as_string())
    elif result: 
        if len(result.elements) == 1:
            print(str(result.elements[0]))
        else:
            print(str(result),"exit code")