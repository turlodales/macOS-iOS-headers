//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareKit/NSObject-Protocol.h>

@class NSDictionary, NSUUID;

@protocol SHKSharingViewServiceProtocol <NSObject>
- (void)remoteViewLayerContentsWithCompletionHandler:(void (^)(NSImage *))arg1;
- (void)changeViewControllerViewToSize:(struct CGSize)arg1 transactionUUID:(NSUUID *)arg2;
- (void)performQueuedCompletionActions;
- (void)performQueuedAnimationActionsWithCompletionBlock:(void (^)(void))arg1;
- (void)proceedWithSharingTransitionOutWithSuccess:(BOOL)arg1 duration:(double)arg2;
- (void)proceedWithSharingTransitionIn;
- (void)proceedWithInstantTransitionOut;
- (void)proceedWithInstantTransitionIn;
- (void)proceedWithMarkupTransitionOut;
- (void)proceedWithMarkupTransitionIn;
- (void)setViewOptions:(NSDictionary *)arg1;
@end

