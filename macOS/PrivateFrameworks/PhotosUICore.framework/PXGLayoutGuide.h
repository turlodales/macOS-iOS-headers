//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "PXGMutableLayoutGuide.h"

@class PXGLayout;

@interface PXGLayoutGuide : PXObservable <PXGMutableLayoutGuide>
{
    PXGLayout *_referenceLayout;
    struct CGRect _referenceRect;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PXGLayout *referenceLayout; // @synthesize referenceLayout=_referenceLayout;
@property(nonatomic) struct CGRect referenceRect; // @synthesize referenceRect=_referenceRect;
- (void)setRect:(struct CGRect)arg1 inLayout:(id)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (struct CGRect)rectInLayout:(id)arg1;

@end

