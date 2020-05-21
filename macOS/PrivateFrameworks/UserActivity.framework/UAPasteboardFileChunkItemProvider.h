//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UAPasteboardItemProviding.h"

@class NSFileHandle, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface UAPasteboardFileChunkItemProvider : NSObject <UAPasteboardItemProviding>
{
    NSString *_type;
    NSUUID *_uuid;
    NSFileHandle *_dataFile;
    NSNumber *_offsetInFile;
    long long _chunkSize;
}

- (void).cxx_destruct;
@property long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(retain) NSNumber *offsetInFile; // @synthesize offsetInFile=_offsetInFile;
@property(retain) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithType:(id)arg1 fileHandle:(id)arg2 offsetInFile:(id)arg3 size:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

