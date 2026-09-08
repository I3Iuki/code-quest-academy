#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        double frameZero, frameOne, frameTwo;
        int curQuality;
        double targetFrameTime = 1000.0 / 90.0;
        double lowThreshold = targetFrameTime * 0.70;
        double extrapolateThreshold = targetFrameTime * 0.85;
        double highThreshold = targetFrameTime * 0.90;

        cin >> frameZero >> frameOne >> frameTwo >> curQuality;

        if (frameTwo > highThreshold)
        {
            curQuality = curQuality - 2 >= 1 ? curQuality - 2 : 1;
        }
        else if (frameTwo > extrapolateThreshold)
        {
            // x = frame
            // y = that other number
            //
            double one = ((frameTwo - frameZero) / 2) + frameTwo;
            double two = (frameTwo - frameOne) + frameTwo;

            if (max(one, two) > highThreshold)
            {
                curQuality = curQuality - 2 >= 1 ? curQuality - 2 : 1;
            }
        }
        else if (frameZero < lowThreshold && frameOne < lowThreshold && frameTwo < lowThreshold)
        {
            curQuality = curQuality + 1 <= 10 ? curQuality + 1 : 10;
        }
        cout << curQuality << '\n';
    }
}