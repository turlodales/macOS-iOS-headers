//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LUTextAccessor : NSObject
{
    double _scaleFactor;
}

+ (double)scaleFactorForView:(id)arg1;
+ (id)viewAtScreenLocation:(struct CGPoint)arg1;
+ (id)windowAtScreenLocation:(struct CGPoint)arg1;
+ (BOOL)canAccessTextInView:(id)arg1;
+ (BOOL)canAccessTextAtLocation:(struct CGPoint)arg1;
+ (struct _NSRange)rangeOfTermInString:(id)arg1 containingOffset:(unsigned long long)arg2;
+ (struct _NSRange)rangeOfAddressInString:(id)arg1 forRange:(struct _NSRange)arg2;
+ (struct _NSRange)rangeOfParagraphInString:(id)arg1 containingOffset:(unsigned long long)arg2;
+ (id)textAccessorForView:(id)arg1;
+ (id)textAccessorForScreenLocation:(struct CGPoint)arg1;
+ (BOOL)enabled;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
- (struct _NSRange)trimmedTermRangeForString:(id)arg1 range:(struct _NSRange)arg2;
- (id)_termAndTextOrigin:(struct CGPoint *)arg1;
- (id)_termAtLocation:(struct CGPoint)arg1 textOrigin:(struct CGPoint *)arg2;
- (id)initWithView:(id)arg1;
- (id)initWithLocation:(struct CGPoint)arg1;
- (id)termAndTextOrigin:(struct CGPoint *)arg1;
- (id)termAtLocation:(struct CGPoint)arg1 textOrigin:(struct CGPoint *)arg2;
- (id)init;

@end

