//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFSpotlightQueryResultProcessor : NSObject
{
}

+ (id)messagesAddedForUpdateNotification:(id)arg1 checkWhereFromPaths:(BOOL)arg2 excludedMailboxes:(id)arg3;
+ (id)messagesAddedForUpdateNotification:(id)arg1 checkWhereFromPaths:(BOOL)arg2 excludedMailboxes:(id)arg3 itemLimit:(long long)arg4;
+ (id)messagesFoundForProgressNotification:(struct __MDQuery *)arg1 nextIndexToProcess:(long long *)arg2 checkWhereFromPaths:(BOOL)arg3 excludedMailboxes:(id)arg4;
+ (id)messagesFoundForProgressNotification:(struct __MDQuery *)arg1 nextIndexToProcess:(long long *)arg2 checkWhereFromPaths:(BOOL)arg3 excludedMailboxes:(id)arg4 itemLimit:(long long)arg5;

@end

