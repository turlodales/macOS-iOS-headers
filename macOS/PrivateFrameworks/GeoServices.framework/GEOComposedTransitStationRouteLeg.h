//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@interface GEOComposedTransitStationRouteLeg : GEOComposedTransitBaseRouteLeg
{
}

- (BOOL)hasExitStationManeuver;
- (BOOL)hasEnterStationManeuver;
- (BOOL)isTransfer;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 stepRange:(struct _NSRange)arg3 transitStepRange:(struct _NSRange)arg4 pointRange:(struct _NSRange)arg5;

@end

