//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _HMMediaSession;

@protocol _HMMediaSessionDelegate <NSObject>
- (void)mediaSession:(_HMMediaSession *)arg1 didUpdateRouteUID:(NSString *)arg2;
- (void)mediaSessionDidUpdate:(_HMMediaSession *)arg1;
- (void)mediaSession:(_HMMediaSession *)arg1 didUpdatePlaybackState:(long long)arg2;
@end

