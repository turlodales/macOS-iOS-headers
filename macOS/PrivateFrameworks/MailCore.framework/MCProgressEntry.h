//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet, NSSet, NSTimer;

@interface MCProgressEntry : NSObject
{
    NSMutableSet *_progresses;
    BOOL _overrideConditions;
    BOOL _userRequestedOverride;
    // Error parsing type: AB, name: _hasScheduledRefresh
    BOOL _canDeferWork;
    BOOL _suspended;
    BOOL _hasBeenSuspended;
    id <MCProgressEntryDelegate> _delegate;
    long long _completedUnitCount;
    long long _totalUnitCount;
    double _fractionCompleted;
    unsigned long long _unsatisfiedConditions;
    NSTimer *_finishTimer;
}

+ (id)keyPathsForValuesAffectingReasonText;
+ (id)progressEntryWithSlice:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *finishTimer; // @synthesize finishTimer=_finishTimer;
@property(nonatomic) unsigned long long unsatisfiedConditions; // @synthesize unsatisfiedConditions=_unsatisfiedConditions;
@property(nonatomic) double fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(nonatomic) BOOL hasBeenSuspended; // @synthesize hasBeenSuspended=_hasBeenSuspended;
@property(nonatomic) BOOL suspended; // @synthesize suspended=_suspended;
@property(nonatomic) BOOL canDeferWork; // @synthesize canDeferWork=_canDeferWork;
@property(nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property(nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(nonatomic) __weak id <MCProgressEntryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL shouldDisplay;
@property(readonly, nonatomic) BOOL hasSignificantDeferrableWork;
@property(readonly, nonatomic) double finishDelay;
- (void)_finish:(id)arg1;
- (void)_unscheduleFinish;
- (void)_scheduleFinish;
- (void)refreshValues;
- (void)_scheduleRefreshIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)reasonText;
@property(nonatomic) BOOL overrideConditions;
@property(nonatomic) BOOL userRequestedOverride;
@property(readonly, copy, nonatomic) NSSet *observedProgressKeypaths;
- (void)addProgress:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *progresses;
- (id)init;

@end

