//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSASubmissionClient/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol OSASubmissionServices <NSObject>
- (void)resetMessageTracer;
- (void)fetchMessageTracerWhitelistWithVersion:(NSString *)arg1 andReply:(void (^)(NSArray *))arg2;
- (void)fetchMessageTracerWhitelistWithReply:(void (^)(NSArray *))arg1;
- (void)queryMessageTracer:(NSArray *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)fetchTypeBlackListWithReply:(void (^)(NSSet *))arg1;
- (void)fetchMainConfigFileWithOverrrides:(NSDictionary *)arg1 withReply:(void (^)(NSData *))arg2;
- (void)fetchWeeklyUserDynamicPrefLoggingListWithReply:(void (^)(NSArray *))arg1;
- (void)fetchDailyUserDynamicPrefLoggingListWithReply:(void (^)(NSArray *))arg1;
- (void)updateConfigFile;
- (void)canSubmitLogOfType:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)cleanupWithHomeDirectoryLocation:(NSString *)arg1;
- (void)submitWithOptions:(NSDictionary *)arg1 resultsCallback:(void (^)(NSDictionary *))arg2;
@end

