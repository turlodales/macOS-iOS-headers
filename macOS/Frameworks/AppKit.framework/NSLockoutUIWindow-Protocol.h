//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol NSLockoutUIWindow <NSObject>
- (void)disengageWithDuration:(double)arg1 completionHandler:(void (^)(void))arg2;
- (void)engageWithDuration:(double)arg1 completionHandler:(void (^)(void))arg2;
- (BOOL)transitioning;
- (BOOL)engaged;
- (BOOL)isMiniaturized;
@end

