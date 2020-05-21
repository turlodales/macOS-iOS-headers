//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "SiriUIViewController.h"

@class AFAnalyticsTurnBasedInstrumentationContext, AceObject, NSString, SAUISnippet;

@interface SiriUIBaseSnippetViewController : NSViewController <SiriUIViewController>
{
    AceObject *aceObject;
    AFAnalyticsTurnBasedInstrumentationContext *_instrumentationTurnContext;
    id <SiriUIAceObjectViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SiriUIAceObjectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationTurnContext; // @synthesize instrumentationTurnContext=_instrumentationTurnContext;
@property(retain, nonatomic) AceObject *aceObject; // @synthesize aceObject;
- (double)desiredHeight;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;
@property(retain, nonatomic) SAUISnippet *snippet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

