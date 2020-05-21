//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

#import "NSSplitViewDelegate.h"

@class NSString;

@interface SFCertificatePanel : NSPanel <NSSplitViewDelegate>
{
    id _reserved_SFCertificatePanel;
}

+ (id)sharedCertificatePanel;
- (id)certificateView;
- (id)policies;
- (void)setPolicies:(id)arg1;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setDefaultButtonCell:(id)arg1;
- (BOOL)showsHelp;
- (void)setShowsHelp:(BOOL)arg1;
- (id)helpAnchor;
- (void)setHelpAnchor:(id)arg1;
- (void)beginSheetForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4 certificates:(id)arg5 showGroup:(BOOL)arg6;
- (void)beginSheetForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4 trust:(struct __SecTrust *)arg5 showGroup:(BOOL)arg6;
- (long long)runModalForCertificates:(id)arg1 showGroup:(BOOL)arg2;
- (long long)runModalForTrust:(struct __SecTrust *)arg1 showGroup:(BOOL)arg2;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;
- (id)_defaultHelpAnchor;
- (void)_setCertificates:(id)arg1;
- (void)_setTrustWithPolicies:(id)arg1;
- (void)_setTrust:(struct __SecTrust *)arg1;
- (void)_evaluateTrust;
- (void)_setAutosizedWindowHeight:(float)arg1;
- (void)_setRunAsSheet:(BOOL)arg1;
- (void)_setSavedDelegate:(id)arg1;
- (void)_setDidEndSelector:(SEL)arg1;
- (void)_setContextInfo:(void *)arg1;
- (void)_setParentWindowForSheet:(id)arg1;
- (void)set_splitView:(id)arg1;
- (void)set_certTable:(id)arg1;
- (void)set_helpButton:(id)arg1;
- (void)set_alternateButton:(id)arg1;
- (void)set_defaultButton:(id)arg1;
- (void)set_panel:(id)arg1;
- (void)set_certGroupView:(id)arg1;
- (void)set_certView:(id)arg1;
- (void)setRef:(id *)arg1 toObj:(id)arg2;
- (float)_autosizedWindowHeight;
- (BOOL)_runAsSheet;
- (id)_alternateButtonTitle;
- (id)_defaultButtonTitle;
- (id)_certDataArray;
- (id)_certificates;
- (struct __SecTrust *)_trust;
- (void *)_clientContextInfo;
- (id)_clientDelegate;
- (SEL)_clientDidEndSelector;
- (id)_parentWindowForSheet;
- (id)_splitView;
- (id)_certTable;
- (id)_helpButton;
- (id)_alternateButton;
- (id)_defaultButton;
- (id)_panel;
- (id)_certGroupView;
- (id)_certView;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(int)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)_dataAtIndex:(long long)arg1;
- (long long)_dataIndexFromRowIndex:(long long)arg1;
- (BOOL)_rowContainsLeaf:(long long)arg1;
- (void)_setEditableTrust:(BOOL)arg1;
- (long long)_runFullDialog;
- (void)_runFullDialogSheet;
- (long long)_prepPanel:(struct __SecTrust *)arg1 showGroup:(BOOL)arg2;
- (void)_certPanelSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_SFCertificatePanel_disclosureStateChanged:(id)arg1;
- (void)_sizeToFitView:(BOOL)arg1;
- (void)_helpClicked:(id)arg1;
- (void)_cancelClicked:(id)arg1;
- (void)_okClicked:(id)arg1;
- (void)_dismissWithCode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

