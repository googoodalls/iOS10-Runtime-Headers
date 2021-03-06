/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDailySleepSeriesDataSourceChartPoint : NSObject <HKChartPoint> {
    NSArray * _timeIntervalOffsets;
    id  _userInfo;
    NSDate * _xValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *timeIntervalOffsets;
@property (nonatomic, retain) id userInfo;
@property (nonatomic, retain) NSDate *xValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)maxXValue;
- (id)maxYValue;
- (id)minXValue;
- (id)minYValue;
- (void)setTimeIntervalOffsets:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setXValue:(id)arg1;
- (id)timeIntervalOffsets;
- (id)userInfo;
- (id)xValue;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
