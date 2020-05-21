//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface NSNaturalCubicSplineInterpolator : NSObject
{
    CDStruct_6b6ad735 *_knots;
    long long _length;
    double *_Hi;
    double *_Bi;
    double *_Ci;
    double *_Di;
    double *_Zi;
}

- (double)valueAt:(double)arg1;
- (double)_intervalAt:(double)arg1;
- (double)_intervalLength:(long long)arg1;
- (void)_calculateZiVector;
- (void)dealloc;
- (id)initWithKnots:(CDStruct_6b6ad735 *)arg1 length:(long long)arg2;

@end

