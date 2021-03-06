//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNNavigationState.h>

@class MNNavigationSessionManager, NSArray;

@interface MNNavigationStatePrepareGuidance : MNNavigationState
{
    NSArray *_previewRoutes;
    unsigned long long _selectedRouteIndex;
    MNNavigationSessionManager *_navigationSessionManager;
}

- (void).cxx_destruct;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)stopNavigation;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)leaveState;
- (void)enterState;
- (id)initWithStateManager:(id)arg1 previewRoutes:(id)arg2 selectedRouteIndex:(unsigned long long)arg3;
- (id)traceManager;
- (BOOL)shouldClearStoredRoutes;
- (unsigned long long)desiredLocationProviderType;
- (BOOL)requiresHighMemoryThreshold;
- (unsigned long long)type;

@end

