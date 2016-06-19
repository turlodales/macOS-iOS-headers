//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCNMTLBuffer : NSObject
{
    long long _usedCount;
    id <MTLBuffer> _buffer;
    long long _offset;
    id _dataSource;
}

@property(nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property long long usedCount; // @synthesize usedCount=_usedCount;
- (long long)decrementUsedCount;
- (void)incrementUsedCount;
- (void)dealloc;
@property(readonly, nonatomic) void *contents;

@end

