//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKDebugTreeNode.h>

@interface VKDebugTreeDataNode : VKDebugTreeNode
{
    const struct DebugTreeNode *_node;
}

- (long long)propertyCount;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;
- (id)tagsColumn;
- (id)valueColumn;
- (id)propertyColumn;
- (id)name;
- (BOOL)isExpandable;
- (void)buildChildren;
- (id)initWithDebugTreeNode:(const struct DebugTreeNode *)arg1 withParent:(id)arg2;

@end

