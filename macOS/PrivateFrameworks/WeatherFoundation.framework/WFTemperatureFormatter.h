//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSLocale, NSString;

@interface WFTemperatureFormatter : NSFormatter
{
    BOOL _includeDegreeSymbol;
    int _inputUnit;
    int _outputUnit;
    int _symbolType;
    struct UAMeasureFormat *_measureFormatter;
    NSLocale *_locale;
    NSString *_fallbackTemperatureString;
    unsigned long long _roundingMode;
    unsigned long long _maximumFractionDigits;
}

+ (id)temperatureFormatterWithInputUnit:(int)arg1 outputUnit:(int)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL includeDegreeSymbol; // @synthesize includeDegreeSymbol=_includeDegreeSymbol;
@property(nonatomic) int symbolType; // @synthesize symbolType=_symbolType;
@property(nonatomic) unsigned long long maximumFractionDigits; // @synthesize maximumFractionDigits=_maximumFractionDigits;
@property(nonatomic) unsigned long long roundingMode; // @synthesize roundingMode=_roundingMode;
@property(nonatomic) int outputUnit; // @synthesize outputUnit=_outputUnit;
@property(nonatomic) int inputUnit; // @synthesize inputUnit=_inputUnit;
@property(copy, nonatomic) NSString *fallbackTemperatureString; // @synthesize fallbackTemperatureString=_fallbackTemperatureString;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void)_localeDidChangeNotification:(id)arg1;
- (id)_formatTemperatureValue:(id)arg1 toUnit:(int)arg2;
- (id)formattedTemperatureFromString:(id)arg1;
- (id)formattedStringFromTemperature:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
@property(nonatomic) struct UAMeasureFormat *measureFormatter; // @synthesize measureFormatter=_measureFormatter;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

