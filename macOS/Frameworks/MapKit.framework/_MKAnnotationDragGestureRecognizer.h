//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPressGestureRecognizer.h"

@interface _MKAnnotationDragGestureRecognizer : NSPressGestureRecognizer
{
    struct CGPoint _dragLocation;
    BOOL _hasCustomDragLocation;
}

- (struct CGPoint)locationInView:(id)arg1;
- (void)reset;
- (void)mouseDragged:(id)arg1;
- (double)allowableMovement;

@end

