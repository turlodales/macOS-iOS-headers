//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import "NUSaliencyResult.h"

@class NSString, VNSaliencyImageObservation;

@interface _NUSaliencyResult : _NURenderResult <NUSaliencyResult>
{
    VNSaliencyImageObservation *_observation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VNSaliencyImageObservation *observation; // @synthesize observation=_observation;
- (id)initWithObservation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

