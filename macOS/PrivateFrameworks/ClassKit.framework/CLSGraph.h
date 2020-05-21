//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface CLSGraph : NSObject
{
    NSMapTable *_verticesMap;
    NSMapTable *_inEdgesMap;
    NSMapTable *_outEdgesMap;
    unsigned long long _options;
}

- (void).cxx_destruct;
- (void)_traverseStartingAtVertex:(id)arg1 previousVertex:(id)arg2 visitedVertices:(id)arg3 enumerationBlock:(CDUnknownBlockType)arg4;
- (void)traverseStartingAtVertex:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)traverseVerticesPassingTest:(CDUnknownBlockType)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)traverse:(CDUnknownBlockType)arg1;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (void)_enumerateVerticesInEdges:(id)arg1 skipingEdges:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumerateOutNeighboursOfVertex:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (id)outNeighboursOfVertex:(id)arg1;
- (void)enumerateInNeighboursOfVertex:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (id)inNeighboursOfVertex:(id)arg1;
- (void)enumerateNeighboursOfVertex:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (id)neighboursOfVertex:(id)arg1;
- (void)removeSubtreeStartingAtVertex:(id)arg1;
- (void)_removeEdgeFromVertexWithID:(id)arg1 toVertexWithID:(id)arg2;
- (void)removeEdgeFromVertex:(id)arg1 toVertex:(id)arg2;
- (void)removeVertex:(id)arg1;
- (void)addEdgeFromVertex:(id)arg1 toVertex:(id)arg2;
- (void)addVertex:(id)arg1;
- (BOOL)hasEdgeFromVertex:(id)arg1 toVertex:(id)arg2;
- (BOOL)containsVertex:(id)arg1;
- (BOOL)containsVertexWithVertexID:(id)arg1;
- (id)vertexWithVertexID:(id)arg1;
- (unsigned long long)_degreeOfVertex:(id)arg1 inEdgeMap:(id)arg2;
- (unsigned long long)outDegree:(id)arg1;
- (unsigned long long)inDegree:(id)arg1;
- (unsigned long long)degree:(id)arg1;
@property(readonly, nonatomic) id <CLSGraphVertex><NSObject> anyVertex;
- (void)reset;
@property(readonly, nonatomic) unsigned long long edgeCount;
@property(readonly, nonatomic) unsigned long long vertexCount;
- (id)initWithMemoryOptions:(unsigned long long)arg1;
- (id)init;

@end

