//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NEConfiguration;

@protocol NEPluginDriver
- (void)wakeup;
- (void)sleepWithCompletionHandler:(void (^)(void))arg1;
- (void)updateConfiguration:(NEConfiguration *)arg1;
- (void)startWithConfiguration:(NEConfiguration *)arg1 completionHandler:(void (^)(BOOL, int, NSArray *, NSArray *))arg2;
@end

