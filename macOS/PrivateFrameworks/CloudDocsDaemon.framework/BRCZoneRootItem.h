//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCDirectoryItem.h>

#import "BRCFSRooted.h"

__attribute__((visibility("hidden")))
@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>
{
}

- (BOOL)isShareableItem;
- (id)st;
- (id)parentItemID;
- (id)parentItemOnFS;
- (id)fileID;
- (BOOL)saveToDB;
- (BOOL)isZoneRoot;
- (id)asFSRoot;
- (BOOL)isFSRoot;
- (id)initWithZoneRootItemID:(id)arg1 session:(id)arg2;

@end

