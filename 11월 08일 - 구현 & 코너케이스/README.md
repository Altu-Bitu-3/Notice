# 구현 & 코너케이스

[메인으로 돌아가기](https://github.com/Altu-Bitu-3/Notice)

## 💻 튜터링

### 라이브 코딩

|문제 번호|문제 이름|난이도|풀이 링크|분류|
| :-----: | :-----: | :-----: | :-----: | :-----: |
|<a href="https://www.acmicpc.net/problem/2011" target="_blank">2011</a>|<a href="https://www.acmicpc.net/problem/2011" target="_blank">암호코드</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/11.svg"/>|[바로가기]()|다이나믹 프로그래밍|
|<a href="https://www.acmicpc.net/problem/3190" target="_blank">3190</a>|<a href="https://www.acmicpc.net/problem/3190" target="_blank">뱀</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[바로가기]()|구현, 시뮬레이션|

## ✏️ 과제
### 마감기한
~ 11 / 14 (월) 낮 12:00 - 코드 리뷰 </br>
~ 11 / 15 (화) 밤 12:00 - 추가 제출 </br>

### 필수

|문제 번호|문제 이름|난이도|풀이 링크|분류|
| :-----: | :-----: | :-----: | :-----: | :-----: |
|<a href="https://www.acmicpc.net/problem/17281" target="_blank">17281</a>|<a href="https://www.acmicpc.net/problem/17281" target="_blank">⚾</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[C++]()|구현|
|<a href="https://www.acmicpc.net/problem/1063" target="_blank">1063</a>|<a href="https://www.acmicpc.net/problem/1063" target="_blank">킹</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/8.svg"/>|[C++]()|코너케이스|

---


### 선택

|문제 번호|문제 이름|난이도|풀이 링크|분류|
| :-----: | :-----: | :-----: | :-----: | :-----: |
|<a href="https://www.acmicpc.net/problem/2607" target="_blank">2607</a>|<a href="https://www.acmicpc.net/problem/2607" target="_blank">비슷한 단어</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/8.svg"/>|[C++]()|구현, 문자열|
|<a href="https://www.acmicpc.net/problem/14503" target="_blank">14503</a>|<a href="https://www.acmicpc.net/problem/14503" target="_blank">로봇 청소기</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/11.svg"/>|[C++]()|구현, 시뮬레이션|
|<a href="https://www.acmicpc.net/problem/15685" target="_blank">15685</a>|<a href="https://www.acmicpc.net/problem/15685" target="_blank">드래곤 커브</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[C++]()|구현, 시뮬레이션|
|<a href="https://www.acmicpc.net/problem/14500" target="_blank">14500</a>|<a href="https://www.acmicpc.net/problem/14500" target="_blank">테트로미노</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[C++]()|구현, 브루트포스|
|<a href="https://www.acmicpc.net/problem/22251" target="_blank">22251</a>|<a href="https://www.acmicpc.net/problem/22251" target="_blank">빌린 호석</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/11.svg"/>|[C++]()|구현, 브루트포스|

---

### 힌트

<details>
<summary>⚾</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;입력이 그렇게 크지 않네요! 모든 경우의 수를 다 해보면 될 것 같아요. 3아웃이 되면 아웃 카운트와 출루한 주자들이 모두 리셋되고 새로운 이닝이 시작된다는 규칙을 잘 기억해주세요!
</div>
</details>

<details>
<summary>킹</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;돌과 같은 위치가 될 경우, 돌도 옮겨야 해요. 무조건 쌍으로 킹과 돌을 옮기는 것이 아닌 것을 주의하세요!
</div>
</details>

<details>
<summary>비슷한 단어</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;단어가 일치하는지 확인하는 게 아니라 구성을 비교해야 해요. 꽤 자주 말한 것 같지만, 알파벳은 겨우 26개입니다! 문자를 빼거나 더하거나, 바꿀 수 있네요. 두 단어에서 서로 다른 문자의 개수에 집중해볼까요?
</div>
</details>

<details>
<summary>로봇 청소기</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;문제의 조건을 정확하게 이해하는 것이 중요해요. 애매한 부분이 생겼다면 <a href="https://www.acmicpc.net/board/view/96605" target="_blank">링크</a>를 참고해볼까요?
</div>
</details>

<details>
<summary>드래곤 커브</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;문자열들을 문제의 조건대로 정렬하기 위해서 compare함수를 직접 만들어봅시다! 문자열의 문자가 숫자인지 알파벳인지는 어떻게 파악할 수 있을까요? 사람들이 이미 방법을 만들어 놨을지도 몰라요!
</div>
</details>

<details>
<summary>테트로미노</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;모든 모양을 하나하나 해보기엔 경우의 수가 너무 많아요. 각 블럭들을 회전해보면 공통점을 발견 할 수 있을 거에요! 각 블럭의 원소를 탐색하며 모양을 만들어볼까요?
</div>
</details>

<details>
<summary>빌린 호석</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;LED는 켜진 상태 꺼진 상태 2가지 상태 밖에 없네요! 컴퓨터는 비트연산을 가장 빠르게 처리할 수 있어요!
</div>
</details>

---
