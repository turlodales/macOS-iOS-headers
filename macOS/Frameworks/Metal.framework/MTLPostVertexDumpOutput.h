//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLPostVertexDumpOutput : NSObject
{
    NSString *_airMDType;
    unsigned long long _dataType;
    NSString *_name;
    unsigned long long _offset;
}

@property(readonly) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(readonly) NSString *airMDType; // @synthesize airMDType=_airMDType;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAirMDType:(id)arg1 dataType:(unsigned long long)arg2 name:(id)arg3 offset:(unsigned long long)arg4;

@end

