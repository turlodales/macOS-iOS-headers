//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSURL, NSUUID;

@protocol _NSExtensionContextHosting <NSObject>
- (void)_openURL:(NSURL *)arg1 completion:(void (^)(BOOL))arg2;
- (void)_loadPreviewImageForPayload:(NSDictionary *)arg1 contextIdentifier:(NSUUID *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)_loadItemForPayload:(NSDictionary *)arg1 contextIdentifier:(NSUUID *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)_cancelRequestWithError:(NSError *)arg1 forExtensionContextWithUUID:(NSUUID *)arg2 completion:(void (^)(void))arg3;
- (void)_completeRequestReturningItems:(NSArray *)arg1 forExtensionContextWithUUID:(NSUUID *)arg2 completion:(void (^)(void))arg3;
@end

