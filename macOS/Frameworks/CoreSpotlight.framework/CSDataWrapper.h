//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_xpc_object>;

@interface CSDataWrapper : NSObject
{
    BOOL _mapped;
    NSData *_data;
    unsigned long long _dataSize;
    NSObject<OS_xpc_object> *_xpcData;
    const void *_dataPtr;
    unsigned long long _mapSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL mapped; // @synthesize mapped=_mapped;
@property(readonly, nonatomic) unsigned long long mapSize; // @synthesize mapSize=_mapSize;
@property(readonly, nonatomic) const void *dataPtr; // @synthesize dataPtr=_dataPtr;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcData; // @synthesize xpcData=_xpcData;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
- (void)dealloc;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1;
- (id)initWithXPCValue:(id)arg1;

@end

