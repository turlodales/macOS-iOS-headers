//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class WFContentProperty;

@interface WFContentItemAction : WFAction
{
    WFContentProperty *_defaultProperty;
}

- (void).cxx_destruct;
- (id)unsupportedEnvironments;
- (BOOL)outputsMultipleItems;
- (BOOL)inputsMultipleItems;
- (id)inputContentClasses;
- (id)description;
@property(readonly, nonatomic) WFContentProperty *defaultProperty; // @synthesize defaultProperty=_defaultProperty;
@property(readonly, nonatomic) Class contentItemClass;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;

@end

