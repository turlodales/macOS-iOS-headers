//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISScalableCompositorResource-Protocol.h>

@class ISIconDecoration, NSString;
@protocol ISScalableCompositorResource;

@interface ISIconDecorationResource : NSObject <ISScalableCompositorResource>
{
    ISIconDecoration *_decoration;
    id <ISScalableCompositorResource> _internalResource;
}

- (void).cxx_destruct;
@property(readonly) id <ISScalableCompositorResource> internalResource; // @synthesize internalResource=_internalResource;
@property(readonly) ISIconDecoration *decoration; // @synthesize decoration=_decoration;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)configureWithType:(id)arg1;
- (id)initWithDecoration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

