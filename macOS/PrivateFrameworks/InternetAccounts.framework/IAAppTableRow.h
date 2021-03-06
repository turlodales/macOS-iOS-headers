//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class IAApplication, NSButton, NSImage, NSImageView, NSProgressIndicator, NSString, NSTextField;

@interface IAAppTableRow : NSTableRowView
{
    NSButton *_checkbox;
    NSTextField *_appNameField;
    NSTextField *_secondaryTextField;
    NSImageView *_icon;
    NSProgressIndicator *_spinner;
    IAApplication *_application;
    NSString *_serviceDisplayName;
    NSString *_appDisplayName;
    NSString *_secondaryText;
    NSImage *_originalIcon;
    id _delegate;
    BOOL _spinOnSelection;
    BOOL _disableControls;
    BOOL _controlsAreDisabled;
}

+ (id)createFromNib;
- (void).cxx_destruct;
@property BOOL disableControls; // @synthesize disableControls=_disableControls;
@property BOOL spinOnSelection; // @synthesize spinOnSelection=_spinOnSelection;
@property(retain) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain) NSString *appDisplayName; // @synthesize appDisplayName=_appDisplayName;
@property(retain) NSString *serviceDisplayName; // @synthesize serviceDisplayName=_serviceDisplayName;
@property(retain, nonatomic) IAApplication *application; // @synthesize application=_application;
- (void)checkboxClicked:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)deselect;
- (void)select;
- (void)startSpinner;
- (void)stopSpinner;
- (BOOL)isSpinning;
- (void)syncUI;
- (void)dealloc;

@end

