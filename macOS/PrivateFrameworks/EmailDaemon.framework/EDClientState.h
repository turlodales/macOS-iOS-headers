//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDForegroundReporting.h"
#import "EFLoggable.h"

@class NSArray, NSString;

@interface EDClientState : NSObject <EDForegroundReporting, EFLoggable>
{
    BOOL _isForeground;
    NSArray *_visibleMailboxesObjectIds;
}

+ (id)sharedInstance;
+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *visibleMailboxesObjectIds; // @synthesize visibleMailboxesObjectIds=_visibleMailboxesObjectIds;
@property(readonly, nonatomic) BOOL isForeground; // @synthesize isForeground=_isForeground;
- (id)giveBoostWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setClientIsInForeground:(BOOL)arg1;
- (void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

