//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDRestoreDemotedApplicationsRequestOptions;

@interface ASDRestoreDemotedApplicationsRequest : ASDEphemeralRequest
{
}

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) ASDRestoreDemotedApplicationsRequestOptions *options; // @dynamic options;

@end

