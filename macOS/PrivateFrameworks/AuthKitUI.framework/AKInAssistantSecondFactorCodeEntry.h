//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AKPinFieldViewDelegate.h"

@class AKPinFieldView, NSButton, NSLayoutConstraint, NSNumber, NSObject<AKSecondFactorCodeEntryDelegate>, NSProgressIndicator, NSString, NSTextField, NSView;

@interface AKInAssistantSecondFactorCodeEntry : NSViewController <AKPinFieldViewDelegate>
{
    BOOL _isCodeEditable;
    NSObject<AKSecondFactorCodeEntryDelegate> *_delegate;
    CDUnknownBlockType _pinEnteredBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _noCodeBlock;
    NSView *_pinContainerView;
    NSTextField *_instructionLabel;
    NSTextField *_errorLabel;
    NSButton *_didntGetCodeButton;
    NSProgressIndicator *_progressIndicator;
    NSLayoutConstraint *_widthOfPinViewConstraint;
    NSNumber *_codeLength;
    AKPinFieldView *_pinView;
    NSString *_code;
    NSString *_message;
}

- (void).cxx_destruct;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) NSString *code; // @synthesize code=_code;
@property(retain) AKPinFieldView *pinView; // @synthesize pinView=_pinView;
@property(retain) NSNumber *codeLength; // @synthesize codeLength=_codeLength;
@property(setter=setCodeEditable:) BOOL isCodeEditable; // @synthesize isCodeEditable=_isCodeEditable;
@property(retain) NSLayoutConstraint *widthOfPinViewConstraint; // @synthesize widthOfPinViewConstraint=_widthOfPinViewConstraint;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSButton *didntGetCodeButton; // @synthesize didntGetCodeButton=_didntGetCodeButton;
@property(retain) NSTextField *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain) NSTextField *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(retain) NSView *pinContainerView; // @synthesize pinContainerView=_pinContainerView;
@property(copy) CDUnknownBlockType noCodeBlock; // @synthesize noCodeBlock=_noCodeBlock;
@property(copy) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy) CDUnknownBlockType pinEnteredBlock; // @synthesize pinEnteredBlock=_pinEnteredBlock;
@property(retain) NSObject<AKSecondFactorCodeEntryDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)noCodeButtonPressed:(id)arg1;
- (void)_codeEntered;
- (void)_resetPinView;
- (void)pinFieldViewTextDidComplete:(id)arg1;
- (void)pinFieldViewTextDidChange:(id)arg1;
- (void)_hideError;
- (void)showError:(id)arg1;
- (void)disable;
- (void)setFocusToPinView;
@property(readonly) NSNumber *enteredPin;
- (void)awakeFromNib;
- (id)initWithMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

