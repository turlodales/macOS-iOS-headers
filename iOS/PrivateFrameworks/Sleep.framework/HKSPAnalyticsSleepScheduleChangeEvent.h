/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
 */

@interface HKSPAnalyticsSleepScheduleChangeEvent : NSObject <HKSPAnalyticsEvent> {
    NSString * _eventName;
    NSDictionary * _eventPayload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *eventName;
@property (nonatomic, retain) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)eventName;
- (id)eventPayload;
- (id)initWithContext:(unsigned long long)arg1 watchSleepTrackingEnabled:(bool)arg2;
- (void)setEventName:(id)arg1;
- (void)setEventPayload:(id)arg1;

@end
