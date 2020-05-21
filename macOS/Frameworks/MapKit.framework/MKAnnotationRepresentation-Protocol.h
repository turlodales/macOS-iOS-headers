//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKAnnotationView<MKAnnotationRepresentation>, NSString;

@protocol MKAnnotationRepresentation <NSObject>
- (BOOL)_shouldDeselectWhenDragged;
- (BOOL)_isPendingSelectionAnimated;
- (void)_invalidateCachedCoordinate;
- (void)_setHiddenForOffscreen:(BOOL)arg1;
- (BOOL)isPersistent;
- (void)prepareForReuse;
- (NSString *)reuseIdentifier;
- (MKAnnotationView<MKAnnotationRepresentation> *)viewRepresentation;
@end

