//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PAImaging/PATiledImage.h>

@class IPARegion;

@interface _PAAutoAccessTiledImage : PATiledImage
{
    IPARegion *_autoAccessRegion;
}

- (void).cxx_destruct;
- (BOOL)_isBackingShared;
- (void)dealloc;
- (id)initWithTiledImage:(id)arg1 region:(id)arg2;

@end

