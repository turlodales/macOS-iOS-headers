//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPSenderStrategy.h>

__attribute__((visibility("hidden")))
@interface MSPSenderLiveStrategy : MSPSenderStrategy
{
    BOOL _needToSendRoute;
}

- (void)trafficUpdated:(id)arg1;
- (void)routeUpdated:(id)arg1;
- (void)destinationUpdated:(id)arg1;
- (void)etaUpdated:(id)arg1;
- (void)setState:(id)arg1;
- (void)addParticipants:(id)arg1;
- (BOOL)_needToSendEtaRefreshFor:(id)arg1;

@end

