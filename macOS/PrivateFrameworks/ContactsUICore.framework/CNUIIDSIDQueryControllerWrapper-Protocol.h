//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol CNUIIDSIDQueryControllerWrapper
- (BOOL)refreshIDStatusForDestinations:(NSArray *)arg1 service:(NSString *)arg2 listenerID:(NSString *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 completionBlock:(void (^)(NSDictionary *))arg5;
@end

