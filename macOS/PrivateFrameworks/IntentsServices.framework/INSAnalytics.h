//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>;

@interface INSAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;
    id <INSAnalyticsDataSource> _dataSource;
    NSHashTable *_observers;
}

+ (id)sharedAnalytics;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <INSAnalyticsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)contextDictionaryForError:(id)arg1;
- (id)contextDictionaryForCommand:(id)arg1;
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_init;

@end

