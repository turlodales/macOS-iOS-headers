//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class AMPathPopUpButton, AMTokenField, AMVariablesEditorController, AMVariablesEditorDateFormatDelegate, CIColor, NSArray, NSBox, NSButton, NSColor, NSObjectController, NSPopUpButton, NSTabView, NSTextField, NSTextView, NSTokenField, OSAScriptView;

@interface AMVariablesEditorView : NSView
{
    NSBox *_nameBox;
    NSBox *_buttonBox;
    NSBox *_customDateFormatBox;
    NSBox *_customTimeFormatBox;
    NSTextField *nameField;
    NSPopUpButton *typePopUp;
    NSObjectController *_variableController;
    NSTabView *_tabView;
    AMTokenField *valueField;
    NSPopUpButton *_dateFormatPopUp;
    NSPopUpButton *_timeFormatPopUp;
    AMPathPopUpButton *_pathPopUp;
    OSAScriptView *_scriptView;
    NSPopUpButton *_shellScriptShell;
    NSTextView *_shellScriptView;
    NSButton *_doneButton;
    NSButton *_cancelButton;
    NSTextField *_dayOfWeekText;
    NSTextField *_dayOfMonthText;
    NSTextField *_monthText;
    NSTextField *_yearText;
    NSTokenField *_customDateFormat;
    NSTokenField *_dayOfWeek;
    NSTokenField *_dayOfMonth;
    NSTokenField *_month;
    NSTokenField *_year;
    NSTokenField *_customTimeFormat;
    NSTokenField *_hour;
    NSTokenField *_minute;
    NSTokenField *_second;
    NSTokenField *_ampm;
    NSTokenField *_timezone;
    NSTokenField *_milliseconds;
    AMVariablesEditorDateFormatDelegate *_dateFormatDelegate;
    AMVariablesEditorController *_controller;
    BOOL _useCustomDateFormat;
    BOOL _useCustomTimeFormat;
    BOOL _didSwitchToCustomDateFormat;
    BOOL _didSwitchToDefinedDateFormat;
    BOOL _didSwitchToCustomTimeFormat;
    BOOL _didSwitchToDefinedTimeFormat;
    NSColor *titleTextColor;
    NSColor *titlebarTopLineColor;
    NSColor *titlebarBottomLineColor;
    CIColor *titlebarTopGradientColor;
    CIColor *titlebarBottomGradientColor;
    NSColor *viewAreaTopLineColor;
    NSColor *viewAreaBottomLineColor;
    CIColor *viewAreaTopGradientColor;
    CIColor *viewAreaBottomGradientColor;
    CIColor *windowBorderColor;
    struct CGRect viewFrame;
    struct CGRect titlebarFrame;
    struct CGPath *_windowClipPath;
    struct CGPath *_borderClipPath;
    NSTextField *__nameLabelTextField;
    NSTextField *__valueLabelTextField;
    NSTextField *__pathLabelTextField;
    NSTextField *__formatDateLabelTextField;
    NSTextField *__formatTimeLabelTextField;
    NSTextField *__appleScriptLabelTextField;
    NSTextField *__shellScriptLabelTextField;
    NSArray *__crossTabViewConstraints;
}

