//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPMediaItemArtwork : NSObject
{
    struct CGSize _bounds;
    CDUnknownBlockType _requestHandler;
}

- (void).cxx_destruct;
- (id)pngDataFromImage:(id)arg1;
- (id)pngDataWithSize:(struct CGSize)arg1;
- (id)jpegDataWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGRect imageCropRect;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)initWithBoundsSize:(struct CGSize)arg1 requestHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

