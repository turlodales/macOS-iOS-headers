//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICCloudKitSyncer : NSObject
{
    id <ICCloudKitSyncerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ICCloudKitSyncerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)saveUnsyncedObjects;
- (void)saveUnsyncedObjectsWithRetryCount:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

