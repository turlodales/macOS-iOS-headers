//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSButton, NSData, NSDictionary, NSStackView, NSString, NSTextField, NSTextView;

@interface DeviceReportViewController : NSViewController
{
    BOOL _hideSaveButton;
    NSTextField *_safetyInfoTitleTextField;
    NSTextField *_safetyInfoTextField;
    NSTextView *_textView;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSButton *_saveButton;
    NSStackView *_safetyInfoStackView;
    NSDictionary *_parameters;
    NSString *_okButtonTitle;
    NSString *_cancelButtonTitle;
    NSString *_windowTitle;
    NSData *_richTextData;
    NSString *_safetyInfo;
    NSString *_defaultFileName;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hideSaveButton; // @synthesize hideSaveButton=_hideSaveButton;
@property(retain, nonatomic) NSString *defaultFileName; // @synthesize defaultFileName=_defaultFileName;
@property(retain, nonatomic) NSString *safetyInfo; // @synthesize safetyInfo=_safetyInfo;
@property(retain, nonatomic) NSData *richTextData; // @synthesize richTextData=_richTextData;
@property(retain, nonatomic) NSString *windowTitle; // @synthesize windowTitle=_windowTitle;
@property(retain, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(retain, nonatomic) NSString *okButtonTitle; // @synthesize okButtonTitle=_okButtonTitle;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) __weak NSStackView *safetyInfoStackView; // @synthesize safetyInfoStackView=_safetyInfoStackView;
@property(nonatomic) __weak NSButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak NSTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak NSTextField *safetyInfoTextField; // @synthesize safetyInfoTextField=_safetyInfoTextField;
@property(nonatomic) __weak NSTextField *safetyInfoTitleTextField; // @synthesize safetyInfoTitleTextField=_safetyInfoTitleTextField;
- (void)clickSaveButton:(id)arg1;
- (void)clickCancelButton:(id)arg1;
- (void)clickOKButton:(id)arg1;
- (void)returnCode:(long long)arg1;
- (void)viewWillAppear;
- (void)configureWindowButtons;
- (void)viewDidLoad;

@end

