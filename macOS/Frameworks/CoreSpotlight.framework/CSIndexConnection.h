//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@interface CSIndexConnection : CSXPCConnection
{
    BOOL _previouslyInitialized;
}

+ (id)sharedConnection;
@property(readonly, nonatomic) BOOL previouslyInitialized; // @synthesize previouslyInitialized=_previouslyInitialized;
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleError:(id)arg1;

@end

