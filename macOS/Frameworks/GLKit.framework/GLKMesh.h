//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDLVertexDescriptor, NSArray, NSMutableArray, NSString;

@interface GLKMesh : NSObject
{
    NSMutableArray *_submeshes;
    NSMutableArray *_vertexBuffers;
    unsigned long long _vertexCount;
    MDLVertexDescriptor *_vertexDescriptor;
    NSString *_name;
}

+ (id)newMeshesFromAsset:(id)arg1 sourceMeshes:(id *)arg2 error:(id *)arg3;
+ (void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *submeshes; // @synthesize submeshes=_submeshes;
@property(readonly, nonatomic) MDLVertexDescriptor *vertexDescriptor; // @synthesize vertexDescriptor=_vertexDescriptor;
@property(readonly, nonatomic) NSArray *vertexBuffers; // @synthesize vertexBuffers=_vertexBuffers;
@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
- (void).cxx_destruct;
- (id)initWithMesh:(id)arg1 error:(id *)arg2;

@end

