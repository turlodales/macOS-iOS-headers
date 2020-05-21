//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKAssetMetadata, BKAssetMetadataFileManager, NSString;

@interface BKAssetMetadataIOTask : NSObject
{
    BKAssetMetadata *_sourceMetadata;
    BKAssetMetadataFileManager *_manager;
    CDUnknownBlockType _progressHandler;
    NSString *_targetFilenameOverride;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *targetFilenameOverride; // @synthesize targetFilenameOverride=_targetFilenameOverride;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) BKAssetMetadataFileManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) BKAssetMetadata *sourceMetadata; // @synthesize sourceMetadata=_sourceMetadata;
- (void)cancel;
- (id)executeWithTargetDirectory:(id)arg1 error:(id *)arg2;
- (id)initWithSourceMetadata:(id)arg1 manager:(id)arg2;

@end

