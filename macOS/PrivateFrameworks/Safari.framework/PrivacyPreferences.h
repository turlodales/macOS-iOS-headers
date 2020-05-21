//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

@class AcceptedSiteDataSheetController, NSButton, NSLayoutConstraint, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface PrivacyPreferences : PreferencesModule
{
    AcceptedSiteDataSheetController *_siteDataEditor;
    NSButton *_helpButton;
    NSTextField *applePayLabelTextField;
    NSButton *applePayCapabilityDisclosureAllowedCheckbox;
    NSTextField *_applePaySubtextTextField;
    NSButton *_policyEnabledButton;
    NSButton *_blockStorageAlwaysButton;
    NSButton *_manageWebsiteDataButton;
    NSLayoutConstraint *_applePayLabelTrailingAlignmentConstraint;
    NSLayoutConstraint *_applePayLabelTrailingHorizontalSpacingConstraint;
    NSLayoutConstraint *_applePayLabelBottomAlignmentConstraint;
    NSLayoutConstraint *_applePayCheckboxTopVerticalSpacingConstraint;
    NSLayoutConstraint *_applePayCheckboxBottomVerticalSpacingConstraint;
    NSLayoutConstraint *_applePayCheckboxTrailingHorizontalSpacingConstraint;
    NSLayoutConstraint *_applePayCheckboxLeadingAlignmentConstraint;
    NSLayoutConstraint *_applePaySubtextLeadingAlignmentConstraint;
    NSLayoutConstraint *_applePaySubtextBottomVerticalSpacingConstraint;
    NSLayoutConstraint *_applePaySubtextTrailingHorizontalSpacingConstraint;
    NSView *_mainContentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSView *mainContentView; // @synthesize mainContentView=_mainContentView;
@property(retain, nonatomic) NSLayoutConstraint *applePaySubtextTrailingHorizontalSpacingConstraint; // @synthesize applePaySubtextTrailingHorizontalSpacingConstraint=_applePaySubtextTrailingHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePaySubtextBottomVerticalSpacingConstraint; // @synthesize applePaySubtextBottomVerticalSpacingConstraint=_applePaySubtextBottomVerticalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePaySubtextLeadingAlignmentConstraint; // @synthesize applePaySubtextLeadingAlignmentConstraint=_applePaySubtextLeadingAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayCheckboxLeadingAlignmentConstraint; // @synthesize applePayCheckboxLeadingAlignmentConstraint=_applePayCheckboxLeadingAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayCheckboxTrailingHorizontalSpacingConstraint; // @synthesize applePayCheckboxTrailingHorizontalSpacingConstraint=_applePayCheckboxTrailingHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayCheckboxBottomVerticalSpacingConstraint; // @synthesize applePayCheckboxBottomVerticalSpacingConstraint=_applePayCheckboxBottomVerticalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayCheckboxTopVerticalSpacingConstraint; // @synthesize applePayCheckboxTopVerticalSpacingConstraint=_applePayCheckboxTopVerticalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayLabelBottomAlignmentConstraint; // @synthesize applePayLabelBottomAlignmentConstraint=_applePayLabelBottomAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayLabelTrailingHorizontalSpacingConstraint; // @synthesize applePayLabelTrailingHorizontalSpacingConstraint=_applePayLabelTrailingHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayLabelTrailingAlignmentConstraint; // @synthesize applePayLabelTrailingAlignmentConstraint=_applePayLabelTrailingAlignmentConstraint;
@property __weak NSButton *manageWebsiteDataButton; // @synthesize manageWebsiteDataButton=_manageWebsiteDataButton;
@property(nonatomic) __weak NSButton *blockStorageAlwaysButton; // @synthesize blockStorageAlwaysButton=_blockStorageAlwaysButton;
@property(nonatomic) __weak NSButton *policyEnabledButton; // @synthesize policyEnabledButton=_policyEnabledButton;
- (void)_updateApplePayCapabilityDisclosureAllowedCheckbox;
- (void)_updateStoragePolicyButtons;
- (id)_blockStoragePolicyButtons;
@property(readonly, nonatomic) int currentBlockStoragePolicy;
- (void)takeApplePayCapabilityDisclosureAllowedFrom:(id)arg1;
- (void)_updateBlockStoragePolicyIfNeeded;
- (void)takeStoragePolicyFrom:(id)arg1;
- (void)showWebsiteDataDetails:(id)arg1;
- (id)safariHelpAnchor;
- (void)_setApplePaySubtextString;
- (id)_applePayPreferencesConstraints;
- (void)_removeApplePayPreferenceIfNecessary;
- (void)_addApplePayPreferenceIfNecessary;
- (void)_updateApplePayPreferenceVisibility;
- (void)_applePayAvailabilityMayHaveChanged:(id)arg1;
- (void)willBeDisplayed;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (id)imageForPreferenceNamed:(id)arg1;

@end

