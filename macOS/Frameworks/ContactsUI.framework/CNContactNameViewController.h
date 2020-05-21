//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "ABNameViewDelegate.h"
#import "CNAddFieldTouchBarDelegate.h"
#import "CNContactCardWidget.h"

@class ABNameView, AKCardViewDataSource, CNAddFieldTouchBar, CNContact, NSArray, NSString, NSTextField;

@interface CNContactNameViewController : NSViewController <ABNameViewDelegate, CNAddFieldTouchBarDelegate, CNContactCardWidget>
{
    BOOL _shouldDisableShowingShareLabel;
    CNContact *_contact;
    id <CNContactNameViewControllerDelegate> _delegate;
    unsigned long long _mode;
    AKCardViewDataSource *_dataSource;
    ABNameView *_nameView;
    NSArray *_nameViewConstraints;
    NSTextField *_shareTextField;
    NSTextField *_downtimeTextField;
    CNAddFieldTouchBar *_addFieldTouchBar;
}

+ (id)lockGlyphAttachmentText;
+ (id)whitespaceText;
+ (id)downtimeContactText;
+ (id)downtimeLabelAttributedText;
- (void).cxx_destruct;
@property(retain, nonatomic) CNAddFieldTouchBar *addFieldTouchBar; // @synthesize addFieldTouchBar=_addFieldTouchBar;
@property(retain, nonatomic) NSTextField *downtimeTextField; // @synthesize downtimeTextField=_downtimeTextField;
@property(retain, nonatomic) NSTextField *shareTextField; // @synthesize shareTextField=_shareTextField;
@property(retain, nonatomic) NSArray *nameViewConstraints; // @synthesize nameViewConstraints=_nameViewConstraints;
@property(retain, nonatomic) ABNameView *nameView; // @synthesize nameView=_nameView;
@property(nonatomic) BOOL shouldDisableShowingShareLabel; // @synthesize shouldDisableShowingShareLabel=_shouldDisableShowingShareLabel;
@property(retain, nonatomic) AKCardViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <CNContactNameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)nameView:(id)arg1 willLoseFocusInDirection:(unsigned long long)arg2;
- (BOOL)isSelectable;
- (BOOL)templateMode;
- (BOOL)editMode;
- (void)editExistingKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3;
- (id)colorForProperty:(id)arg1;
- (void)addField:(id)arg1;
- (void)addGroup;
- (void)addContact;
- (BOOL)canAddField;
- (BOOL)canAddContactOrGroup;
- (id)makeTouchBar;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (void)setPropertyKeysToDisplay:(id)arg1;
- (void)selectFirstKeyView;
- (void)reloadData;
- (BOOL)commitEditing;
- (void)setStyleProvider:(id)arg1;
- (BOOL)isPrivateMeEnabled;
- (void)focusKey:(id)arg1;
- (void)reloadDataForKey:(id)arg1;
- (void)highlightSearchTerms:(id)arg1;
- (void)updateShareTextFieldVisibility;
- (double)desiredHeight;
- (id)updateKeyViewLoopAndReturnTailView;
- (void)generateConstraints;
- (void)clearConstraints;
- (void)updateNameViewConstraints;
- (void)updateViewConstraints;
- (void)mouseUp:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

