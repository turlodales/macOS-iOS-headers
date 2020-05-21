//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "PMXPCSupportDelegate.h"

@class NSArray, NSButton, NSProgressIndicator, NSString, NSTextField, NSView, PK2Printer, PMXPCSupport;

@interface PKQueueCreationController : NSWindowController <PMXPCSupportDelegate>
{
    NSView *_progressView;
    NSButton *_cancelButton;
    NSTextField *_progressTextField;
    NSProgressIndicator *_progressIndicator;
    NSArray *_topLevelNibObjects;
    PK2Printer *_printer;
    NSString *_queueID;
    id <PKServerQueueCreationDelegate> _delegate;
    BOOL _isCancelled;
    PMXPCSupport *_xpc;
}

@property(retain) NSArray *topLevelNibObjects; // @synthesize topLevelNibObjects=_topLevelNibObjects;
@property NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property NSTextField *progressTextField; // @synthesize progressTextField=_progressTextField;
@property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property NSView *progressView; // @synthesize progressView=_progressView;
@property(retain) PMXPCSupport *xpc; // @synthesize xpc=_xpc;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property id <PKServerQueueCreationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *queueID; // @synthesize queueID=_queueID;
@property(retain) PK2Printer *printer; // @synthesize printer=_printer;
- (void)handleEventForCommand:(int)arg1 status:(int)arg2 event:(id)arg3;
- (void)startQueueCreation;
- (void)presentErrorWithMessageText:(id)arg1 informativeTextWithFormat:(id)arg2;
- (void)switchPanelTo:(id)arg1;
- (void)notifyQueueCompleted:(long long)arg1;
- (void)cancelErrorAlert:(id)arg1;
- (void)cancel:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithPrinter:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

