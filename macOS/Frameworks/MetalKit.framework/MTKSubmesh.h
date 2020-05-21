//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTKMesh, MTKMeshBuffer, NSString;

@interface MTKSubmesh : NSObject
{
    unsigned long long _primitiveType;
    unsigned long long _indexType;
    MTKMeshBuffer *_indexBuffer;
    unsigned long long _indexCount;
    MTKMesh *_mesh;
    NSString *_name;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak MTKMesh *mesh; // @synthesize mesh=_mesh;
@property(readonly, nonatomic) unsigned long long indexCount; // @synthesize indexCount=_indexCount;
@property(readonly, nonatomic) MTKMeshBuffer *indexBuffer; // @synthesize indexBuffer=_indexBuffer;
@property(readonly, nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
@property(readonly, nonatomic) unsigned long long primitiveType; // @synthesize primitiveType=_primitiveType;
- (id)initWithMesh:(id)arg1 submesh:(id)arg2 device:(id)arg3 error:(id *)arg4;

@end

