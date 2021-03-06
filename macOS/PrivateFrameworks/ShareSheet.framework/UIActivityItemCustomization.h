//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIActivityItemCustomization : NSObject
{
    BOOL _enabled;
    NSString *_title;
    NSString *_identifier;
}

+ (id)actionCustomizationWithTitle:(id)arg1 identifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)pickerCustomizationWithTitle:(id)arg1 identifier:(id)arg2 options:(id)arg3 selectedOptionIndex:(long long)arg4 valueChangedHandler:(CDUnknownBlockType)arg5;
+ (id)switchCustomizationWithTitle:(id)arg1 identifier:(id)arg2 value:(BOOL)arg3 valueChangedHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_initWithTitle:(id)arg1 identifier:(id)arg2;

@end

