//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphPetNode : PGGraphNode
{
}

@property(readonly, nonatomic) NSSet *momentNodes;
@property(readonly, nonatomic) NSSet *ownerNodes;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateOwnerNodesUsingBlock:(CDUnknownBlockType)arg1;

@end

