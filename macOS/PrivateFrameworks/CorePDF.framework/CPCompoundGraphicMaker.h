//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPChunk, CPCluster;

__attribute__((visibility("hidden")))
@interface CPCompoundGraphicMaker : NSObject <CPDisposable>
{
    CPChunk *parentChunk;
    BOOL shapesAreVectorGraphics;
    unsigned int shapeCount;
    id *shapes;
    double pageSpread;
    CPCluster *cluster;
    unsigned int groupInfoCount;
    struct {
        unsigned int _field1;
        struct CGRect _field2;
    } *groupInfoArray;
    BOOL disposed;
}

+ (BOOL)makeCompoundGraphicsInZonesOf:(id)arg1;
- (BOOL)makeCompoundGraphics;
- (BOOL)groupOverlappingGraphics;
- (BOOL)makeCompoundGraphicsFromShapeGroups;
- (void)coalesceShapeGroups;
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)addGroupInfoWithIndex:(unsigned int)arg1 bounds:(struct CGRect)arg2;
- (BOOL)findClusterLevel;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2;

@end

