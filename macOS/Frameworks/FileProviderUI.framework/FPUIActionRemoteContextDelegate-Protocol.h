//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPUIActionRemoteContext, NSDictionary, NSError;

@protocol FPUIActionRemoteContextDelegate <NSObject>
- (void)remoteActionContext:(FPUIActionRemoteContext *)arg1 didEncounterError:(NSError *)arg2 completionHandler:(void (^)(void))arg3;
- (void)remoteActionContextDidFinishAction:(FPUIActionRemoteContext *)arg1 userInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

