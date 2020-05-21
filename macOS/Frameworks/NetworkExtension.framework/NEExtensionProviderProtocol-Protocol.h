//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NEConfiguration, NSDictionary, NSString;

@protocol NEExtensionProviderProtocol <NSObject>
- (void)stopWithReason:(int)arg1;
- (void)startWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setConfiguration:(NEConfiguration *)arg1 extensionIdentifier:(NSString *)arg2;
- (void)dispose;
- (void)createWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)wake;
- (void)sleepWithCompletionHandler:(void (^)(void))arg1;
@end

