# 이분탐색

[메인으로 돌아가기](https://github.com/Altu-Bitu-3/Notice)

## 💻 튜터링

### 라이브 코딩

|문제 번호|문제 이름|난이도|풀이 링크|분류|
| :-----: | :-----: | :-----: | :-----: | :-----: |
|<a href="https://www.acmicpc.net/problem/1920" target="_blank">1920</a>|<a href="https://www.acmicpc.net/problem/1920" target="_blank">수 찾기</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/7.svg"/>|[C++]()|이분탐색|
|<a href="https://www.acmicpc.net/problem/10816" target="_blank">10816</a>|<a href="https://www.acmicpc.net/problem/10816" target="_blank">숫자 카드 2</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/7.svg"/>|[C++]()|이분탐색|
|<a href="https://www.acmicpc.net/problem/2110" target="_blank">2110</a>|<a href="https://www.acmicpc.net/problem/2110" target="_blank">공유기 설치</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[C++]()|이분탐색|

## ✏️ 과제

### 마감기한

~ 10 / 30 (일) 낮 12:00 - 코드 리뷰 </br>
~ 10 / 31 (월) 밤 12:00 - 추가 제출 </br>

### 선택

|                                 문제 번호                                 |                                    문제 이름                                     |                                       난이도                                       | 풀이 링크 |         분류          |
| :-----------------------------------------------------------------------: | :------------------------------------------------------------------------------: | :--------------------------------------------------------------------------------: | :-------: | :-------------------: |
| <a href="https://www.acmicpc.net/problem/3079" target="_blank">3079</a> |   <a href="https://www.acmicpc.net/problem/23757" target="_blank">입국심사</a>   | <img height="25px" width="25px" src="https://static.solved.ac/tier_small/11.svg"> |  [C++]()  | 이분탐색, 매개변수 탐색|
|  <a href="https://www.acmicpc.net/problem/1365" target="_blank">1365</a>  |    <a href="https://www.acmicpc.net/problem/1365" target="_blank">꼬인 전깃줄</a>     | <img height="25px" width="25px" src="https://static.solved.ac/tier_small/13.svg"/> |  [C++]()  |   이분탐색, 가장 긴 증가하는 수열  |
| <a href="https://www.acmicpc.net/problem/17503" target="_blank">17503</a> |   <a href="https://www.acmicpc.net/problem/17503" target="_blank">맥주 축제</a>    | <img height="25px" width="25px" src="https://static.solved.ac/tier_small/9.svg"/>  |  [C++]()  |       이분탐색, 우선순위 큐, 그리디        |
| <a href="https://www.acmicpc.net/problem/16401" target="_blank">16401</a> | <a href="https://www.acmicpc.net/problem/16401" target="_blank">과자 나눠주기</a> | <img height="25px" width="25px" src="https://static.solved.ac/tier_small/9.svg"/> |  [C++]()  | 이분탐색, 매개변수 탐색 |
| <a href="https://www.acmicpc.net/problem/17266" target="_blank">17266</a> | <a href="https://www.acmicpc.net/problem/17266" target="_blank">어두운 굴다리</a> | <img height="25px" width="25px" src="https://static.solved.ac/tier_small/7.svg"/>  |  [C++]()  | 구현, 이분탐색 |

---

### 힌트

<details>
<summary>입국심사</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
시간의 최소값을 찾는 문제네요! 상근이가 어떤 시간을 찾고 싶은 건지 생각해보세요! 또 상근이의 친구가 굉장히 많아보이고 심사시간도 긴 것 같아요!
</div>
</details>

<details>
<summary>꼬인 전깃줄</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
전선이 꼬이는 이유는 현재 연결된 전선의 왼쪽 전봇대보다 밑에 있는 전봇대에서, 현재 연결된 오른쪽 전봇대보다 위에 있는 전봇대와 연결되어 있기 때문이죠! 
전선을 잘라내고 남아있는 전선들의 패턴을 파악해볼까요?
  
어떤 알고리즘을 썼는지 파악하셨다면 아래 힌트를 봐주세요!

N의 범위가 조금 커 보이네요. LIS를 기존의 방식 말고, LIS를 만들어 간다고 생각하고 풀어보면 어떨까요? 
즉, 수열의 길이를 배열의 인덱스로, 배열의 원소에는 숫자를 넣어서 관리하는 거죠.  
</div>
</details>

<details>
<summary>맥주 축제</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;

</div>
</details>

<details>
<summary>과자 나눠주기</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
과자조각의 최대 길이를 이분탐색으로 변화시키면서, 최대길이만큼 만들 수 있는 과자 조각 수가 얼마인지 생각해 봐요! 
과자 조각 수가 어떨 때에 조카들에게 과자를 나눠 줄 수 있을까요?
</div>
</details>

<details>
<summary>어두운 굴다리</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
설정한 가로등 높이가 모든 구간을 밝힐 수 있는지 구간마다 확인해볼까요?
</div>
</details>
