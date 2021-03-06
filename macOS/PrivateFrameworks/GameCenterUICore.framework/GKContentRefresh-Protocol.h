//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUICore/NSObject-Protocol.h>

@class NSDictionary;

@protocol GKContentRefresh <NSObject>
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(void (^)(NSError *))arg1;

@optional
- (void)_gkForceNextContentUpdate;
- (void)_gkSetContentsNeedUpdateWithHandler:(void (^)(void))arg1;
@end

