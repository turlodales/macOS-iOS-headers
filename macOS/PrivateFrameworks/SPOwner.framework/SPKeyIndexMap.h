//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

__attribute__((visibility("hidden")))
@interface SPKeyIndexMap : NSObject
{
    CDStruct_e66c82b6 *_mapHandle;
    unsigned char _sequence;
    NSUUID *_beaconIdentifier;
}

- (void).cxx_destruct;
@property(readonly) CDStruct_e66c82b6 *mapHandle; // @synthesize mapHandle=_mapHandle;
@property(readonly) unsigned char sequence; // @synthesize sequence=_sequence;
@property(readonly) NSUUID *beaconIdentifier; // @synthesize beaconIdentifier=_beaconIdentifier;
- (id)headerString;
- (id)initWithBeaconIdentifier:(id)arg1 keySequence:(unsigned char)arg2 mapHandle:(CDStruct_e66c82b6 *)arg3;
- (void)dealloc;
- (id)init;

@end

