//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WeatherFoundation/WFTask.h>

@class NSLocale, WFLocation;

@interface WFAggregateCommonRequest : WFTask
{
    WFLocation *_location;
    unsigned long long _types;
    CDUnknownBlockType _completionHandler;
    NSLocale *_locale;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) unsigned long long types; // @synthesize types=_types;
@property(readonly, nonatomic) WFLocation *location; // @synthesize location=_location;
- (void)startWithService:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleCancellation;
- (void)cleanup;
- (unsigned long long)_supportedForecastTypes:(unsigned long long)arg1;
- (id)description;
- (id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

