//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAction.h"

#import "CLAPIEngineDelegate.h"

@class CLAPIEngine, NSString;

@interface WFCloudAppUploadAction : WFAction <CLAPIEngineDelegate>
{
    CLAPIEngine *_engine;
}

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;
- (void).cxx_destruct;
@property(retain, nonatomic) CLAPIEngine *engine; // @synthesize engine=_engine;
- (void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)fileUploadDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)fileUploadDidProgress:(double)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)linkBookmarkDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)cancel;
- (void)finishRunningWithError:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

