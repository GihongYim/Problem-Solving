import hashlib

input_data = input()
# 입력받은 데이터의 바이트 객체를 구한다.
encoded_data = input_data.encode()
# hashlib의 sha256 함수를 사용해서 해쉬 객체를 만든다. 
result = hashlib.sha256(encoded_data).hexdigest()
print(result)
