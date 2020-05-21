//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import "NSSecureCoding.h"

@class NSLocale, NSNumberFormatter;

@interface NSMeasurementFormatter : NSFormatter <NSSecureCoding>
{
    void *_formatter;
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringFromUnit:(id)arg1;
- (id)measurementFromString:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromMeasurement:(id)arg1;
@property(copy) NSNumberFormatter *numberFormatter;
@property(copy) NSLocale *locale;
@property long long unitStyle;
@property unsigned long long unitOptions;
- (void)dealloc;
- (id)init;

@end

