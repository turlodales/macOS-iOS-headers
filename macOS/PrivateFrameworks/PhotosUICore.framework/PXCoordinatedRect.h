//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSView;
@protocol PXAnonymousCoordinateSpace;

@interface PXCoordinatedRect : NSObject <NSCopying>
{
    NSView<PXAnonymousCoordinateSpace> *_coordinateSpace;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) NSView<PXAnonymousCoordinateSpace> *coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)rectInCoordinateSpace:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (id)init;

@end

