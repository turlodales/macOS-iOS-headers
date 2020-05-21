//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSServiceViewController.h"

#import "NCRemoteServiceContainerViewDelegate.h"

@class NCRemoteViewServiceContainerView, NCServiceWindow, NSString, NSUUID, NSView;

__attribute__((visibility("hidden")))
@interface NCServiceViewService : NSServiceViewController <NCRemoteServiceContainerViewDelegate>
{
    NCRemoteViewServiceContainerView *_rootContainer;
    NCServiceWindow *_ncServiceWindow;
    NSUUID *_uuid;
}

- (void).cxx_destruct;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) NCServiceWindow *serviceWindow; // @synthesize serviceWindow=_ncServiceWindow;
- (void)remoteViewServiceContainerView:(id)arg1 requestSizeChange:(struct CGSize)arg2 fenceRight:(id)arg3;
- (void)serviceRegisterSessionUUID:(id)arg1 forHost:(_Bool)arg2;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transaction:(id)arg2;
- (BOOL)allowsImplicitResizeRequests;
- (void)loadView;
@property(readonly) NSView *rootContainer;
- (id)remoteViewControllerInterface;
- (id)exportedObject;
- (id)exportedInterface;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

