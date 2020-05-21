//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KHMapVariableLayoutElement.h"

@class KHMapMarker;

@interface KHMapMarkerAdapter : NSObject <KHMapVariableLayoutElement>
{
    KHMapMarker *_mapMarker;
    struct CGPoint _mapMarkerPoint;
    double _mapMarkerPointScale;
}

@property struct CGPoint markerPoint; // @synthesize markerPoint=_mapMarkerPoint;
@property(readonly, retain) KHMapMarker *mapMarker; // @synthesize mapMarker=_mapMarker;
- (unsigned long long)layoutChoiceIdx;
- (void)setLayoutChoiceIdx:(unsigned long long)arg1;
- (CDStruct_3496d041)rectForLayoutChoiceIdx:(unsigned long long)arg1;
- (unsigned long long)numberOfAvailableLayoutChoices;
- (void)updateMarkerPosition:(id)arg1 scale:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMapMarker:(id)arg1;
- (void)dealloc;

@end

