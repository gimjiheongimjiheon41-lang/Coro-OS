void kernel_main() {
    // VGA 텍스트 버퍼 주소
    char *video_memory = (char *) 0xB8000;

    // 출력할 문자열
    const char *str = "Welcome to Coro OS!";
    
    // 화면에 한 글자씩 복사 (문자, 색상 순서)
    for (int i = 0; str[i] != '\0'; i++) {
        video_memory[i * 2] = str[i];     // 문자
        video_memory[i * 2 + 1] = 0x07;  // 색상 (회색 글자, 검정 배경)
    }

    // OS가 종료되지 않게 무한 루프
    while (1);
}