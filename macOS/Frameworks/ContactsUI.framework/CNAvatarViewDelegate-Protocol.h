//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNAvatarViewController, CNContact, NSArray, NSImage, NSViewController, PRLikeness;

@protocol CNAvatarViewDelegate <NSObject>

@optional
- (BOOL)avatarViewControllerCanDisplayEditOverlay:(CNAvatarViewController *)arg1;
- (void)avatarViewControllerDidFinishSaving:(CNAvatarViewController *)arg1;
- (void)avatarViewController:(CNAvatarViewController *)arg1 isSavingLikeness:(PRLikeness *)arg2;
- (void)avatarViewControllerWantsEdit:(CNAvatarViewController *)arg1;
- (void)avatarViewControllerDidRefresh:(CNAvatarViewController *)arg1;
- (void)avatarViewController:(CNAvatarViewController *)arg1 contactAvatarDidChange:(CNContact *)arg2;
- (void)avatarViewControllerDidFinishEditing:(CNAvatarViewController *)arg1 cancelled:(BOOL)arg2;
- (BOOL)avatarViewControllerShouldPersistChanges:(CNAvatarViewController *)arg1;
- (NSImage *)avatarViewController:(CNAvatarViewController *)arg1 requiredImageForContact:(CNContact *)arg2;
- (NSImage *)imageForContact:(CNContact *)arg1;
- (NSViewController *)avatarViewController:(CNAvatarViewController *)arg1 presentingViewControllerForContacts:(NSArray *)arg2;
- (NSViewController *)presentingViewControllerForContacts:(NSArray *)arg1;
@end

