//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEventStore;

@interface EKConflictScanner : NSObject
{
    EKEventStore *_eventStore;
}

- (void).cxx_destruct;
@property(retain) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (id)_conflictDetailsForJobs:(id)arg1;
- (id)_conflictScanJobForEvent:(id)arg1;
- (id)conflictsForEvents:(id)arg1;
- (id)conflictsForNotifications:(id)arg1;
- (id)initWithEventStore:(id)arg1;

@end

