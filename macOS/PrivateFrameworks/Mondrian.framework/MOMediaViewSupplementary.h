//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXCollectionReusableView.h"

@class MOMediaSection, MOMediaView, NSString, UXView;

@interface MOMediaViewSupplementary : UXCollectionReusableView
{
    NSString *_uuid;
    MOMediaView *_mediaView;
    UXView *_contentView;
    unsigned long long _orientation;
    MOMediaSection *_mediaSection;
}

+ (BOOL)blocksDefaultLayoutBehavior;
+ (struct CGSize)defaultSize;
- (void).cxx_destruct;
@property(readonly) MOMediaSection *mediaSection; // @synthesize mediaSection=_mediaSection;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) UXView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) __weak MOMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
- (void)updateWithMediaSection:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)prepareForRecycling;
- (void)prepareForReuse;
- (BOOL)isFloating;
- (id)representedElementKind;
- (id)indexPath;
- (void)_setMediaView:(id)arg1;
- (void)layout;
- (BOOL)wantsUpdateLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

