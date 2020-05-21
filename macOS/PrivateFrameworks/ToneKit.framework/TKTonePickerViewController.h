//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "TKTonePickerContentViewControllerDelegate.h"
#import "TKTonePickerViewDelegate.h"

@class NSResponder, NSString, TKTonePickerController;

@interface TKTonePickerViewController : NSViewController <TKTonePickerContentViewControllerDelegate, TKTonePickerViewDelegate>
{
    TKTonePickerController *_tonePickerController;
    id <TKTonePickerContentViewController> _tonePickerContentViewController;
    BOOL _isMonitoringHostingWindowClosing;
    unsigned long long _style;
    id <TKTonePickerViewControllerDelegate> _delegate;
}

+ (Class)_tonePickerContentViewControllerClassForStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TKTonePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)viewForSizingTonePickerView:(id)arg1;
- (id)viewForBaselineLayoutOfTonePickerView:(id)arg1;
- (void)tonePickerContentViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)_hostingWindowWillClose:(id)arg1;
- (void)_endMonitoringHostingWindowWillClose;
- (void)_beginMonitoringHostingWindowWillClose;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)loadView;
@property(readonly, nonatomic) NSResponder *tonePickerResponder;
@property(copy, nonatomic) NSString *selectedToneIdentifier;
@property(nonatomic, getter=isNoneAtTop) BOOL noneAtTop;
@property(nonatomic) BOOL showsNone;
@property(copy, nonatomic) NSString *defaultToneIdentifier;
@property(nonatomic) BOOL showsDefault;
@property(copy, nonatomic) NSString *topic;
@property(readonly, nonatomic) long long alertType;
- (void)dealloc;
- (id)initWithAlertType:(long long)arg1 style:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

