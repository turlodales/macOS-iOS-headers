//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class ABClickableTextView, NSButton, NSDateFormatter, NSScrollView, NSStackView, NSTextField, NSView, SGLabeledObject;

__attribute__((visibility("hidden")))
@interface ABSuggestedValueViewController : NSViewController
{
    BOOL _showsActionButtons;
    NSStackView *_verticalHeaderStackView;
    NSTextField *_subjectField;
    NSView *_subjectContainer;
    NSTextField *_senderField;
    NSView *_senderContainer;
    NSTextField *_dateField;
    NSTextField *_sourceItemView;
    ABClickableTextView *_relatedTextView;
    NSScrollView *_relatedTextViewScrollView;
    NSButton *_confirmButton;
    NSButton *_rejectButton;
    id <ABSuggestedValueViewControllerDelegate> _delegate;
    SGLabeledObject *_suggestedValue;
    NSDateFormatter *_dateFormatter;
    id <CNCancelable> _mouseDownObserver;
}

@property(retain) id <CNCancelable> mouseDownObserver; // @synthesize mouseDownObserver=_mouseDownObserver;
@property(retain) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain) SGLabeledObject *suggestedValue; // @synthesize suggestedValue=_suggestedValue;
@property id <ABSuggestedValueViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property NSButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) BOOL showsActionButtons; // @synthesize showsActionButtons=_showsActionButtons;
@property NSScrollView *relatedTextViewScrollView; // @synthesize relatedTextViewScrollView=_relatedTextViewScrollView;
@property ABClickableTextView *relatedTextView; // @synthesize relatedTextView=_relatedTextView;
@property NSTextField *sourceItemView; // @synthesize sourceItemView=_sourceItemView;
@property NSTextField *dateField; // @synthesize dateField=_dateField;
@property NSView *senderContainer; // @synthesize senderContainer=_senderContainer;
@property NSTextField *senderField; // @synthesize senderField=_senderField;
@property NSView *subjectContainer; // @synthesize subjectContainer=_subjectContainer;
@property NSTextField *subjectField; // @synthesize subjectField=_subjectField;
@property NSStackView *verticalHeaderStackView; // @synthesize verticalHeaderStackView=_verticalHeaderStackView;
- (void)rejectSuggestedValue:(id)arg1;
- (void)confirmSuggestedValue:(id)arg1;
- (void)setSnippet:(id)arg1 highlightRange:(struct _NSRange)arg2;
- (void)setUpMouseDownObserverWithURL:(id)arg1;
- (void)setOriginURL:(id)arg1;
- (void)removeEmptyFields;
- (void)configureView;
- (void)setDateReceived:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setFoundInAppName:(id)arg1;
- (void)setSenderName:(id)arg1;
- (void)invalidateMouseDownObserver;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

@end

