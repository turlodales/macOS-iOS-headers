//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSLayoutConstraint, NSStackView, NSTextField;

@interface SOCKDownloadPurgedAttachmentsView : NSView
{
    BOOL _iCloudLogoHidden;
    BOOL _didScheduleTextUpdate;
    unsigned long long _buttonState;
    unsigned long long _countOfAttachments;
    CDUnknownBlockType _downloadButtonPressedCallback;
    NSTextField *_downloadDescriptionTextField;
    NSButton *_downloadButton;
    NSStackView *_stackView;
    NSView *_imageView;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL didScheduleTextUpdate; // @synthesize didScheduleTextUpdate=_didScheduleTextUpdate;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) NSTextField *downloadDescriptionTextField; // @synthesize downloadDescriptionTextField=_downloadDescriptionTextField;
@property(copy, nonatomic) CDUnknownBlockType downloadButtonPressedCallback; // @synthesize downloadButtonPressedCallback=_downloadButtonPressedCallback;
@property(nonatomic) unsigned long long countOfAttachments; // @synthesize countOfAttachments=_countOfAttachments;
@property(nonatomic) BOOL iCloudLogoHidden; // @synthesize iCloudLogoHidden=_iCloudLogoHidden;
@property(nonatomic) unsigned long long buttonState; // @synthesize buttonState=_buttonState;
- (void)_updateUI;
- (void)_updateStackViewConstraint;
- (void)initiateDownload:(id)arg1;
- (void)_setupStackView;
- (void)_updateButtonText;
- (void)_updateDescriptionText;
- (void)_setupTextFields;
- (void)_setupImageView;
- (void)viewDidMoveToSuperview;
- (id)initWithButtonState:(unsigned long long)arg1;

@end

