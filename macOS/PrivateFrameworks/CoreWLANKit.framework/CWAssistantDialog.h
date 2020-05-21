//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTextViewDelegate.h"
#import "NSWindowDelegate.h"

@class NSArray, NSButton, NSString, NSTextField, NSTextView;

@interface CWAssistantDialog : NSWindowController <NSWindowDelegate, NSTextViewDelegate>
{
    NSTextField *_titleTF;
    NSTextView *_descriptionTV;
    NSTextField *_indexTF;
    NSTextField *_ofTF;
    NSTextField *_totalTF;
    NSButton *_previousButton;
    NSButton *_nextButton;
    NSButton *_cancelButton;
    NSArray *_recommendationItems;
    unsigned long long _currentIndex;
    id <CWAssistantDialogDelegate> _delegate;
}

@property id <CWAssistantDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)windowDidLoad;
- (void)updateHealthUIWithItem:(id)arg1 initial:(BOOL)arg2;
- (id)localizedStringForKey:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithRecommendationItems:(id)arg1;
- (void)onPreviousButton:(id)arg1;
- (void)onNextButton:(id)arg1;
- (void)learnMoreButtonClicked:(id)arg1;
- (void)onCancelButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

