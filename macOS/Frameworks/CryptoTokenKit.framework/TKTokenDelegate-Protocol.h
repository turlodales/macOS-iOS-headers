//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/NSObject-Protocol.h>

@class TKToken, TKTokenSession;

@protocol TKTokenDelegate <NSObject>
- (TKTokenSession *)token:(TKToken *)arg1 createSessionWithError:(id *)arg2;

@optional
- (void)token:(TKToken *)arg1 terminateSession:(TKTokenSession *)arg2;
@end

