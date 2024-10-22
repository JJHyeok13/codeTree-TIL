#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 변수 선언 및 입력
    string binary;
    cin >> binary;
	
	// 각 i번째 자릿수를 바꾸었을 때의 십진수 값을 구해줍니다.
	int ans = INT_MIN;
    for(int i = 0; i < (int) binary.size(); i++) {
		// i번째 자릿수를 바꿉니다.
		binary[i] = '0' + '1' - binary[i];
		// 십진수로 변환합니다.
    	int num = 0;
    	for(int j = 0; j < (int) binary.size(); j++)
        	num = num * 2 + (binary[j] - '0');
		
		// 가능한 십진수 값 중 최댓값을 구해줍니다.
		ans = max(ans, num);
		
		// i번째 자릿수를 원래대로 돌려놓습니다.
		binary[i] = '0' + '1' - binary[i];
	}
    
    // 출력
    cout << ans;
	
    return 0;
}