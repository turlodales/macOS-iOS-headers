/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VideoMovie : Movie <NSCoding, NSCopying> {
    bool  _audioProxyExists;
    NSURL * _audioProxyURL;
    bool  _cacheMovieIsPlayable;
    bool  _cacheWillDieDuringLoad;
    bool  _cachedAssetInformationValid;
    unsigned long long  _cachedAudioTrackChannels;
    unsigned long long  _cachedAudioTrackCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedCleanAperture;
    unsigned int  _cachedCodec4cc;
    int  _cachedDuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedEncodedPixelSize;
    float  _cachedFrameRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedNaturalSize;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedPreciseAssetDuration;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _cachedTransform;
    unsigned long long  _cachedVideoTrackCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cleanAperture;
    AVAsset * _watermarkedAVAsset;
    AVAsset * _weakAVAsset;
}

@property (nonatomic) bool audioProxyExists;
@property (nonatomic, copy) NSURL *audioProxyURL;
@property (nonatomic) bool cacheMovieIsPlayable;
@property (nonatomic) bool cacheWillDieDuringLoad;
@property (nonatomic) bool cachedAssetInformationValid;
@property (nonatomic) unsigned long long cachedAudioTrackChannels;
@property (nonatomic) unsigned long long cachedAudioTrackCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedCleanAperture;
@property (nonatomic) unsigned int cachedCodec4cc;
@property (nonatomic) int cachedDuration;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedEncodedPixelSize;
@property (nonatomic) float cachedFrameRate;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedNaturalSize;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } cachedPreciseAssetDuration;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } cachedTransform;
@property (nonatomic) unsigned long long cachedVideoTrackCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cleanAperture;
@property (nonatomic, readonly) float frameRate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, retain) AVAsset *watermarkedAVAsset;
@property (nonatomic, retain) AVAsset *weakAVAsset;

- (void).cxx_destruct;
- (bool)audioProxyExists;
- (id)audioProxyURL;
- (id)avAsset;
- (void)cacheAssetInformation;
- (void)cacheAssetInformationWithCompletionHandler:(id /* block */)arg1;
- (void)cacheAudioTrackFormatInformationOfAsset:(id)arg1;
- (bool)cacheMovieIsPlayable;
- (void)cacheVideoTrackInformationOfAsset:(id)arg1;
- (bool)cacheWillDieDuringLoad;
- (bool)cachedAssetInformationValid;
- (unsigned long long)cachedAudioTrackChannels;
- (unsigned long long)cachedAudioTrackCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedCleanAperture;
- (unsigned int)cachedCodec4cc;
- (int)cachedDuration;
- (struct CGSize { double x1; double x2; })cachedEncodedPixelSize;
- (float)cachedFrameRate;
- (struct CGSize { double x1; double x2; })cachedNaturalSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cachedPreciseAssetDuration;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })cachedTransform;
- (unsigned long long)cachedVideoTrackCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cleanAperture;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)duration;
- (double)durationInSeconds;
- (struct CGSize { double x1; double x2; })encodedPixelSize;
- (struct CGSize { double x1; double x2; })encodedPixelSizeWithTransform;
- (float)frameRate;
- (bool)hasAudioTracks;
- (bool)hasVideoTracks;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifierURL:(id)arg1;
- (id)initWithIdentifierURL:(id)arg1 asset:(id)arg2;
- (id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 userInfo:(id)arg3;
- (id)initWithPath:(id)arg1;
- (bool)isMono;
- (bool)isUnsupportedFormat;
- (id)loadAVAsset;
- (void)loadAVAssetWithCompletionHandler:(id /* block */)arg1;
- (void)loadAVPlayerItemWithCompletionHander:(id /* block */)arg1 progressHandler:(id /* block */)arg2 networkAccessAllowed:(bool)arg3;
- (void)mediaserverdCrashed;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGSize { double x1; double x2; })naturalSizeWithTransform;
- (bool)renderedAdjustmentsExist;
- (void)resetCachedAssetInformation;
- (void)setAudioProxyExists:(bool)arg1;
- (void)setAudioProxyURL:(id)arg1;
- (void)setCacheMovieIsPlayable:(bool)arg1;
- (void)setCacheWillDieDuringLoad:(bool)arg1;
- (void)setCachedAssetInformationValid:(bool)arg1;
- (void)setCachedAudioTrackChannels:(unsigned long long)arg1;
- (void)setCachedAudioTrackCount:(unsigned long long)arg1;
- (void)setCachedCleanAperture:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCachedCodec4cc:(unsigned int)arg1;
- (void)setCachedDuration:(int)arg1;
- (void)setCachedEncodedPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedFrameRate:(float)arg1;
- (void)setCachedNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedPreciseAssetDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCachedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setCachedVideoTrackCount:(unsigned long long)arg1;
- (void)setCleanAperture:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWatermarkedAVAsset:(id)arg1;
- (void)setWeakAVAsset:(id)arg1;
- (id)thumbnailImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (void)updateAssetAvailability;
- (void)updateCreationDate;
- (void)updateLocation;
- (void)updateMetadata;
- (unsigned int)videoCodec;
- (id)watermarkedAVAsset;
- (id)weakAVAsset;

@end
