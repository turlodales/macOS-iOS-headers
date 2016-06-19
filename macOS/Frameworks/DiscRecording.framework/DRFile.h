//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DiscRecording/DRFSObject.h>

@interface DRFile : DRFSObject
{
}

+ (id)fileWithPath:(id)arg1;
+ (void)initialize;
+ (id)virtualFileWithName:(id)arg1 dataProducer:(id)arg2;
+ (id)virtualFileWithName:(id)arg1 data:(id)arg2;
+ (id)finderAliasPointingTo:(id)arg1 inFilesystem:(id)arg2;
+ (id)symLinkPointingTo:(id)arg1 inFilesystem:(id)arg2;
+ (id)hardLinkPointingTo:(id)arg1 inFilesystem:(id)arg2;
- (unsigned long long)_cfTypeID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 dataProducer:(id)arg2;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)initWithLinkType:(id)arg1 pointingTo:(id)arg2 inFilesystem:(id)arg3;
- (struct DRFileObject *)_obj;
- (id)initWithName:(id)arg1 bytes:(void *)arg2 length:(unsigned long long)arg3;
- (id)initWithFSRef:(const struct FSRef *)arg1;
- (id)initWithName:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 refCon:(void *)arg3;

@end

