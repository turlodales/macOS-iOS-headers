//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCollectionAbstractAction.h>

#import "NSSharingServiceDelegate.h"

@class ABCollectionViewItem, NSString;

__attribute__((visibility("hidden")))
@interface ABCollectionMessageAction : ABCollectionAbstractAction <NSSharingServiceDelegate>
{
    ABCollectionViewItem *_target;
}

@property(retain) ABCollectionViewItem *target; // @synthesize target=_target;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (void)executeWithTarget:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

