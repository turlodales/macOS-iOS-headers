//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABSuggestionLogging.h"

@class NSString;

@interface ABDSuggestionLogger : NSObject <ABSuggestionLogging>
{
}

+ (id)allLoggers;
+ (id)defaultLogger;
+ (id)loggerWithLoggers:(id)arg1;
+ (id)sanitizingLoggerWithLogger:(id)arg1;
+ (id)loggerWithLogCategory:(id)arg1;
- (void)logPairs:(id)arg1 withMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

