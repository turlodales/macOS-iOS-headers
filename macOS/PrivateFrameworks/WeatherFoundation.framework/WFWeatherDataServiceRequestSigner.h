//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WFWeatherDataServiceRequestSigner : NSObject
{
}

+ (id)roundDate:(id)arg1 toMinutes:(unsigned long long)arg2;
+ (id)buildAuthHeader:(id)arg1 withSecret:(id)arg2 andDate:(id)arg3;
+ (void)signRequest:(id)arg1 withSecret:(id)arg2 andDate:(id)arg3;
+ (void)signRequest:(id)arg1 withDate:(id)arg2;

@end

