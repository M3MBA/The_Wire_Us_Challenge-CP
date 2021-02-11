#include<iostream>
#include<stack>
using namespace std;

int areahist(int hist[], int n)
{
    stack<int> s;

    int max_area = 0;
    int tp;
    int area_with_top;

    int i = 0;
    while (i < n)
    {
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);

        else
        {
            tp = s.top();
            s.pop();

            area_with_top = hist[tp] * (s.empty() ? i :
                                   i - s.top() - 1);

            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }

    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i :
                                i - s.top() - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    return max_area;
}

int main()
{
  int histogram[]={1,4,3,7,1,3,6};
  int size = sizeof(histogram)/sizeof(histogram[0]);
  int n;

  cout << "Maximum area is " << areahist(histogram, size);
  return 0;
}
