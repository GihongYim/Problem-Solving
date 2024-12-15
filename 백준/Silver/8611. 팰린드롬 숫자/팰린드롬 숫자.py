def is_palindrome(s):
    """
    문자열 s가 회문인지 확인하는 함수
    """
    return s == s[::-1]

def to_base(n, base):
    """
    숫자 n을 주어진 base 진법으로 변환해 문자열로 반환하는 함수
    """
    result = ''
    while n > 0:
        result += str(n % base)
        n //= base
    return result

def main():
    n = int(input())
    num_of_palindrome = 0

    for base in range(2, 11):  # 2진법부터 10진법까지 검사
        converted = to_base(n, base)  # 진법 변환 결과 문자열
        if is_palindrome(converted):
            print(base, converted)
            num_of_palindrome += 1

    if num_of_palindrome == 0:
        print("NIE")

if __name__ == "__main__":
    main()