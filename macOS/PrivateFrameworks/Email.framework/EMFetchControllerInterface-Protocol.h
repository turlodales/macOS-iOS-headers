//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, NSString;

@protocol EMFetchControllerInterface <NSObject>
- (NSString *)diagnosticInformation;
- (void)setCurrentSuppressionContexts:(NSSet *)arg1 suppressedContexts:(NSSet *)arg2;
- (void)resetPushStateWithCompletion:(void (^)(BOOL, BOOL, int, NSError *))arg1;
- (void)downloadMessageBodiesWithCompletion:(void (^)(NSError *))arg1;
- (void)performFetchOfType:(int)arg1 mailboxName:(NSString *)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
- (void)performFetchOfType:(int)arg1 mailboxObjectIds:(NSArray *)arg2;
- (void)performFetchOfType:(int)arg1 accountIds:(NSArray *)arg2;
- (void)performFetchOfType:(int)arg1;
@end

