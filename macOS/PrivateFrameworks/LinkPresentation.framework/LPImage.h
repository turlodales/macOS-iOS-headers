//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LPAsynchronousResource.h"
#import "NSSecureCoding.h"

@class LPImageProperties, NSArray, NSData, NSImage, NSItemProvider, NSObject<OS_dispatch_group>, NSString, NSURL;

@interface LPImage : NSObject <LPAsynchronousResource, NSSecureCoding>
{
    NSImage *_originalPlatformImage;
    NSImage *_decodedPlatformImage;
    NSData *_data;
    NSString *_MIMEType;
    LPImageProperties *_properties;
    NSItemProvider *_itemProvider;
    LPImage *_imageLoadedFromItemProvider;
    NSObject<OS_dispatch_group> *_itemProviderLoadGroup;
    NSObject<OS_dispatch_group> *_asynchronousLoadGroup;
    struct CGSize _pixelSize;
    BOOL _hasComputedPixelSize;
    BOOL _hasTransparency;
    BOOL _hasComputedHasTransparency;
    BOOL _fallbackIcon;
    NSArray *_remoteURLsForEmailCompatibleOutput;
    LPImage *_darkInterfaceAlternativeImage;
    NSURL *_fileURL;
    NSImage *_platformImage;
}

+ (id)_loadImageSubsampledToScreenSizeFromData:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)_PDFImageNamed:(id)arg1 template:(BOOL)arg2;
+ (id)_PNGImageNamed:(id)arg1 template:(BOOL)arg2;
+ (id)_PNGImageNamed:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *platformImage; // @synthesize platformImage=_platformImage;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic, setter=_setDarkInterfaceAlternativeImage:) LPImage *_darkInterfaceAlternativeImage; // @synthesize _darkInterfaceAlternativeImage;
@property(retain, nonatomic) NSArray *_remoteURLsForEmailCompatibleOutput; // @synthesize _remoteURLsForEmailCompatibleOutput;
@property(nonatomic, getter=_isFallbackIcon) BOOL _fallbackIcon; // @synthesize _fallbackIcon;
@property(readonly, nonatomic) BOOL _hasTransparency;
- (id)_asTemplate;
@property(readonly, retain, nonatomic) NSItemProvider *_itemProvider;
- (void)loadAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)needsAsynchronousLoad;
@property(readonly, copy, nonatomic) NSString *_srcsetForRemoteURLs;
@property(readonly, nonatomic, getter=_isAnimated) BOOL _animated;
@property(readonly, nonatomic) struct CGSize _pixelSize;
- (BOOL)_shouldEncodeData;
@property(readonly, nonatomic) unsigned long long _encodedSize;
- (void)_mapDataFromFileURL;
- (void)_createDataFromPlatformImage;
@property(readonly, copy, nonatomic) LPImageProperties *properties;
@property(readonly, copy, nonatomic) NSString *MIMEType;
@property(readonly, copy, nonatomic) NSData *data;
- (void)_preparePlatformImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_synchronouslyDecodePlatformImageWithMaximumSize:(struct CGSize)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_waitForAsynchronouslyLoadedImageIfNeeded;
- (id)_initWithPlatformImageGenerator:(CDUnknownBlockType)arg1;
- (id)_initWithCGImage:(struct CGImage *)arg1 properties:(id)arg2;
- (id)_initWithCGImage:(struct CGImage *)arg1;
- (id)initWithItemProvider:(id)arg1 properties:(id)arg2 placeholderImage:(id)arg3;
- (id)initWithPlatformImage:(id)arg1 properties:(id)arg2;
- (id)initWithPlatformImage:(id)arg1;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2;
- (id)_initWithImage:(id)arg1 properties:(id)arg2;
- (id)_initWithImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

