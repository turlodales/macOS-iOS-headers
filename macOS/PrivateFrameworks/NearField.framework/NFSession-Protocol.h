//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearField/NSObject-Protocol.h>

@class NSObject;
@protocol NFSession;

@protocol NFSession <NSObject>
- (void)endSessionAndStartNextSession:(NSObject<NFSession> *)arg1 completion:(void (^)(void))arg2;
- (void)endSessionWithCompletion:(void (^)(void))arg1;
- (void)endSession;
- (BOOL)isFirstInQueue;
@end

