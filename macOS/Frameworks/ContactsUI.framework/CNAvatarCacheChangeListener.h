//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactStore, NSData, NSNotificationCenter;

@interface CNAvatarCacheChangeListener : NSObject
{
    CNContactStore *_store;
    id <CNAvatarCacheChangeListenerDelegate> _delegate;
    NSNotificationCenter *_notificationCenter;
    id <CNScheduler> _preprocessor;
    NSData *_currentHistoryToken;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *currentHistoryToken; // @synthesize currentHistoryToken=_currentHistoryToken;
@property(readonly, nonatomic) id <CNScheduler> preprocessor; // @synthesize preprocessor=_preprocessor;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak id <CNAvatarCacheChangeListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CNContactStore *store; // @synthesize store=_store;
- (id)makeReportingTaskWithIdentifiers:(id)arg1;
- (id)makeAnalysisTask;
- (id)makeDatabaseChangedTask;
- (void)databaseChanged:(id)arg1;
- (void)stop;
- (void)start;
- (id)description;
- (id)initWithContactStore:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

