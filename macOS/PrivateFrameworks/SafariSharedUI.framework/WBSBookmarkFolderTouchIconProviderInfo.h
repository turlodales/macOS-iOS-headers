//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSImage;

@interface WBSBookmarkFolderTouchIconProviderInfo : NSObject
{
    NSArray *_thumbnailImages;
    NSArray *_backgroundColors;
    NSImage *_touchIcon;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *touchIcon; // @synthesize touchIcon=_touchIcon;
@property(readonly, copy, nonatomic) NSArray *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(readonly, copy, nonatomic) NSArray *thumbnailImages; // @synthesize thumbnailImages=_thumbnailImages;
- (id)initWithThumbnailImages:(id)arg1 backgroundColors:(id)arg2 touchIcon:(id)arg3;
- (id)init;

@end

