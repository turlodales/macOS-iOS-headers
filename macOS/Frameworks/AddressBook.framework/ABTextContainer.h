//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextContainer.h"

@interface ABTextContainer : NSTextContainer
{
    struct CGSize _imageSize;
}

- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(struct CGRect *)arg4;
- (double)offset;
- (struct CGRect)titleRect;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (BOOL)isSimpleRectangularTextContainer;
- (struct CGSize)imageSize;
- (struct CGPoint)imageOffset;
- (void)setImageSize:(struct CGSize)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1;

@end

