//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class NSArray, NSProgress;

@protocol EMClientStateInterface <NSObject>
- (NSProgress *)giveBoostWithCompletionBlock:(void (^)(void))arg1;
- (void)setClientIsInForeground:(BOOL)arg1;
- (void)setCurrentlyVisibleMailboxObjectIDs:(NSArray *)arg1;
@end

