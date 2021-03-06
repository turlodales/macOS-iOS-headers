//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ReminderKitUI/NSRemoteViewDelegate-Protocol.h>
#import <ReminderKitUI/REMReminderCreationPublicViewController-Protocol.h>

@class NSRemoteView, NSRemoteViewController;
@protocol REMReminderCreationDelegate;

@interface REMReminderCreationViewController : NSViewController <NSRemoteViewDelegate, REMReminderCreationPublicViewController>
{
    NSRemoteViewController *_childViewController;
    id <REMReminderCreationDelegate> _delegate;
    NSRemoteView *_remoteView;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRemoteView *remoteView; // @synthesize remoteView=_remoteView;
@property(readonly, nonatomic) id <REMReminderCreationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=setChildViewController:) NSRemoteViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)viewServiceDidFinish;
- (void)viewServiceDidFailWithError:(id)arg1;
- (void)viewServiceDidCancel;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;
- (void)view:(id)arg1 encounteredError:(id)arg2;
- (id)viewServiceViewController;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly) BOOL shouldRetainExportedObject;

@end

