//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/_NSLayoutRelationshipNode.h>

#import "_NSLayoutRelationshipNodeParent.h"

@class NSArray, NSMutableArray, NSString;

@interface _NSCompositeLayoutRelationshipNode : _NSLayoutRelationshipNode <_NSLayoutRelationshipNodeParent>
{
    NSMutableArray *_childNodes;
}

- (void)_removeChildRelationshipNode:(id)arg1;
- (void)_addChildRelationshipNode:(id)arg1;
@property(readonly, copy) NSArray *_childRelationshipNodes;
@property(readonly, copy) NSString *debugDescription;
- (id)childNodesCreatingIfNecessary;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

