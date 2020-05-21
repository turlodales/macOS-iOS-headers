//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings;

@interface _CDCachedPeopleSuggestion : NSObject
{
    NSDate *_date;
    _CDPeopleSuggesterContext *_context;
    _CDPeopleSuggesterSettings *_settings;
    NSArray *_suggestions;
}

- (void).cxx_destruct;
@property(retain) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain) _CDPeopleSuggesterSettings *settings; // @synthesize settings=_settings;
@property(retain) _CDPeopleSuggesterContext *context; // @synthesize context=_context;
@property(retain) NSDate *date; // @synthesize date=_date;
- (BOOL)isValidForContext:(id)arg1 settings:(id)arg2 timeoutSeconds:(double)arg3;
- (BOOL)isValidForSettings:(id)arg1;
- (BOOL)isValidForContext:(id)arg1;

@end

