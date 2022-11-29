# 최소 신장 트리
[메인으로 돌아가기](https://github.com/Altu-Bitu-3/Notice)
## 💻 튜터링
### 라이브 코딩
|문제 번호|문제 이름|난이도|분류|
| :-----: | :-----: | :-----: | :-----: | 
|<a href="https://www.acmicpc.net/problem/1197" target="_blank">1197</a>|<a href="https://www.acmicpc.net/problem/1197" target="_blank">최소 스패닝 트리</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|최소 신장 트리, 크루스칼, 프림|
|<a href="https://www.acmicpc.net/problem/4386" target="_blank">4386</a>|<a href="https://www.acmicpc.net/problem/4386" target="_blank">별자리 만들기</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|최소 신장 트리, 크루스칼, 프림|
## ✏️ 과제
### 마감기한
~ 12 / 05 (월) 낮 12:00 - 코드 리뷰<br/>
~ 12 / 06 (화) 밤 12:00 - 추가 제출
### 필수

|문제 번호|문제 이름|난이도|분류|
| :-----: | :-----: | :-----: | :-----: |
|<a href="https://www.acmicpc.net/problem/16236" target="_blank">16236</a>|<a href="https://www.acmicpc.net/problem/16236" target="_blank">아기 상어</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[C++]()|구현, 시뮬레이션, 그래프 탐색|
|<a href="https://www.acmicpc.net/problem/1744" target="_blank">1744</a>|<a href="https://www.acmicpc.net/problem/1744" target="_blank">수 묶기</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[C++]()|구현, 브루트 포스|
---

### 선택
|문제 번호|문제 이름|난이도|분류|
| :-----: | :-----: | :-----: | :-----: |
|<a href="https://www.acmicpc.net/problem/1368" target="_blank">1368</a>|<a href="https://www.acmicpc.net/problem/1368" target="_blank">물대기</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/14.svg"/>|최소 신장 트리, 프림|
|<a href="https://www.acmicpc.net/problem/1774" target="_blank">1774</a>|<a href="https://www.acmicpc.net/problem/1967" target="_blank">우주신과의 교감</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|최소 신장 트리, 크루스칼|
|<a href="https://www.acmicpc.net/problem/21924" target="_blank">21924</a>|<a href="https://www.acmicpc.net/problem/21924" target="_blank">도시 건설</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|최소 신장 트리, 그래프|
|<a href="https://www.acmicpc.net/problem/1647" target="_blank">1647</a>|<a href="https://www.acmicpc.net/problem/1647" target="_blank">도시 분할 계획</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|최소 신장 트리, 크루스칼|
|<a href="https://www.acmicpc.net/problem/13418" target="_blank">13418</a>|<a href="https://www.acmicpc.net/problem/13418" target="_blank">학교 탐방하기</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/14.svg"/>|최소 신장 트리, 크루스칼|
---
### 힌트
<details>
<summary>아기 상어</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  상어가 먹을 물고기를 어떤 방법으로 찾아야 할까요? 먹을 수 있는 물고기가 여러 마리일 때는 어떻게 해야 할까요? 상어가 이동할 곳만 잘 찾으면 나머지는 어렵지 않아요. 입력이 정말 작으니 그 어떤 방법을 써도 괜찮아요.
</div>
</details>
<details>
<summary>수 묶기</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  일단 큰 수끼리는 묶는 게 좋아 보여요. 그리고 음수도 묶으면 수를 키울 수 있는 방법이 보이네요. 이때, 서로 곱하면 더 손해인 수와, 서로 곱해야 더 이득인 수를 잘 파악해서 어디까지 수를 묶는 게 좋은지 범위를 잘 설정해야 해요.
</div>
</details>
<details>
<summary>물대기</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  각 논들 사이의 간선을 고려하면서 우물을 파는 경우도 고려하기엔 너무 복잡해요. 우물을 파는 경우도 간선처럼 처리할 수 있는 방법은 없을까요? 모든 물은 강에서 시작되지 않을까요?
  </div>
</details>
<details>
<summary>우주신과의 교감</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
 이미 존재하는 통로가 있네요. 그냥 연결해도 될까요? 확인을 해야 할 것 같아요.
</div>
</details>
<details>
<summary>도시 건설</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  전위 순회로 입력 받은 값을 어떻게 후위 순회로 출력할 수 있을까요?
</div>
</details>
<details>
<summary>도시 분할 계획</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  간선의 합이 최소가 되도록 모든 도시를 연결하는 방법은 너무 잘 알고 있죠! 이 상태에서 비용을 최소로 하면서 두개의 마을로 분리하려면 어떻게 하면 좋을까요? 모든 도시가 연결된 상태라면, 그 중 하나의 간선만 끊어도 도시가 두개로 분리돼죠!
</div>
</details>
<details>
<summary>학교 탐방하기</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  입력으로 들어오는 것은 트리라고 했죠! 트리는 그래프와 다르게 어떤 특징을 지니고 있나요?
</div>
</details>
---
