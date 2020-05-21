//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

#import "MKArtworkImageSource.h"

@class NSString;

@interface NSImage (ArtworkImageSource) <MKArtworkImageSource>
+ (id)_mapkit_imageWithLoDPIImage:(struct CGImage *)arg1 hiDPIImage:(struct CGImage *)arg2;
+ (id)_mapkit_imageWithLoDPIData:(id)arg1 hiDPIData:(id)arg2;
+ (id)_mapkit_imageNamed:(id)arg1;
+ (id)_mapkit_imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)mapkit_imageNamed:(id)arg1;
+ (id)_mapkit_imageFromBlockGetVKImageWithScale:(CDUnknownBlockType)arg1;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 withWidthPaddingMultiple:(double)arg4;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 nightMode:(BOOL)arg4;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(BOOL)arg2;
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(BOOL)arg2;
- (id)_mapkit_horizontallyFlippedImage;
- (id)_mapkit_templateImageWithTintColor:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (struct CGImage *)mapkit_CGImageWithScale:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

