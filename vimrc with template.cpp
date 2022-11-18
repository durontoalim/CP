set number
set guifont=Consolas:h12
set tabstop=5
set shiftwidth=5
set mouse=a
set smartcase

cd S:\Contest

source $VIMRUNTIME/mswin.vim
behave mswin

inoremap ( ()<Esc>i
inoremap { {}<Esc>i
inoremap {<CR> {<CR>}<Esc>O
inoremap [ []<Esc>i
inoremap ' ''<Esc>i
inoremap " ""<Esc>i
inoremap <c-z> <c-o>:u<CR>
inoremap <c-s> <c-o>:w<CR>
inoremap <c-d> <c-o>yy<c-o>p<CR>

:map <ENTER> i

autocmd filetype cpp inoremap <F5> <c-o>:w <bar> !g++ -std=c++14 % -o %:r -Wl,--stack,268435456<CR>
autocmd filetype cpp inoremap <F9> <c-o>:!%:r<CR>

autocmd BufNewFile  *.cpp 0r S:\co\Template.cpp


if v:progname =~? "evim"
  finish
endif
source $VIMRUNTIME/defaults.vim

if has("vms")
  set nobackup		
else
  set backup	
  if has('persistent_undo')
    set undofile	
endif
endif

if &t_Co > 2 || has("gui_running")
  set hlsearch
endif

augroup vimrcEx
  au!

  autocmd FileType text setlocal textwidth=78
augroup END
if has('syntax') && has('eval')
  packadd! matchit
endif


" Template

:vmap <C-j> :s/^/\\\<\C\R\>/<CR>:nohlsearch<CR>

iab lol 
\<CR>/** In the Name of ALLAH */
\<CR>
\<CR>
\<CR>#include<bits/stdc++.h>
\<CR>using namespace std;
\<CR>
\<CR>typedef long long ll;
\<CR>typedef vector<int> vi;
\<CR>typedef vector<ll> vl;
\<CR>typedef vector<vi> vvi;
\<CR>typedef vector<vl> vvl;
\<CR>typedef pair<int,int> pii;
\<CR>typedef pair<double, double> pdd;
\<CR>typedef pair<ll, ll> pll;
\<CR>typedef vector<pii> vii;
\<CR>typedef vector<pll> vll;
\<CR>typedef double dl;
\<CR>
\<CR>#define PB push_back
\<CR>#define F first
\<CR>#define S second
\<CR>#define MP make_pair
\<CR>#define endl '\n'
\<CR>#define all(a) (a).begin(),(a).end()
\<CR>#define rall(a) (a).rbegin(),(a).rend()
\<CR>#define sz(x) (int)x.size()
\<CR>
\<CR>const double PI = acos(-1);
\<CR>const double eps = 1e-9;
\<CR>const int inf = 2000000000;
\<CR>const ll infLL = 9000000000000000000;
\<CR>#define MOD 1000000007
\<CR>
\<CR>#define mem(a,b) memset(a, b, sizeof(a) )
\<CR>#define sqr(a) ((a) * (a))
\<CR>
\<CR>#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
\<CR>#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
\<CR>#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
\<CR>
\<CR>int dx[] = {0, 0, +1, -1, +1, +1, -1, -1};
\<CR>int dy[] = {+1, -1, 0, 0, +1, -1, +1, -1};
\<CR>
\<CR>inline ll gcd ( ll a, ll b ) { return __gcd (a, b); }
\<CR>inline ll lcm ( ll a, ll b ) { return ( a * ( b / gcd (a, b) ) ); }
\<CR>
\<CR>
\<CR>
\<CR>#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
\<CR>void faltu () {            cerr << endl;}
\<CR>template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}
\<CR>
\<CR>
\<CR>int main()
\<CR>{
\<CR>optimize();
\<CR>
\<CR>return 0;
\<CR>}


" Modular arithmatic

iab MOD 
\<CR>inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
\<CR>inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
\<CR>inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
\<CR>inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
\<CR>inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
\<CR>inline ll modInverse(ll a) { return modPow(a, MOD-2); }
\<CR>inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }




