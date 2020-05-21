//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MLMultiArray : NSObject
{
    struct MultiArrayBuffer *_pArray;
    BOOL _managingData;
    CDUnknownBlockType _deallocator;
    NSArray *_shape;
    NSArray *_strides;
}

+ (id)stringForDataType:(long long)arg1;
+ (vector_06e666a8)indexVectorFromArray:(id)arg1;
+ (id)arrayFromIndexVector:(const vector_06e666a8 *)arg1;
+ (int)cppStorageOrder:(long long)arg1;
+ (id)doubleMatrixWithValues:(id)arg1 error:(id *)arg2;
+ (id)doubleMultiArrayWithShape:(id)arg1 valueArray:(id)arg2 error:(id *)arg3;
+ (id)doubleVectorWithValues:(id)arg1;
+ (id)doubleMultiArrayWithCopyOfMultiArray:(id)arg1;
+ (struct __CVBuffer *)pixelBufferBGRA8FromMultiArrayCHW:(id)arg1 channelOrderIsBGR:(BOOL)arg2 error:(id *)arg3;
+ (struct __CVBuffer *)pixelBufferGray8FromMultiArrayHW:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *strides; // @synthesize strides=_strides;
@property(readonly, nonatomic) NSArray *shape; // @synthesize shape=_shape;
- (id)description;
@property(readonly, nonatomic) long long dataType;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) void *dataPointer;
- (void)dealloc;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)offsetForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (void)setNumber:(id)arg1 atOffset:(unsigned long long)arg2;
- (id)numberAtOffset:(unsigned long long)arg1;
- (id)initWithDataPointer:(void *)arg1 shape:(id)arg2 dataType:(long long)arg3 strides:(id)arg4 deallocator:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 error:(id *)arg3;
- (double *)doublePointer;
- (BOOL)isEqualToMultiArray:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isContiguousInOrder:(long long)arg1;
@property(readonly, nonatomic, getter=isContiguous) BOOL contiguous;
@property(readonly, nonatomic, getter=isManagingData) BOOL managingData;
@property(readonly, nonatomic) unsigned long long numberOfBytesPerElement;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 storageOrder:(long long)arg3 error:(id *)arg4;
- (BOOL)vectorizeIntoMultiArray:(id)arg1 storageOrder:(long long)arg2 error:(id *)arg3;
- (BOOL)copyIntoMultiArray:(id)arg1 error:(id *)arg2;
- (id)numberArray;
- (BOOL)setRangeWithRawData:(id)arg1 destIndex:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)fillWithNumber:(id)arg1;
- (id)squeezeDimensions:(id)arg1 error:(id *)arg2;
- (id)squeeze;
- (id)sliceAtOrigin:(id)arg1 shape:(id)arg2 squeeze:(BOOL)arg3 error:(id *)arg4;
- (void *)multiArrayBuffer;
- (id)debugQuickLookObject;

@end

