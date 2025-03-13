import mmap

a = "Hello sweatheart!\0"
bytes = str.encode(a)

mm = mmap.mmap(-1, len(bytes), "love")
mm.seek(0)
mm.write(bytes)
mm.flush()

print("I have opened my heart!")
pause = input()
