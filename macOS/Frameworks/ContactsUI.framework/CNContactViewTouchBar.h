//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNAddFieldTouchBarDelegate.h"
#import "CNUIShareKitTransitionProvider.h"
#import "NSTouchBarProvider.h"

@class CNAddFieldTouchBar, CNContact, CNUIUserActionListDataSource, CNUIVCardSharingTask, CNUserActionTouchBar, NSButton, NSGroupTouchBarItem, NSPopoverTouchBarItem, NSSharingServicePickerTouchBarItem, NSString, NSTouchBar;

@interface CNContactViewTouchBar : NSObject <CNAddFieldTouchBarDelegate, CNUIShareKitTransitionProvider, NSTouchBarProvider>
{
    CNContact *_contact;
    id <CNContactViewTouchBarDelegate> _delegate;
    CNUIUserActionListDataSource *_userActionListDataSource;
    NSTouchBar *_touchBar;
    CNAddFieldTouchBar *_addFieldTouchBar;
    NSPopoverTouchBarItem *_addFieldPopoverItem;
    CNUserActionTouchBar *_userActionTouchBar;
    NSButton *_editButton;
    CNUIVCardSharingTask *_sharingTask;
    NSSharingServicePickerTouchBarItem *_shareItem;
    NSGroupTouchBarItem *_groupItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSGroupTouchBarItem *groupItem; // @synthesize groupItem=_groupItem;
@property(retain, nonatomic) NSSharingServicePickerTouchBarItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) CNUIVCardSharingTask *sharingTask; // @synthesize sharingTask=_sharingTask;
@property(retain, nonatomic) NSButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) CNUserActionTouchBar *userActionTouchBar; // @synthesize userActionTouchBar=_userActionTouchBar;
@property(retain, nonatomic) NSPopoverTouchBarItem *addFieldPopoverItem; // @synthesize addFieldPopoverItem=_addFieldPopoverItem;
@property(retain, nonatomic) CNAddFieldTouchBar *addFieldTouchBar; // @synthesize addFieldTouchBar=_addFieldTouchBar;
@property(retain, nonatomic) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property(nonatomic) __weak CNUIUserActionListDataSource *userActionListDataSource; // @synthesize userActionListDataSource=_userActionListDataSource;
@property(nonatomic) __weak id <CNContactViewTouchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)addField:(id)arg1;
- (void)addGroup;
- (void)addContact;
- (BOOL)canAddField;
- (BOOL)canAddContactOrGroup;
- (id)hostWindowForShareSheet;
- (id)profilePhotoImage;
- (struct CGRect)profilePhotoScreenRect;
- (void)updateShareItem;
- (void)_updateTouchBarIdentifiers;
- (void)updateTouchBar;
- (void)setupGroupItem;
- (void)setupSharingTaskAndItem;
- (void)setupEditButton;
- (void)setupUserActionTouchBar;
- (void)setupAddFieldItemAndTouchBar;
- (void)setupTouchBar;
- (id)initWithDelegate:(id)arg1 userActionListDataSource:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

