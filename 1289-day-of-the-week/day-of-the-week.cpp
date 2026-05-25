class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        string days[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
        int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int totalDays = 0;
        for (int i = 1971; i < year; i++) {
            totalDays += 365;
            if (i % 4 == 0) totalDays++;
        }
        for (int i = 0; i < month - 1; i++) {
            if (month > 2 && year % 4 == 0) months[1] = 29;
            if (year == 2100) months[1] = 28;
            totalDays += months[i];
        }
        totalDays += (day-1);


        return days[(totalDays%7)];
    }
};