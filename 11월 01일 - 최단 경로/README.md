# 최단경로

[메인으로 돌아가기](https://github.com/Altu-Bitu-3/Notice)

## 💻 튜터링

### 라이브 코딩

|문제 번호|문제 이름|난이도|풀이 링크|분류|
| :-----: | :-----: | :-----: | :-----: | :-----: |
|<a href="https://www.acmicpc.net/problem/1753" target="_blank">1753</a>|<a href="https://www.acmicpc.net/problem/1753" target="_blank">최단경로</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[바로가기]()|다익스트라|
|<a href="https://www.acmicpc.net/problem/11404" target="_blank">11404</a>|<a href="https://www.acmicpc.net/problem/11404" target="_blank">플로이드</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[바로가기]()|플로이드-워셜|
|<a href="https://www.acmicpc.net/problem/11657" target="_blank">11657</a>|<a href="https://www.acmicpc.net/problem/11657" target="_blank">타임머신</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[바로가기]()|벨만-포드|


## ✏️ 과제
### 마감기한
~ 11 / 07 (월) 낮 12:00 - 코드 리뷰 </br>
~ 11 / 08 (화) 밤 12:00 - 추가 제출 </br>

### 필수

|문제 번호|문제 이름|난이도|풀이 링크|분류|
| :-----: | :-----: | :-----: | :-----: | :-----: |
|<a href="https://www.acmicpc.net/problem/16235" target="_blank">16235</a>|<a href="https://www.acmicpc.net/problem/16235" target="_blank">나무 재테크</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/13.svg"/>|[C++]()<br/>|구현, 시뮬레이션|
|<a href="https://www.acmicpc.net/problem/3085" target="_blank">3085</a>|<a href="https://www.acmicpc.net/problem/3085" target="_blank">사탕 게임</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/9.svg"/>|[C++]()<br/>|구현, 브루트 포스|

---

### 선택

|문제 번호|문제 이름|난이도|풀이 링크|분류|
| :-----: | :-----: | :-----: | :-----: | :-----: |
|<a href="https://www.acmicpc.net/problem/10282" target="_blank">10282</a>|<a href="https://www.acmicpc.net/problem/10282" target="_blank">해킹</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[C++]()<br/>|다익스트라|
|<a href="https://www.acmicpc.net/problem/1504" target="_blank">1504</a>|<a href="https://www.acmicpc.net/problem/1504" target="_blank">특정한 최단 경로</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[C++]()<br/>|다익스트라|
|<a href="https://www.acmicpc.net/problem/1865" target="_blank">1865</a>|<a href="https://www.acmicpc.net/problem/1865" target="_blank">웜홀</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/13.svg"/>|[C++]()<br/>|벨만-포드|
|<a href="https://www.acmicpc.net/problem/1719" target="_blank">1719</a>|<a href="https://www.acmicpc.net/problem/1719" target="_blank">택배</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>|[C++]()<br/>|플로이드-워셜|
|<a href="https://programmers.co.kr/learn/courses/30/lessons/72413" target="_blank">2021 KAKAO BLIND RECRUITMENT</a>|<a href="https://programmers.co.kr/learn/courses/30/lessons/72413" target="_blank">합승택시요금</a>|Level 3|[C++]()<br/>|다익스트라, 플로이드-워셜|



---

### 힌트
<details>
<summary>나무 재테크</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  deque 컨테이너를 활용해서 어린 나무부터 순서대로 저장해보아요.
</div>
</details>

<details>
<summary>사탕 게임</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
 범위가 크지 않으니 바꿀 수 있는 사탕을 하나하나 다 바꿔봐도 좋아요. 각 행과 열에서 먹을 수 있는 사탕의 수를 세는게 중요하겠네요.
</div>
</details>

<details>
<summary>해킹</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  감염 방향을 잘 고려해야겠어요. 가장 마지막 노드가 감염되는 최소 시간을 어떻게 구할 수 있을까요?
</div>
</details>

<details>
<summary>특정한 최단 경로</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  필수로 지나야 하는 두 점을 지나는 경로가 어떻게 되는지 생각해볼까요? 한 번 이동했던 정점, 간선을 또 갈 수 있다고 해서 어렵게 생각하지 마세요! 오히려 이게 문제를 쉽게 풀 수 있는 큰 힌트입니다!
</div>
</details>

<details>
<summary>웜홀</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  시간이 뒤로 갈 수 있다네요? 음수 가중치일때 사용할 수 있는 알고리즘을 배웠었죠!
것보다 벨만 포드는 분명 출발점이 특정한 한 점일때 가능한 알고리즘이라고 배웠는데,시작지점이 정해져있지 않네요.
그런데 특정 정점 하나만 확인하면 해당 정점과 단절된 노드가 포함된 음수 사이클을 발견할 수 없죠!
우리는 최단거리에는 관심이 없고, 오로지 음수 사이클의 존재 여부만 확인하고 싶은 상황에서 어떻게 하면 될까요?
</div>
</details>

<details>
<summary>택배</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  모든 정점끼리의 최단경로를 알아야겠네요! 만약 i,j 사이에 포함될 수 있는 중간 경로 k가 생긴다면 어떻게 반영해야 할까요? i->t->k->j 경로의 경우도 고려해서 생각해보아요.
</div>
</details>

<details>
<summary>합승 택시 요금</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
  함께 합승할 수 있는 지점은 총 몇 개인가요? 계산에 고려해야 할 가능한 시작, 도착 지점의 쌍이 어떻게 될까요?
</div>
</details>


---
