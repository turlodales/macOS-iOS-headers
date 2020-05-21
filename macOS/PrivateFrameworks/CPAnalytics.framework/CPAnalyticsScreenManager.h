//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPAnalyticsDynamicPropertyProvider.h"

@class CPAnalytics, NSDate, NSMutableArray, NSSet, NSString;

@interface CPAnalyticsScreenManager : NSObject <CPAnalyticsDynamicPropertyProvider>
{
    long long _screensViewCount;
    CPAnalytics *_cpAnalyticsInstance;
    long long _appVisiblePeriodSignpostID;
    NSSet *_namesOfViewsToTrack;
    NSSet *_namesOfViewsToIgnore;
    NSString *_currentTabIdentifierDescription;
    NSMutableArray *_currentlyOpenViews;
    unsigned long long _priorViewsMaxIndex;
    NSMutableArray *_priorViews;
    NSDate *_currentScreenStartTime;
    long long _foregroundEventCount;
}

+ (BOOL)_isValidCurrentTabIdentifierEvent:(id)arg1;
+ (id)_viewNameFromCombined:(id)arg1;
+ (id)_combinedViewName:(id)arg1 withID:(id)arg2;
+ (BOOL)_isValidScreenViewEvent:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long foregroundEventCount; // @synthesize foregroundEventCount=_foregroundEventCount;
@property(retain, nonatomic) NSDate *currentScreenStartTime; // @synthesize currentScreenStartTime=_currentScreenStartTime;
@property(retain, nonatomic) NSMutableArray *priorViews; // @synthesize priorViews=_priorViews;
@property(readonly, nonatomic) unsigned long long priorViewsMaxIndex; // @synthesize priorViewsMaxIndex=_priorViewsMaxIndex;
@property(retain, nonatomic) NSMutableArray *currentlyOpenViews; // @synthesize currentlyOpenViews=_currentlyOpenViews;
@property(retain, nonatomic) NSString *currentTabIdentifierDescription; // @synthesize currentTabIdentifierDescription=_currentTabIdentifierDescription;
@property(retain, nonatomic) NSSet *namesOfViewsToIgnore; // @synthesize namesOfViewsToIgnore=_namesOfViewsToIgnore;
@property(retain, nonatomic) NSSet *namesOfViewsToTrack; // @synthesize namesOfViewsToTrack=_namesOfViewsToTrack;
@property(nonatomic) long long appVisiblePeriodSignpostID; // @synthesize appVisiblePeriodSignpostID=_appVisiblePeriodSignpostID;
@property(nonatomic) __weak CPAnalytics *cpAnalyticsInstance; // @synthesize cpAnalyticsInstance=_cpAnalyticsInstance;
@property(nonatomic) long long screensViewCount; // @synthesize screensViewCount=_screensViewCount;
- (id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;
- (void)_sendCPAnalyticsScreenViewEventWithEndTime:(id)arg1;
- (void)_updateCurrentScreenToViewName:(id)arg1 withEventTime:(id)arg2;
- (void)_trackView:(id)arg1 withEventName:(id)arg2 viewID:(id)arg3 eventTime:(id)arg4;
- (void)_resetSessionWithTime:(id)arg1;
- (void)_initializeScreenViewTrackers:(id)arg1;
- (id)_screenViewNameAt:(unsigned long long)arg1;
- (void)_handleUnknownViewIfNeeded:(id)arg1;
- (void)_updateTabTracking:(id)arg1;
- (void)_updateScreenTracking:(id)arg1;
- (void)_updateAppLifeCycle:(id)arg1;
- (id)lastScreenName;
- (id)currentScreenViewName;
- (void)processEvent:(id)arg1;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

