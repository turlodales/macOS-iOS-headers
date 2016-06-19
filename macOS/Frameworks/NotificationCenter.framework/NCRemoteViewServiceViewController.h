//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NCRemoteServiceContainerViewDelegate.h"

@class NCRemoteViewServiceContainerView, NCRemoteViewServiceSubsystem, NCRemoteViewServiceWindow, NSArray, NSLayoutConstraint, NSMutableDictionary, NSString, NSView, _NCRVSVCClientMarginContainer, _NCRVSVCClientRootContainer, _NCRVSVCPresentedContainer;

@interface NCRemoteViewServiceViewController : NSViewController <NCRemoteServiceContainerViewDelegate>
{
    NCRemoteViewServiceContainerView *_rootContainer;
    _NCRVSVCClientRootContainer *_clientRootContainer;
    _NCRVSVCClientMarginContainer *_clientMarginContainer;
    _NCRVSVCPresentedContainer *_presentedContainer;
    NSView *_clientView;
    NSLayoutConstraint *_windowHeightConstraint;
    NSLayoutConstraint *_windowWidthConstraint;
    NSLayoutConstraint *_preferredHeightConstraint;
    NSLayoutConstraint *_presentedHeightConstraint;
    NSArray *_clientVerticalConstraints;
    CDUnknownBlockType _readyBlock;
    unsigned long long _sizeUpdateCounter;
    NSViewController *_clientViewController;
    NSViewController *_presentedViewController;
    NCRemoteViewServiceWindow *_remoteWindow;
    NCRemoteViewServiceSubsystem *_subSystem;
}

+ (id)createViewServiceWindow;
@property(nonatomic) __weak NCRemoteViewServiceSubsystem *subSystem; // @synthesize subSystem=_subSystem;
@property(retain, nonatomic) NCRemoteViewServiceWindow *remoteWindow; // @synthesize remoteWindow=_remoteWindow;
@property(nonatomic) __weak NSViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) NSViewController *clientViewController; // @synthesize clientViewController=_clientViewController;
@property(readonly, nonatomic) NSView *rootContainer; // @synthesize rootContainer=_rootContainer;
- (void).cxx_destruct;
- (void)remoteViewServiceContainerView:(id)arg1 requestSizeChange:(struct CGSize)arg2 fenceRight:(id)arg3;
- (void)remoteViewServiceContainerViewFrameChanged:(id)arg1;
- (void)childViewControllerDidChangePreferredContentSize:(id)arg1;
- (void)_updatePresentedPreferredContentConstraints;
- (void)_updateClientPreferredContentConstraints;
- (void)_installClientView;
- (void)remoteViewActiveDisplayChanged:(unsigned int)arg1;
- (void)remoteViewReadyForDisplay:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dismissAlternateViewController:(id)arg1 fromViewController:(id)arg2;
- (void)presentAlternateViewController:(id)arg1 fromViewController:(id)arg2;
- (void)setupComplete;
- (void)clientViewDidLoad;
- (BOOL)definesPresentationContext;
- (struct CGSize)preferredContentSize;
- (void)loadView;
@property(readonly, nonatomic) NSMutableDictionary *readyContext;
@property(readonly, nonatomic) struct NSEdgeInsets marginInsets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

