//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SFSyncManager_ivars : NSObject
{
    NSMutableArray *_syncList;
    NSData *_blobData;
    int _logLevel;
}

- (void)dealloc;

@end

