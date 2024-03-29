
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;


#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/****** Template of some basic operations *****
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
**********************************************/

/****** Template of Fast I/O Methods *********
template <typename T> inline void write(T x)
{
	int i = 20;
	char buf[21];
	// buf[10] = 0;
	buf[20] = '\n';

	do
	{
		buf[--i] = x % 10 + '0';
		x/= 10;
	}while(x);
	do
	{
		putchar(buf[i]);
	} while (buf[i++] != '\n');
}

template <typename T> inline T readInt()
{
	T n=0,s=1;
	char p=getchar();
	if(p=='-')
		s=-1;
	while((p<'0'||p>'9')&&p!=EOF&&p!='-')
		p=getchar();
	if(p=='-')
		s=-1,p=getchar();
	while(p>='0'&&p<='9') {
		n = (n<< 3) + (n<< 1) + (p - '0');
		p=getchar();
	}

	return n*s;
}


/*

//--\\ to round off int value
// round int intValue = static_cast<int>(dblValue < 0 ? dblValue - 0.5 : dblValue + 0.5);

*/


*/

//--\\to find max element in vector arr

/* 
int max = *max_element(arr.begin(), arr.end());
*/



//--\\to sort vector arr

/*
int n= sizeof(arr)/sizeof[0];
sort(arr,n);
*/



//--\\to print reverse of string at a given character.

/*
string reversePrefix(string word, char ch) {

    for (int i = 0; i < word.size(); i++) {
        if (word[i] == ch) {
            reverse(word.begin(), word.begin()+i+1);
            break;
        }
    }
    return word;
    }
 */

/*
abcdefd
d
dcbaefd

abcd
z
abcd
*/


//--\\to find the no. of +,-,0 no. in arr and the ratio of their frequency.

/*
void plusMinus(vector<int> arr,int n) {
   int pos=0,neg=0,zer=0;
  for (int i=0; i<n; i++) {
  if(arr[i]>=1){
       pos++;
   }
   if(arr[i]==0){
       zer++;
   }
   if(arr[i]<0){
       neg++;
   }
  }
   
   double pr=0,nr=0,zr=0;
  
    //cout<<"p-"<<pos<<" n-"<<neg<<" z-"<<zer;
    pr=static_cast<double>(pos)/n;
    nr=static_cast<double>(neg)/n;
    zr=static_cast<double>(zer)/n;
    cout << std::fixed;
    cout << std::setprecision(6);
   
}
*/

/*
-4 3 -9 0 4 1

p-3 n-2 z-1
pr=0.500000
nr=0.333333
zr=0.166667
*/


/*
//--\\ to replace a character in string by a given charater by particular charater using sstream.
#include <sstream>
using namespace std;
string defangIPaddr(string address) 
{
    std::stringstream ss;
    for(int i=0;i<address.length();i++){
        if(address[i]=='.'){
            ss<<"[.]";//replacing . with [.]
        }else{
            ss<<address[i];
        }
    }
    return ss.str();
}

*/


int main()
{
  

	return 0;
}
