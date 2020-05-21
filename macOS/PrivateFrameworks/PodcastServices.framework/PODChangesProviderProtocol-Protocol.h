//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PODContentAnchor, PODContentChangeSet;

@protocol PODChangesProviderProtocol <NSObject>
- (void)discardChangesUpToAnchor:(PODContentAnchor *)arg1 completion:(void (^)(NSError *))arg2;
- (void)requestChangesSinceAnchor:(PODContentAnchor *)arg1 response:(void (^)(PODContentChangeSet *, NSError *))arg2;
- (void)addChanges:(PODContentChangeSet *)arg1 completion:(void (^)(NSError *))arg2;
@end

