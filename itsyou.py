import time

def animate_line(text, delay=0.08):
    for c in text:
        print(c, end='', flush=True)
        time.sleep(delay)
    print()

lyrics = [
    ("Met a lot of people, but nobody feels like you", 0),
    ("So please don't break my heart", 5),
    ("Don't tear me apart", 8),
    ("I know how it starts", 10.5),
    ("Trust me, I've been broken before", 13),
    ("Don't break me again", 16),
    ("I am delicate", 19),
]

start_time = time.time()
for line, lyric_time in lyrics:
    while time.time() - start_time < lyric_time:
        time.sleep(0.1)
    animate_line(line, delay=0.08)
    
print("\n🎵 Terima kasih sudah ikut nyanyi bareng!")
