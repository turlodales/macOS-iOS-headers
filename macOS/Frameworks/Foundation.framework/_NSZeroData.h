//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

__attribute__((visibility("hidden")))
@interface _NSZeroData : NSData
{
}

+ (id)data;
- (BOOL)_providesConcreteBacking;
- (id)_dispatchData;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(CDUnknownBlockType)arg4;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_isCompact;
- (const void *)bytes;
- (unsigned long long)length;

@end

