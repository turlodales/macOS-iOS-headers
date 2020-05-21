//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CALayerDelegate.h"

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface ISPhotoNSView : NSView <CALayerDelegate>
{
    CALayer *_contentLayer;
    long long _photoOrientation;
    struct CGImage *_photo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)_commonISPhotoNSViewInitialization;
- (void)setPhoto:(struct CGImage *)arg1 inOrientation:(long long)arg2;
- (void)layout;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

