//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INObject.h"

#import "WFINObject.h"
#import "WFNaming.h"

@class NSArray, NSString;

@interface INObject (WFNaming) <WFNaming, WFINObject>
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wf_initWithIdentifier:(id)arg1 displayString:(id)arg2;

// Remaining properties
@property(readonly) NSArray *alternativeSpeakableMatches;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *identifier;
@property(readonly) NSString *pronunciationHint;
@property(readonly) NSString *spokenPhrase;
@property(readonly) Class superclass;
@property(readonly) NSString *vocabularyIdentifier;
@end

