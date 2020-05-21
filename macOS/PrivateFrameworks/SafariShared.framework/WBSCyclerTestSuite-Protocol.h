//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol WBSCyclerTestSuite <NSObject>
- (void)runWithTarget:(id <WBSCyclerTestTarget>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (id)init;

@optional
+ (BOOL)setValue:(NSString *)arg1 forConfigurationKey:(NSString *)arg2;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
- (void)handleRequest:(NSString *)arg1 withTarget:(id <WBSCyclerTestTarget>)arg2 completionHandler:(void (^)(NSError *))arg3;
- (BOOL)canHandleRequest:(NSString *)arg1;
- (void)tearDown;
- (void)setUp;
@end

