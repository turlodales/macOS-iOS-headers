//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

__attribute__((visibility("hidden")))
@interface NSVB_ViewAnimationAttributes : NSObject <NSSecureCoding>
{
    unsigned int _windowFrameAnimationInProgress:1;
    unsigned int _allowsImplicitAnimation:1;
    unsigned int _hasTimingFunctionControlPoints:1;
    CDStruct_119a7730 _c1;
    CDStruct_119a7730 _c2;
    double _duration;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) CDStruct_119a7730 c2; // @synthesize c2=_c2;
@property(nonatomic) CDStruct_119a7730 c1; // @synthesize c1=_c1;
@property double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property BOOL allowsImplicitAnimation;
@property(readonly) BOOL hasTimingFunctionControlPoints;
@property BOOL windowFrameAnimationInProgress;

@end

