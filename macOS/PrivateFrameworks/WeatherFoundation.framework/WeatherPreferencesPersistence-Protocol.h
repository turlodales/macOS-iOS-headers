//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol WeatherPreferencesPersistence <NSObject>
- (BOOL)synchronize;
- (void)setBool:(BOOL)arg1 forKey:(NSString *)arg2;
- (BOOL)boolForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
@end

