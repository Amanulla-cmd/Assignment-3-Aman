CSA02 - ASSIGNMENT 3 (CO3)\nC PROGRAMS\n\n==============================================================================\nQ1_Binary_Search.c\n==============================================================================\n#include <stdio.h>
int steps;
int binary_search(const int a[], int n, int key) {
    int low = 0, high = n - 1;
    steps = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        steps++;
        if (a[mid] == key) return mid;
        if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main(void) {
    int accession[] = {1021,1048,1103,1190,1222,1305,1377,1402,1460,1533};
    int keys[] = {1021,1305,1533,1400};
    int n = sizeof(accession)/sizeof(accession[0]);
    for (int k=0;k<4;k++) {
        int pos=binary_search(accession,n,keys[k]);
        printf("Book %d -> index %d, comparisons = %d\\n",keys[k],pos,steps);
    }
    return 0;
}\n\n==============================================================================\nQ2_Sorting.c\n==============================================================================\n#include <stdio.h>
void print(int a[], int n) {
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    puts("");
}
void bubble(int a[],int n) {
    for(int i=0;i<n-1;i++) {
        int swapped=0;
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]) {int t=a[j];a[j]=a[j+1];a[j+1]=t;swapped=1;}
        if(!swapped) break;
    }
}
void selection(int a[],int n) {
    for(int i=0;i<n-1;i++) {
        int min=i;
        for(int j=i+1;j<n;j++) if(a[j]<a[min]) min=j;
        int t=a[i];a[i]=a[min];a[min]=t;
    }
}
void insertion(int a[],int n) {
    for(int i=1;i<n;i++) {
        int key=a[i],j=i-1;
        while(j>=0 && a[j]>key) {a[j+1]=a[j];j--;}
        a[j+1]=key;
    }
}
int main(void) {
    int x[]={42,17,8,33,25}, y[]={42,17,8,33,25}, z[]={42,17,8,33,25};
    bubble(x,5); selection(y,5); insertion(z,5);
    printf("Bubble sort: ");print(x,5);
    printf("Selection sort: ");print(y,5);
    printf("Insertion sort: ");print(z,5);
    return 0;
}\n\n==============================================================================\nQ3_Merge.c\n==============================================================================\n#include <stdio.h>
int merge(const int a[],int na,const int b[],int nb,int out[]) {
    int i=0,j=0,k=0;
    while(i<na && j<nb) {
        if(a[i]>=b[j]) out[k++]=a[i++];
        else out[k++]=b[j++];
    }
    while(i<na) out[k++]=a[i++];
    while(j<nb) out[k++]=b[j++];
    return k;
}
int main(void) {
    int campusA[]={98,91,85,72}, campusB[]={95,91,80}, merged[7];
    int n=merge(campusA,4,campusB,3,merged);
    for(int i=0;i<n;i++) printf("%d ",merged[i]);
    puts("");
    return 0;
}\n\n==============================================================================\nQ4_Rainfall.c\n==============================================================================\n#include <stdio.h>
#define D 3
#define M 4
void row_totals(int a[D][M]) {
    for(int i=0;i<D;i++) {
        int total=0;
        for(int j=0;j<M;j++) total+=a[i][j];
        printf("District %d annual total: %d mm\\n",i+1,total);
    }
}
void monthly_averages(int a[D][M]) {
    for(int j=0;j<M;j++) {
        int total=0;
        for(int i=0;i<D;i++) total+=a[i][j];
        printf("Month %d average: %.2f mm\\n",j+1,(double)total/D);
    }
}
void maximum_rainfall(int a[D][M]) {
    int max=a[0][0],ri=0,rj=0;
    for(int i=0;i<D;i++) for(int j=0;j<M;j++)
        if(a[i][j]>max) {max=a[i][j];ri=i;rj=j;}
    printf("Maximum rainfall: %d mm (District %d, Month %d)\\n",max,ri+1,rj+1);
}
int main(void) {
    int rain[D][M]={{80,65,90,70},{40,55,60,45},{100,120,95,110}};
    row_totals(rain);
    monthly_averages(rain);
    maximum_rainfall(rain);
    return 0;
}\n\n==============================================================================\nQ5_String_Processing.c\n==============================================================================\n#include <stdio.h>
#include <ctype.h>
int word_count(const char s[]) {
    int count=0,inside=0;
    for(int i=0;s[i]!='\\0';i++) {
        if(s[i]!=' ' && s[i]!='\\t' && s[i]!='\\n') {
            if(!inside) count++;
            inside=1;
        } else inside=0;
    }
    return count;
}
int is_palindrome(const char s[]) {
    int left=0,right=0;
    while(s[right]!='\\0') right++;
    right--;
    while(left<right) {
        while(left<right && !isalpha((unsigned char)s[left])) left++;
        while(left<right && !isalpha((unsigned char)s[right])) right--;
        if(tolower((unsigned char)s[left])!=tolower((unsigned char)s[right])) return 0;
        left++; right--;
    }
    return 1;
}
int main(void) {
    printf("Words: %d\\n",word_count(" Meet at the library at 5 PM "));
    printf("%d %d\\n",is_palindrome("Madam, I'm Adam"),is_palindrome("Hello"));
    return 0;
}\n\n==============================================================================\nQ6_Name_Directory.c\n==============================================================================\n#include <stdio.h>
#include <string.h>
#define N 5
#define L 30
int main(void) {
    char names[N][L], key[L], temp[L];
    for(int i=0;i<N;i++) {
        printf("Enter name %d: ",i+1);
        if(!fgets(names[i],L,stdin)) return 1;
        names[i][strcspn(names[i],"\\n")]='\\0';
    }
    for(int i=0;i<N-1;i++)
        for(int j=0;j<N-i-1;j++)
            if(strcmp(names[j],names[j+1])>0) {
                strcpy(temp,names[j]); strcpy(names[j],names[j+1]); strcpy(names[j+1],temp);
            }
    printf("\\nSorted names:\\n");
    for(int i=0;i<N;i++) printf("%s\\n",names[i]);
    printf("Enter name to search: ");
    if(!fgets(key,L,stdin)) return 1;
    key[strcspn(key,"\\n")]='\\0';
    int low=0,high=N-1,found=-1;
    while(low<=high) {
        int mid=low+(high-low)/2, cmp=strcmp(names[mid],key);
        if(cmp==0) {found=mid;break;}
        if(cmp<0) low=mid+1; else high=mid-1;
    }
    if(found>=0) printf("%s found at position %d\\n",key,found+1);
    else printf("%s not found\\n",key);
    printf("Duplicate names:\\n");
    int dup=0;
    for(int i=1;i<N;i++) if(strcmp(names[i],names[i-1])==0) {
        printf("%s\\n",names[i]); dup=1;
    }
    if(!dup) puts("None");
    return 0;
}\n\n==============================================================================\nQ7_Election_Count.c\n==============================================================================\n#include <stdio.h>
#define MAX_CANDIDATES 12
#define MAX_VOTES 5000
int main(void) {
    int candidates,n,vote,counts[MAX_CANDIDATES+1]={0};
    int valid=0,invalid=0,order[MAX_CANDIDATES];
    printf("Number of candidates (1-12): ");
    if(scanf("%d",&candidates)!=1 || candidates<1 || candidates>MAX_CANDIDATES) return 1;
    printf("Number of votes (0-5000): ");
    if(scanf("%d",&n)!=1 || n<0 || n>MAX_VOTES) return 1;
    printf("Enter candidate number for each vote:\\n");
    for(int i=0;i<n;i++) {
        if(scanf("%d",&vote)!=1) return 1;
        if(vote>=1 && vote<=candidates) {counts[vote]++;valid++;}
        else invalid++;
    }
    for(int i=0;i<candidates;i++) order[i]=i+1;
    for(int i=0;i<candidates-1;i++)
        for(int j=0;j<candidates-i-1;j++)
            if(counts[order[j]]<counts[order[j+1]]) {
                int t=order[j];order[j]=order[j+1];order[j+1]=t;
            }
    printf("\\nValid votes: %d\\nInvalid votes: %d\\n",valid,invalid);
    printf("Candidate votes (descending):\\n");
    for(int i=0;i<candidates;i++) printf("Candidate %d: %d\\n",order[i],counts[order[i]]);
    int tie=0;
    for(int i=1;i<candidates;i++) if(counts[order[i]]==counts[order[0]]) tie=1;
    if(tie) puts("Result: Tie");
    else printf("Winner: Candidate %d\\n",order[0]);
    return 0;
}\n\n
