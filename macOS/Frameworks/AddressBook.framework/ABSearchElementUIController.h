//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABSearchElementRepresentationBuilder.h"

@class ABSearchElementSetView, ABSmartGroup, NSBox, NSButton, NSLayoutConstraint, NSMutableArray, NSPopUpButton, NSTextField, NSView, NSWindow;

@interface ABSearchElementUIController : NSObject <ABSearchElementRepresentationBuilder>
{
    NSWindow *window;
    ABSearchElementSetView *searchElementSetView;
    NSButton *okButton;
    NSButton *hilightButton;
    NSTextField *groupNameField;
    NSView *singleMatchDescription;
    NSView *multipleMatchDescription;
    NSBox *rulesBox;
    NSPopUpButton *andOrPopUp;
    NSButton *plusMinusTemplate;
    NSLayoutConstraint *searchElementsSetViewWidthConstraint;
    NSWindow *_docWindow;
    id _delegate;
    SEL _didEndSelector;
    void *_contextInfo;
    NSMutableArray *_elementViews;
    NSMutableArray *_plusButtons;
    NSMutableArray *_minusButtons;
    ABSmartGroup *_smartGroup;
    CDUnknownBlockType _completionHandler;
}

- (void)help:(id)arg1;
- (BOOL)tracksModification;
- (void)textDidChange:(id)arg1;
- (void)updateOKButton;
- (id)nextKeyViewForElement:(id)arg1;
- (void)animateToEncloseElements;
- (void)fixKeyViews;
- (void)addElementView:(id)arg1;
- (void)removeElementView:(id)arg1;
- (void)beginSheetWithSmartGroup:(id)arg1 modalForWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginSheetWithName:(id)arg1 modalForWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)alertSheetDidEnd:(id)arg1 resultCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addRepresentationForElementWithProperty:(id)arg1 value:(id)arg2 comparison:(long long)arg3 order:(id)arg4;
- (void)setConjunction:(long long)arg1;
- (void)buildElementsFromSmartGroup:(id)arg1;
- (id)nameValueForConjoinedSearchElement:(id)arg1 comparison:(long long *)arg2;
- (id)propertiesOfSearchElements:(id)arg1;
- (id)newButtonAsPlus:(BOOL)arg1 atIndex:(long long)arg2;
- (struct CGRect)frameForPlusButton:(_Bool)arg1 atIndex:(long long)arg2;
- (struct CGRect)frameForElementAtIndex:(long long)arg1;
- (void)updateAndOrUI;
- (void)handleCancel:(id)arg1;
- (void)handleOK:(id)arg1;
- (id)smartGroup;
- (id)searchElement;
- (void)setDocWindow:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

