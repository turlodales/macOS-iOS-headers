//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NUPixelFormat;

@protocol NUBuffer <NSObject>
@property(readonly, nonatomic) const void *bytes;
@property(readonly, nonatomic) long long rowBytes;
@property(readonly, nonatomic) NUPixelFormat *format;
@property(readonly, nonatomic) CDStruct_912cb5d2 size;
- (const void *)bytesAtPoint:(CDStruct_912cb5d2)arg1;
@end

