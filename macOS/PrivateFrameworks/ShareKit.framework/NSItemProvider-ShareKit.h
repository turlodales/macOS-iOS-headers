//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSItemProvider.h>

@class NSImage, NSURL;

@interface NSItemProvider (ShareKit)
@property struct CGRect sourceImageContentRect;
@property(retain) NSImage *sourceImage;
@property struct CGRect shareImageContentRect;
@property(retain) NSImage *shareImage;
- (void)setImage:(id)arg1 forKeyPointer:(void **)arg2;
- (id)getImageForKeyPointer:(void **)arg1;
@property(retain) NSURL *movieURL;
@property(retain) NSURL *imageURL;
- (id)animationInfoDict;
- (void)SHK_movieDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_imageDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_datawithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_dataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_imagewithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_imageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_attributedStringwithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_attributedStringWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_stringwithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_stringWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_urlForTypeIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)SHK_urlWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)SHK_urlwithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)SHK_data;
- (id)SHK_string;
- (id)SHK_attributedString;
- (id)SHK_image;
- (id)SHK_urlForTypeIdentifier:(id)arg1;
- (id)SHK_url;
@end

