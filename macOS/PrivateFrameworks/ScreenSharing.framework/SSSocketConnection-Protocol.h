//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenSharing/NSObject-Protocol.h>

@class NSString;

@protocol SSSocketConnection <NSObject>
- (void)server_OKToStartQRAudioCall:(NSString *)arg1;
- (void)server_MicrophoneMuteFlag:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)server_setMicrophoneMuteFlag:(NSString *)arg1 mute:(_Bool)arg2;
- (void)server_audioChatEnabled:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)socketForConnectionID:(NSString *)arg1 reply:(void (^)(NSFileHandle *))arg2;
@end

