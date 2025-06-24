# calc - OSS 기말 프로젝트
> 팀 프로젝트 저장소 : (https://github.com/202407013/2025oss)

> ## 프로젝트 개요
> 간단한 사칙연산 계산기 프로그램 개발 및 Git 브랜치 관리 실습을 목적으로 한 OSS 기말 팀 프로젝트입니다.
>
> ---

> ## 팀 구성 및 역할
> |이름|역할|담당 업무|
> |----|----|---------|
> |최승현(팀장, 202407013)|dev/a,main 브랜치| 브랜치 및 main 병합,충동 해결|
> |김용현(팀원, 202407016)|dev/b 브랜치|기능 개발 및 ReadMe.md작성|
> |조영록(팀원, 202107012)|dev/c 브랜치|기능 개발 |
>
> ---
>
> ## 문제 해결 방법과 병합 순서


> 1.'main' 브랜치와 'dev/a' 브랜치 병합
 
> 2. `main` ↔ `dev/b` 병합 중 충돌 발생
  
> 3. `dev/b`의 내용을 수정하여 **fast-forward 병합**
 
> 4. `dev/c` 브랜치 병합 중 충돌 발생
 
> 5. `dev/c`의 내용을 수정하여 **rebase 병합**
 
> 6. 정상 병합 확인 후 실행 및 테스트
 
> 7. 최종 `README.md` 수정
 

---

##개발 및 병합 과정 스크린샷

### 1.코드 및 병합 과정 스크린샷
최승현팀장 calc.cpp, add.cpp, sub.cpp 수정 이미지와 calc.cpp, add.cpp, sub.cpp  

![choi 승현 add파일 수정](https://github.com/user-attachments/assets/581451d6-1961-4d6f-9eac-b9e1c4a5b38f)  

![choi 승현 sub파일 수정](https://github.com/user-attachments/assets/116e60df-92e9-4cc7-8244-63c8b282f0ce)  

![choi 승현 커밋 내용](https://github.com/user-attachments/assets/9107a946-8f1e-41b1-aa79-f3f544f0ca7b)  


조영록팀원 dive.cpp 수정 이미지와 dive.cpp커밋한 내용  

![div영록 커밋 로그 jpg](https://github.com/user-attachments/assets/84fdb931-4636-4c00-9ec5-42222d77f000)  

![영록div코드](https://github.com/user-attachments/assets/70c62e55-48cc-46c3-bcab-e52bdf552e0b)

김용현팀원 mul.cpp, mod.cpp 수정 이미지와 mul.cpp, mod.cpp커밋한 내용  

![kim mul수정](https://github.com/user-attachments/assets/bf4375cd-5aa9-4596-b9ad-48c145078c84)  

![kim 수정코드 jpg](https://github.com/user-attachments/assets/fddffe68-fd3d-4af7-8ced-b75ee0024d90)  

![kim 깃 커밋 로그](https://github.com/user-attachments/assets/e403cf0d-b864-4cef-96c7-05ec3ca86389)  



main과 dev/a브랜치 병합 이미지
![choi 승현 main과 a병합](https://github.com/user-attachments/assets/a71d80ec-4936-4d36-81aa-a44df72907fe)

main과 dev/c브랜치 병합 이미지
![choi 승현 브랜치c](https://github.com/user-attachments/assets/a24e348f-438d-4f09-9924-0f4dae6fc950)

git flow 이미지 사진  
![gitflow](https://github.com/user-attachments/assets/1c5e94d9-7b64-49cc-a8f1-dec9a8996e37)

계산기코드 출력 화면  

![계산기 코드](https://github.com/user-attachments/assets/4a7a87f4-defb-4685-aa3d-79f539f1d2af)


