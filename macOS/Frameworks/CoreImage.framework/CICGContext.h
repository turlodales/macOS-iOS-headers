//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIContext.h>

@interface CICGContext : CIContext
{
    struct CICGContextPrivate *_cgPriv;
}

+ (id)contextWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
+ (id)contextWithCGContext:(struct CGContext *)arg1;
- (id)initWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
- (id)initWithCGContext:(struct CGContext *)arg1;

@end

