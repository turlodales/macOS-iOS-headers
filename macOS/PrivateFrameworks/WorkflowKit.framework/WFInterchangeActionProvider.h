//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFActionProvider.h>

@interface WFInterchangeActionProvider : WFActionProvider
{
}

- (void)deleteCache;
- (void)updateCache:(CDUnknownBlockType)arg1;
- (id)actionWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2;
- (void)createActionsForRequests:(id)arg1;
- (id)availableActionIdentifiers;

@end

