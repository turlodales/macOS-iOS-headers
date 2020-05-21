//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXUserFeedbackNodeMutating.h"

@class NSSet, NSString, SVXUserFeedback, SVXUserFeedbackNode;

@interface _SVXUserFeedbackNodeMutation : NSObject <SVXUserFeedbackNodeMutating>
{
    SVXUserFeedbackNode *_baseModel;
    NSString *_identifier;
    double _duration;
    SVXUserFeedback *_feedback;
    NSSet *_dependentNodes;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIdentifier:1;
        unsigned int hasDuration:1;
        unsigned int hasFeedback:1;
        unsigned int hasDependentNodes:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setDependentNodes:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

