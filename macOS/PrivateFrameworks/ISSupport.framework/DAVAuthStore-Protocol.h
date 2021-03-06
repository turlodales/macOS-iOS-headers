//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ISS_DAVChallenge, ISS_DAVSession, NSURL;

@protocol DAVAuthStore
- (void)clearAuthChallengeForSession:(ISS_DAVSession *)arg1;
- (void)session:(ISS_DAVSession *)arg1 storeAuthChallenge:(ISS_DAVChallenge *)arg2 forURL:(NSURL *)arg3;
- (BOOL)session:(ISS_DAVSession *)arg1 addAuthHeaderToMessage:(struct __CFHTTPMessage *)arg2;
- (BOOL)hasCredentialsForSession:(ISS_DAVSession *)arg1;
@end

