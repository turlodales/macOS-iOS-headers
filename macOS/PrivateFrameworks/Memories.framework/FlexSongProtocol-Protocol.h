//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FMSongAsset, FMSongRendition, FlexTestingContext, NSArray, NSDictionary, NSImage, NSSet, NSString;

@protocol FlexSongProtocol
@property(readonly, nonatomic) NSDictionary *customOptions;
@property(readonly, nonatomic) long long metadataVersion;
@property(readonly, nonatomic) BOOL recalled;
@property(readonly, nonatomic) BOOL hidden;
@property(readonly, nonatomic) long long sampleRate;
@property(readonly, nonatomic) NSString *songFormat;
@property(readonly, nonatomic) NSImage *artwork;
@property(readonly, nonatomic) NSArray *assets;
@property(readonly, nonatomic) NSSet *keywords;
@property(readonly, nonatomic) NSSet *tagIDs;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSString *songName;
@property(readonly, nonatomic) NSString *audioEncoderPresetName;
@property(readonly, nonatomic) NSString *uid;
- (BOOL)verifyRendition:(FMSongRendition *)arg1 forDuration:(CDStruct_1b6d18a9)arg2 failureReason:(id *)arg3;
- (NSArray *)timedMetadataItemsWithIdentifier:(NSString *)arg1 forRendition:(FMSongRendition *)arg2;
- (NSArray *)idealDurations;
- (CDStruct_1b6d18a9)minimumDuration;
- (CDStruct_1b6d18a9)naturalDuration;
- (FMSongRendition *)renditionForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(NSDictionary *)arg2 testingContext:(FlexTestingContext *)arg3;
- (FMSongAsset *)existingAssetWithID:(NSString *)arg1;
- (FMSongAsset *)assetWithID:(NSString *)arg1;
- (void)updateAssets:(NSArray *)arg1;
- (BOOL)isLoaded;
- (BOOL)canPlay;
@end

