//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SiriUIMediaPauser : NSObject
{
}

+ (void)pauseWithClientLoop:(BOOL)arg1;
+ (void)setMediaPaused:(BOOL)arg1;
+ (id)pausedClients;
+ (BOOL)mediaPaused;
+ (void)setDuckAudio:(BOOL)arg1;
+ (BOOL)duckAudio;
+ (void)setFanDuckingEnabled:(BOOL)arg1;
+ (id)_fanDispatchQueue;
+ (BOOL)fanDuckingEnabled;

@end

