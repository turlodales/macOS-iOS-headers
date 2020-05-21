//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLArgumentInternal.h>

__attribute__((visibility("hidden")))
@interface MTLThreadgroupMemoryArgument : MTLArgumentInternal
{
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned long long _dataType;
}

- (id)formattedDescription:(unsigned long long)arg1;
- (void)setStructType:(id)arg1;
- (void)setStructType:(id)arg1 doRetain:(BOOL)arg2;
- (id)structType;
- (id)threadgroupMemoryStructType;
- (unsigned long long)threadgroupMemoryDataType;
- (unsigned long long)threadgroupMemoryDataSize;
- (unsigned long long)threadgroupMemoryAlignment;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9;

@end

