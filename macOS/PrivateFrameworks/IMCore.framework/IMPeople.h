//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface IMPeople : NSObject
{
    NSMutableArray *_people;
    int _coalesceCount;
    BOOL _hidePeople;
}

- (void).cxx_destruct;
@property(nonatomic, setter=setShouldHidePeople:) BOOL hidePeople; // @synthesize hidePeople=_hidePeople;
- (void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2;
- (BOOL)addPeopleFromArray:(id)arg1;
- (BOOL)addPeopleFromArray:(id)arg1 skipMe:(BOOL)arg2;
- (BOOL)removePeopleFromArray:(id)arg1;
- (BOOL)removeIMHandle:(id)arg1;
- (BOOL)addIMHandle:(id)arg1;
@property(readonly, nonatomic) BOOL coalescingChanges;
- (void)endCoalescedChanges;
- (void)beginCoalescedChanges;
- (void)removedIMHandle:(id)arg1;
- (void)_addedPeople:(id)arg1;
- (void)addedIMHandle:(id)arg1;
@property(readonly, nonatomic) NSArray *people;
@property(readonly, nonatomic) NSArray *groups;
- (BOOL)containsIMHandle:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)addNotificationObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNotificationObserver:(id)arg1;
- (void)dealloc;

@end

