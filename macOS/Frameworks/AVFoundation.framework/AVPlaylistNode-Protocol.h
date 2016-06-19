//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlaylist, NSArray;

@protocol AVPlaylistNode <NSObject>
@property(readonly, nonatomic) __weak AVPlaylist *parentPlaylist;
@property(readonly, nonatomic) BOOL appliesChangesImmediately;
@property(copy, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) id <NSObject><NSCopying><NSSecureCoding> identifier;
- (void)applyPendingChangesWithCompletionHandler:(void (^)(NSError *))arg1;
@end

