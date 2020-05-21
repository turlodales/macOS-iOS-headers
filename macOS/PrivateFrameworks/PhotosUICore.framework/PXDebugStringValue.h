//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXDebugValue.h>

@class NSString;

@interface PXDebugStringValue : PXDebugValue
{
    unsigned long long _highlightStyle;
    NSString *_string;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (unsigned long long)highlightStyle;
- (id)initWithLabel:(id)arg1 highlightedScore:(double)arg2;
- (id)initWithLabel:(id)arg1 doubleValue:(double)arg2;
- (id)initWithLabel:(id)arg1 integerValue:(long long)arg2;
- (id)initWithLabel:(id)arg1 boolValue:(BOOL)arg2 positiveValue:(BOOL)arg3 positiveHighlighted:(BOOL)arg4 negativeHighlighted:(BOOL)arg5;
- (id)initWithLabel:(id)arg1 string:(id)arg2 highlightStyle:(unsigned long long)arg3;

@end

