//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVRoutingSessionDestinationInternal, NSArray;

@interface AVRoutingSessionDestination : NSObject
{
    AVRoutingSessionDestinationInternal *_ivars;
}

@property(readonly, nonatomic) BOOL providesExternalVideoPlayback;
@property(readonly, nonatomic) float probability;
@property(readonly, nonatomic) NSArray *outputDeviceDescriptions;
- (void)dealloc;

@end

