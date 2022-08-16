from gmpy import mpz

base = mpz(2)
expo = mpz(2)

with open(f"database/base-{base}", "w") as file:
	while expo <= 65535:
		file.write(f"{base ** expo}={base}^{expo}\n")
		expo += 1
