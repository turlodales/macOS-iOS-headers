//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdID/NSObject-Protocol.h>

@class ADBackgroundTaskRequest, NSObject, NSString;
@protocol OS_xpc_object;

@protocol BackgroundTaskDelegate <NSObject>
- (BOOL)runTask:(ADBackgroundTaskRequest *)arg1;

@optional
- (void)checkOnTask:(NSString *)arg1 activity:(NSObject<OS_xpc_object> *)arg2;
@end

