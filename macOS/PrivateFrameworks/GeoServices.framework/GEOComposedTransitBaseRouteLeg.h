//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOComposedRouteLeg.h>

@interface GEOComposedTransitBaseRouteLeg : GEOComposedRouteLeg
{
    struct _NSRange _transitStepRange;
}

+ (BOOL)supportsSecureCoding;
- (struct _NSRange)transitStepRange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)endingTransitStop;
- (id)startingTransitStop;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(struct _NSRange)arg3 transitStepRange:(struct _NSRange)arg4 pointRange:(struct _NSRange)arg5;

@end

