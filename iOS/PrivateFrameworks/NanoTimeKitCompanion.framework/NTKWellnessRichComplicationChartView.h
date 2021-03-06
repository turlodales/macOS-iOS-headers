/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWellnessRichComplicationChartView : UIView {
    UIColor * _chartLineColor;
    NSArray * _chartLineXPositions;
    CLKDevice * _device;
    UIColor * _exerciseBarFadedColor;
    struct CGGradient { } * _exerciseBarGradient;
    double  _exerciseChartBottomLineY;
    NSDictionary * _exerciseChartPoints;
    NSDateFormatter * _hourFormatter;
    NSNumber * _maxExerciseValue;
    NSNumber * _maxMoveValue;
    UILabel * _midnightHourLabel;
    UIColor * _moveBarFadedColor;
    struct CGGradient { } * _moveBarGradient;
    double  _moveChartBottomLineY;
    NSDictionary * _moveChartPoints;
    UILabel * _noonHourLabel;
    UILabel * _sixAMHourLabel;
    UILabel * _sixPMHourLabel;
    struct CGGradient { } * _standBarGradient;
    double  _standChartBottomLineY;
    NSDictionary * _standChartPoints;
}

- (void).cxx_destruct;
- (void)_createHourFormatter;
- (void)_currentLocaleChangeOccurred;
- (void)_drawChartsBarsInContext:(struct CGContext { }*)arg1 lineNumber:(unsigned long long)arg2 xPosition:(double)arg3;
- (double)_exercisePointRelativeHeightForValue:(double)arg1;
- (id)_generateChartPointsForQuantityStatisticsInfo:(id)arg1 withUnit:(id)arg2 accumulateFractionalValues:(bool)arg3;
- (id)_generateStandChartPointsForStandHourInfo:(id)arg1;
- (id)_keyForDate:(id)arg1;
- (double)_movePointRelativeHeightForValue:(double)arg1;
- (void)_registerForNotifications;
- (id)_timeStringByRemovingSpacesFromTimeString:(id)arg1;
- (void)_updateHourLabelsText;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (void)setExerciseGraphData:(id)arg1;
- (void)setMoveGraphData:(id)arg1 activityMoveMode:(long long)arg2;
- (void)setStandGraphData:(id)arg1;

@end
