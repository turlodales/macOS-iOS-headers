//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLPTPConversionSupport.h"

@class NSMutableDictionary, NSString, NSURL, PFMediaCapabilities, PHMediaFormatConversionManager;

@interface PLPTPdFormatConversionManager : NSObject <PLPTPConversionSupport>
{
    PFMediaCapabilities *_legacyCapabilities;
    BOOL _initialized;
    PFMediaCapabilities *_peerMediaCapabilities;
    PHMediaFormatConversionManager *_mediaFormatConversionManager;
    NSURL *_temporaryDirectoryURL;
    NSMutableDictionary *_convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
}

- (void).cxx_destruct;
@property BOOL initialized; // @synthesize initialized=_initialized;
@property(retain) NSMutableDictionary *convertedLivePhotoPairingIdentifiersByOriginalIdentifiers; // @synthesize convertedLivePhotoPairingIdentifiersByOriginalIdentifiers=_convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
@property(retain) NSURL *temporaryDirectoryURL; // @synthesize temporaryDirectoryURL=_temporaryDirectoryURL;
@property(retain) PHMediaFormatConversionManager *mediaFormatConversionManager; // @synthesize mediaFormatConversionManager=_mediaFormatConversionManager;
@property(retain) PFMediaCapabilities *peerMediaCapabilities; // @synthesize peerMediaCapabilities=_peerMediaCapabilities;
- (id)effectivePeerMediaCapabilites;
- (id)conversionResultForAsset:(id)arg1 isVideo:(BOOL)arg2 isRender:(BOOL)arg3 forceLegacyConversion:(BOOL)arg4;
@property(readonly, nonatomic) BOOL penultimateIsPublic;
@property(readonly, nonatomic) BOOL peerSupportsAdjustmentBaseResources;
@property(readonly, nonatomic) BOOL peerSupportsTranscodeChoice;
- (void)invalidate;
- (BOOL)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id *)arg2 maximumSize:(struct CGSize)arg3 error:(id *)arg4;
- (id)convertedAssetLivePhotoPairingIdentifierForOriginalIdentifier:(id)arg1;
- (id)sourceForPath:(id)arg1 isVideo:(BOOL)arg2 imageDimensions:(struct CGSize)arg3;
- (id)requestForPath:(id)arg1 isVideo:(BOOL)arg2 imageDimensions:(struct CGSize)arg3;
- (id)requestForRenderImagePath:(id)arg1 imageDimensions:(struct CGSize)arg2 outputFilename:(id)arg3;
- (id)requestForOriginalAtPath:(id)arg1 isVideo:(BOOL)arg2 imageDimensions:(struct CGSize)arg3 originalPairingIdentifier:(id)arg4;
- (id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3;
- (void)dealloc;
- (BOOL)setupTemporaryDirectory;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

