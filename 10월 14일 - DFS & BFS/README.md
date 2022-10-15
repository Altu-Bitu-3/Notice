# DFS & BFS

[메인으로 돌아가기](https://github.com/Altu-Bitu-3/Notice)

## 💻 튜터링

### 라이브 코딩

|문제 번호|문제 이름|난이도|풀이 링크|분류|
| :-----: | :-----: | :-----: | :-----: | :-----: |
|<a href="https://www.acmicpc.net/problem/1260" target="_blank">1260</a>|<a href="https://www.acmicpc.net/problem/1260" target="_blank">DFS와 BFS</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/9.svg"/>|[C++]()|DFS, BFS|
|<a href="https://www.acmicpc.net/problem/2606" target="_blank">2606</a>|<a href="https://www.acmicpc.net/problem/2606" target="_blank">바이러스</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/8.svg"/>|[C++]()|DFS, BFS|
|<a href="https://www.acmicpc.net/problem/7576" target="_blank">7576</a>|<a href="https://www.acmicpc.net/problem/7576" target="_blank">토마토</a>|<img height="25px" width="25px" src="https://static.solved.ac/tier_small/11.svg"/>|[C++]()|BFS|

## ✏️ 과제

### 마감기한

~ 10 / 30 (일) 낮 12:00 - 코드 리뷰 </br>
~ 10 / 31 (월) 밤 12:00 - 추가 제출 </br>

### 선택

|                                 문제 번호                                 |                                    문제 이름                                     |                                       난이도                                       | 풀이 링크 |         분류          |
| :-----------------------------------------------------------------------: | :------------------------------------------------------------------------------: | :--------------------------------------------------------------------------------: | :-------: | :-------------------: |
| <a href="https://www.acmicpc.net/problem/1012" target="_blank">1012</a> |   <a href="https://www.acmicpc.net/problem/3079" target="_blank">유기농 배추</a>   | <img height="25px" width="25px" src="https://static.solved.ac/tier_small/9.svg"> |  [C++]()  | DFS+BFS |
|  <a href="https://www.acmicpc.net/problem/2468" target="_blank">2468</a>  |    <a href="https://www.acmicpc.net/problem/2468" target="_blank">안전 영역</a>     | <img height="25px" width="25px" src="https://static.solved.ac/tier_small/10.svg"/> |  [C++]()  | DFS, BFS, 브루트포스 |
| <a href="https://school.programmers.co.kr/learn/courses/30/lessons/1829" target="_blank">2017 카카오코드 예선</a> |   <a href="https://school.programmers.co.kr/learn/courses/30/lessons/1829" target="_blank">카카오프렌즈 컬러링북</a>    |   |  [C++]()  | DFS,BFS |
| <a href="https://www.acmicpc.net/problem/11725" target="_blank">11725</a> | <a href="https://www.acmicpc.net/problem/11725" target="_blank"> 트리의 부모 찾기 </a> | <img height="25px" width="25px" src="https://static.solved.ac/tier_small/9.svg"/> |  [C++]()  | DFS, BFS, 트리 |
| <a href="https://www.acmicpc.net/problem/17266" target="_blank">19538</a> | <a href="https://www.acmicpc.net/problem/19538" target="_blank">루머</a> | <img height="25px" width="25px" src="https://static.solved.ac/tier_small/12.svg"/>  |  [C++]()  | BFS, 그래프 탐색 |

---

### 힌트

<details>
<summary>유기농배추</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;구역을 지정하기 위해 방문했던 곳은 다시 방문하면 안될 것 같아요!

</div>
</details>

<details>
<summary>안전 영역</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;상하좌우로 이동하면서 물에 잠기지 않는 영역을 방문한 뒤, 배열에 표시해 보도록 해요!
 
</div>
</details>

<details>
<summary>카카오프렌즈 컬러링북</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
 방문 순서는 중요하지 않네요. DFS/BFS 중 어느것을 활용해도 괜찮을 것 같아요! 셀을 하나하나 검토하며 상하좌우로 뻗어나가며 같은 색깔을 지닌 영역인지 판단하면 되겠네요! 이미 방문 했던 곳을 한번 더 방문하지 않도록 하는 것이 중요해보여요.
</div>
</details>

<details>
<summary>트리의 부모 찾기</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
탐색 시작 위치를 잡는 것이 중요해요. 두 노드 중 어떤 노드가 부모노드인지 구분하기 위해서는 어떤 노드부터 탐색을 시작해야 할까요?
</div>
</details>

<details>
<summary>루머</summary>
<div markdown="1">
&nbsp;&nbsp;&nbsp;&nbsp;
각 사람이 루머를 믿기까지 루머를 믿는 주변인이 몇 명 남았는지를 확인해 가면서 풀어봐요! 주변인의 절반 이상이 루머를 믿을 때 본인도 믿는 다는 것을 주의해주세요!
</div>
</details>
