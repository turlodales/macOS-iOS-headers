//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SAMountStatusTracker;

__attribute__((visibility("hidden")))
@interface SAPAStyleMountStatusTracker : NSObject
{
    SAMountStatusTracker *_tracker;
}

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_4811d97b *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(retain) SAMountStatusTracker *tracker; // @synthesize tracker=_tracker;
- (void)populateReferencesUsingBuffer:(const CDStruct_4811d97b *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;

@end

