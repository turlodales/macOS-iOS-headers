//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@protocol GEOMotionContextProviderDelegate;

@protocol GEOMotionContextProvider <NSObject>
@property(nonatomic) __weak id <GEOMotionContextProviderDelegate> motionDelegate;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
@end

