/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepUtilities : NSObject

+ (long long)_axisPurposeForSleepSeriesType:(long long)arg1;
+ (id)_durationGoalDataForSleepDays:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3;
+ (id)_fillStylesFromColors:(id)arg1;
+ (id)_generateDailyTimePeriodSeries;
+ (id)_generateDailyTimePeriodSeriesWithSchedules;
+ (id)_generateDurationSleepGoalSeries;
+ (id)_generateDurationSleepSeries;
+ (id)_goalLineMarkerStyle;
+ (id)_goalLineStrokeStyle;
+ (id)_lessSaturatedColorWithColor:(id)arg1;
+ (id)_scheduleMarkerStyleWithColor:(id)arg1;
+ (id)_sleepSeriesForType:(long long)arg1;
+ (id)_standardRangeDataForSleepDays:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3;
+ (id)buildPrimarySleepCacheWithHealthStore:(id)arg1 sleepDisplayType:(id)arg2 sleepDataSourceProvider:(id)arg3 chartCacheController:(id)arg4;
+ (id)durationGoalForSleepDay:(id)arg1;
+ (id)rangeDataForSleepChartInfo:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3;
+ (id)sleepDisplayTypesWithHealthStore:(id)arg1 sleepDisplayType:(id)arg2 unitController:(id)arg3 displayTypeController:(id)arg4 chartCacheController:(id)arg5 sleepChartFormatter:(id)arg6 sleepSeriesType:(long long)arg7 sharedSleepCache:(id)arg8 customSleepSeries:(id)arg9;
+ (id)verticalNumericalAxis;
+ (id)yukonSleepChartDataSource:(id)arg1 representativeDisplayType:(id)arg2;

@end
