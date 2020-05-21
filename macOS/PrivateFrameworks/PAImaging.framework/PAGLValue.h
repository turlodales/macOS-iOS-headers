//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PAGLValue : NSObject
{
    void *_bytes;
    unsigned int _type;
    unsigned int _size;
    unsigned int _count;
}

+ (id)valueWithSampler3D:(int)arg1;
+ (id)valueWithSampler1D:(int)arg1;
+ (id)valueWithSampler2DRect:(int)arg1;
+ (id)valueWithMat3x2:(CDStruct_45e26d3d)arg1;
+ (id)valueWithMat4:(CDStruct_183abd6b)arg1;
+ (id)valueWithVec4:(CDStruct_09d07adb)arg1;
+ (id)valueWithVec3:(CDStruct_3ac9af65)arg1;
+ (id)valueWithVec2:(CDStruct_84af802f)arg1;
+ (id)valueWithFloat:(float)arg1;
+ (id)valueWithInt:(int)arg1;
+ (id)valueWithBytes:(const void *)arg1 type:(unsigned int)arg2;
@property(readonly, nonatomic) const void *bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned int size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void)setBytes:(const void *)arg1 offset:(unsigned int)arg2 count:(unsigned int)arg3;
- (id)description;
- (void)dealloc;
- (id)initWithType:(unsigned int)arg1 count:(unsigned int)arg2;
- (unsigned long long)_sizeForGLType:(unsigned int)arg1;

@end