- (void).cxx_destruct;
@property(retain) NSArray *_crossTabViewConstraints; // @synthesize _crossTabViewConstraints=__crossTabViewConstraints;
@property __weak NSTextField *_shellScriptLabelTextField; // @synthesize _shellScriptLabelTextField=__shellScriptLabelTextField;
@property __weak NSTextField *_appleScriptLabelTextField; // @synthesize _appleScriptLabelTextField=__appleScriptLabelTextField;
@property __weak NSTextField *_formatTimeLabelTextField; // @synthesize _formatTimeLabelTextField=__formatTimeLabelTextField;
@property __weak NSTextField *_formatDateLabelTextField; // @synthesize _formatDateLabelTextField=__formatDateLabelTextField;
@property __weak NSTextField *_pathLabelTextField; // @synthesize _pathLabelTextField=__pathLabelTextField;
@property __weak NSTextField *_valueLabelTextField; // @synthesize _valueLabelTextField=__valueLabelTextField;
@property __weak NSTextField *_nameLabelTextField; // @synthesize _nameLabelTextField=__nameLabelTextField;
@property(retain) CIColor *windowBorderColor; // @synthesize windowBorderColor;
@property(retain) CIColor *viewAreaBottomGradientColor; // @synthesize viewAreaBottomGradientColor;
@property(retain) CIColor *viewAreaTopGradientColor; // @synthesize viewAreaTopGradientColor;
@property(retain) NSColor *viewAreaBottomLineColor; // @synthesize viewAreaBottomLineColor;
@property(retain) NSColor *viewAreaTopLineColor; // @synthesize viewAreaTopLineColor;
@property(retain) CIColor *titlebarBottomGradientColor; // @synthesize titlebarBottomGradientColor;
@property(retain) CIColor *titlebarTopGradientColor; // @synthesize titlebarTopGradientColor;
@property(retain) NSColor *titlebarBottomLineColor; // @synthesize titlebarBottomLineColor;
@property(retain) NSColor *titlebarTopLineColor; // @synthesize titlebarTopLineColor;
@property(retain) NSColor *titleTextColor; // @synthesize titleTextColor;
@property(nonatomic) __weak NSTokenField *_customTimeFormat; // @synthesize _customTimeFormat;
@property __weak NSTokenField *_milliseconds; // @synthesize _milliseconds;
@property __weak NSTokenField *_timezone; // @synthesize _timezone;
@property __weak NSTokenField *_ampm; // @synthesize _ampm;
@property __weak NSTokenField *_second; // @synthesize _second;
@property __weak NSTokenField *_minute; // @synthesize _minute;
@property __weak NSTokenField *_hour; // @synthesize _hour;
@property __weak NSTokenField *_year; // @synthesize _year;
@property __weak NSTokenField *_month; // @synthesize _month;
@property __weak NSTokenField *_dayOfMonth; // @synthesize _dayOfMonth;
@property __weak NSTokenField *_dayOfWeek; // @synthesize _dayOfWeek;
@property(nonatomic) __weak NSTokenField *_customDateFormat; // @synthesize _customDateFormat;
@property __weak NSTextField *_yearText; // @synthesize _yearText;
@property __weak NSTextField *_monthText; // @synthesize _monthText;
@property __weak NSTextField *_dayOfMonthText; // @synthesize _dayOfMonthText;
@property __weak NSTextField *_dayOfWeekText; // @synthesize _dayOfWeekText;
@property __weak NSButton *_cancelButton; // @synthesize _cancelButton;
@property __weak NSButton *_doneButton; // @synthesize _doneButton;
@property __weak NSTextView *_shellScriptView; // @synthesize _shellScriptView;
@property(nonatomic) __weak NSPopUpButton *_shellScriptShell; // @synthesize _shellScriptShell;
@property __weak OSAScriptView *_scriptView; // @synthesize _scriptView;
@property __weak AMPathPopUpButton *_pathPopUp; // @synthesize _pathPopUp;
@property __weak NSPopUpButton *_timeFormatPopUp; // @synthesize _timeFormatPopUp;
@property __weak NSPopUpButton *_dateFormatPopUp; // @synthesize _dateFormatPopUp;
@property __weak AMTokenField *valueField; // @synthesize valueField;
@property __weak NSTabView *_tabView; // @synthesize _tabView;
@property __weak NSObjectController *_variableController; // @synthesize _variableController;
@property __weak NSPopUpButton *typePopUp; // @synthesize typePopUp;
@property __weak NSTextField *nameField; // @synthesize nameField;
@property __weak NSBox *_customTimeFormatBox; // @synthesize _customTimeFormatBox;
@property __weak NSBox *_customDateFormatBox; // @synthesize _customDateFormatBox;
@property __weak NSBox *_buttonBox; // @synthesize _buttonBox;
@property __weak NSBox *_nameBox; // @synthesize _nameBox;
@property(retain) struct CGPath *borderClipPath; // @synthesize borderClipPath=_borderClipPath;
@property(retain) struct CGPath *windowClipPath; // @synthesize windowClipPath=_windowClipPath;
@property(retain) AMVariablesEditorDateFormatDelegate *dateFormatDelegate; // @synthesize dateFormatDelegate=_dateFormatDelegate;
@property BOOL useCustomDateFormat; // @synthesize useCustomDateFormat=_useCustomDateFormat;
@property BOOL didSwitchToDefinedDateFormat; // @synthesize didSwitchToDefinedDateFormat=_didSwitchToDefinedDateFormat;
@property BOOL didSwitchToDefinedTimeFormat; // @synthesize didSwitchToDefinedTimeFormat=_didSwitchToDefinedTimeFormat;
@property BOOL didSwitchToCustomTimeFormat; // @synthesize didSwitchToCustomTimeFormat=_didSwitchToCustomTimeFormat;
@property BOOL didSwitchToCustomDateFormat; // @synthesize didSwitchToCustomDateFormat=_didSwitchToCustomDateFormat;
@property(nonatomic) BOOL useCustomTimeFormat; // @synthesize useCustomTimeFormat=_useCustomTimeFormat;
@property(nonatomic) __weak AMVariablesEditorController *controller; // @synthesize controller=_controller;
- (void)reLayout;
- (void)drawRect:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)updateWindowClipPath;
- (struct CGPath *)newTodoRoundedWindowPathForRect:(struct CGRect)arg1;
- (void)_reconfigureCrossTabViewConstraints;
- (void)awakeFromNib;
- (void)updateControls;
- (void)setupShellScriptControls;
- (void)setCustomTimeFormatControlsAreHidden:(BOOL)arg1;
- (void)useCustomTimeFormat:(id)arg1;
- (void)useTimeFormat:(id)arg1;
- (void)populateTimeFormatPopup;
- (void)setupTimeControls;
- (void)setCustomDateFormatControlsAreHidden:(BOOL)arg1;
- (void)useCustomDateFormat:(id)arg1;
- (void)useDateFormat:(id)arg1;
- (void)populateDateFormatPopup;
- (void)setupDateControls;
@property(readonly, nonatomic) double customTimeFormatBoxHeight;
@property(readonly, nonatomic) double customDateFormatBoxHeight;
- (void)unSetupDateTimeControls;
- (void)setupDateTimeControlTokenField:(id)arg1;
- (void)setupButton:(id)arg1;
- (BOOL)isFlipped;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(long long)arg3;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
@property(readonly, nonatomic) __weak NSObjectController *variableController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

