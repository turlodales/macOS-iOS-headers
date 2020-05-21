//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "GKDialogControllerSizing.h"
#import "GKRemoteViewControllerDelegate.h"
#import "GKViewController.h"

@class NSString;

@interface GKGameCenterViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing, GKViewController>
{
    id _internal1;
    id _internal2;
    id _internal3;
    long long _viewState;
    NSString *_leaderboardIdentifier;
    NSString *_leaderboardCategory;
    long long _leaderboardTimeScope;
    BOOL _internalFlag;
}

- (void).cxx_destruct;
@property BOOL didRequestRemoteViewController; // @synthesize didRequestRemoteViewController=_internalFlag;
@property __weak id <GKGameCenterControllerDelegate> gameCenterDelegate; // @synthesize gameCenterDelegate=_internal2;
@property(retain, nonatomic) id <GKRemoteViewController> remoteViewController; // @synthesize remoteViewController=_internal1;
- (id)_gkInGameUIUnavailableAlertWithDismissHandler:(CDUnknownBlockType)arg1;
- (BOOL)remoteViewControllerRequestingDismiss:(id)arg1;
- (void)remoteViewController:(id)arg1 receivedMessageFromService:(id)arg2;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (BOOL)shouldShowPlayForChallenge;
- (void)playPressedForChallenge:(id)arg1;
- (void)viewDidDisappear;
- (void)requestRemoteViewController;
- (void)loadView;
- (id)view;
@property long long viewState; // @synthesize viewState=_viewState;
@property(nonatomic) long long leaderboardTimeScope; // @synthesize leaderboardTimeScope=_leaderboardTimeScope;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(retain, nonatomic) NSString *leaderboardCategory;
- (struct CGSize)_gkSizeForDialogController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

