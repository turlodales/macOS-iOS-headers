//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ABMonogramOptions : NSObject
{
    id _impl;
}

+ (id)optionsWithDiameter:(double)arg1 backgroundStyle:(long long)arg2;
+ (id)optionsWithDiameter:(double)arg1;
+ (id)defaultOptions;
- (id)impl;
- (BOOL)isVibrant;
- (id)borderColor;
- (id)backgroundColor;
- (id)foregroundColor;
- (double)diameter;
- (void)dealloc;
- (id)initWithImpl:(id)arg1;

@end

