//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

__attribute__((visibility("hidden")))
@interface _KDNode : NSObject <NSSecureCoding>
{
    _Bool _isLeaf;
    float _splitValue;
    unsigned long long _splitDimension;
    unsigned long long _splitIndex;
    unsigned long long _startingIndex;
    unsigned long long _count;
    _KDNode *_leftChild;
    _KDNode *_rightChild;
    struct _KDBoundingBox _boundingBox;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLeaf; // @synthesize isLeaf=_isLeaf;
@property(nonatomic) struct _KDBoundingBox boundingBox; // @synthesize boundingBox=_boundingBox;
@property(retain, nonatomic) _KDNode *rightChild; // @synthesize rightChild=_rightChild;
@property(retain, nonatomic) _KDNode *leftChild; // @synthesize leftChild=_leftChild;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long startingIndex; // @synthesize startingIndex=_startingIndex;
@property(nonatomic) float splitValue; // @synthesize splitValue=_splitValue;
@property(nonatomic) unsigned long long splitIndex; // @synthesize splitIndex=_splitIndex;
@property(nonatomic) unsigned long long splitDimension; // @synthesize splitDimension=_splitDimension;
- (void)print;
- (void)assignSplitsForData:(const float *)arg1 indices:(unsigned long long *)arg2 numDimensions:(unsigned long long)arg3;
- (void)partitionDataPoints:(const float *)arg1 indices:(unsigned long long *)arg2 numDimensions:(unsigned long long)arg3;
- (void)findMin:(float *)arg1 andMax:(float *)arg2 alongDimension:(unsigned long long)arg3 data:(const float *)arg4 indices:(const unsigned long long *)arg5 numDimensions:(unsigned long long)arg6;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

