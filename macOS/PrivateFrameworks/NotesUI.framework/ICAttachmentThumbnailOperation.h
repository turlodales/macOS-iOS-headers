//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "ICAttachmentThumbnailOperation.h"

@class ICAppearanceInfo, ICAttachmentPreviewImageLoader, ICAttachmentThumbnailOperationQueue, ICThumbnailDataCache, NSManagedObjectID, NSMutableArray, NSString, NSURL;

@interface ICAttachmentThumbnailOperation : NSOperation <ICAttachmentThumbnailOperation>
{
    BOOL _attachmentPropertiesCaptured;
    BOOL _showAsFileIcon;
    BOOL _isMovie;
    double _scale;
    ICAppearanceInfo *_appearanceInfo;
    ICThumbnailDataCache *_cache;
    NSString *_cacheKey;
    CDUnknownBlockType _fallbackBlock;
    CDUnknownBlockType _processingBlock;
    ICAttachmentThumbnailOperationQueue *_queue;
    NSMutableArray *_completionBlocks;
    NSManagedObjectID *_attachmentID;
    ICAttachmentPreviewImageLoader *_attachmentPreviewImageLoader;
    NSURL *_mediaURL;
    unsigned long long _imageScaling;
    struct CGSize _minSize;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isMovie; // @synthesize isMovie=_isMovie;
@property(nonatomic) BOOL showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) ICAttachmentPreviewImageLoader *attachmentPreviewImageLoader; // @synthesize attachmentPreviewImageLoader=_attachmentPreviewImageLoader;
@property(nonatomic) BOOL attachmentPropertiesCaptured; // @synthesize attachmentPropertiesCaptured=_attachmentPropertiesCaptured;
@property(retain, nonatomic) NSManagedObjectID *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(nonatomic) __weak ICAttachmentThumbnailOperationQueue *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType processingBlock; // @synthesize processingBlock=_processingBlock;
@property(copy, nonatomic) CDUnknownBlockType fallbackBlock; // @synthesize fallbackBlock=_fallbackBlock;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) ICThumbnailDataCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) ICAppearanceInfo *appearanceInfo; // @synthesize appearanceInfo=_appearanceInfo;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
- (void)main;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2;
- (void)capturePropertiesFromAttachment:(id)arg1;
- (id)initWithAttachment:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 processingBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8 fallbackBlock:(CDUnknownBlockType)arg9 queue:(id)arg10;

@end

